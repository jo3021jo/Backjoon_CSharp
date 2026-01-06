using System;
using System.IO;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        StringBuilder sb = new StringBuilder();
        StreamReader sr = new StreamReader(Console.OpenStandardInput());

        while(true)
        {
            string input = sr.ReadLine();

            if(input == null)
            {
                break;
            }
            string[] input2 = input.Split(" ");
            int A = int.Parse(input2[0]);
            int B = int.Parse(input2[1]);
            sb.Append(A + B + "\n");

        }

        Console.Write(sb);
    }
}   

