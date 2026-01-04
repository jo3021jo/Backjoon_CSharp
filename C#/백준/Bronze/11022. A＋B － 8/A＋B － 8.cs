using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        StringBuilder sb = new StringBuilder();
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        int T = int.Parse(sr.ReadLine());

        for (int i = 1; i <= T; i++)
        {
            string[] input = sr.ReadLine().Split(" ");
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            sb.Append($"Case #{i}: {A} + {B} = {A + B}\n");
        }

        Console.Write(sb);

    }
}