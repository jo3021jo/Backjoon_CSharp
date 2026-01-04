using System;
using System.Text;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        StringBuilder sb = new StringBuilder();
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        int N = int.Parse(sr.ReadLine());

        for (int i = 0; i < N; i++)
        {
            
            for(int j = 0; j <= i; j++)
            {
                sb.Append("*");
            }
            sb.Append("\n");
        }
        Console.Write(sb);

    }
}