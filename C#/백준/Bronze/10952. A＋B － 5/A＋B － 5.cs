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
            string[] input = sr.ReadLine().Split(" ");
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]); 

            // A와 B가 둘다 0이면 탈출
            if(A == 0 && B == 0)
            {
                break;
            }

            sb.Append(A + B + "\n");
        }
        Console.Write(sb);
    }
}