using System;
using System.IO;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        StringBuilder sb = new StringBuilder();
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        int N = int.Parse(sr.ReadLine());

        // i가 N번과 작거나 같을때까지만 반복
        for (int i = 1; i <= N; i++)
        {
            // j가 N-i보다 작을 때만 공백 출력
            for (int j = 0; j < N-i; j++)
            {
                sb.Append(" ");
            }
            // k가 i보다 작을때만 *출력
            for (int k = 0; k < i; k++)
            {
                sb.Append("*");
            }
            sb.Append("\n");
        }
        Console.Write(sb);
    }
}