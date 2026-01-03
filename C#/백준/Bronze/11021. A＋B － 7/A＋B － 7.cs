using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        // 쓰래기 문자열을 만들지 않게 선언
        StringBuilder sb = new StringBuilder();
        // 빠르게 입력받기 위해 선언
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        int T = int.Parse(sr.ReadLine());

        for(int i = 1; i <= T; i++)
        {
            string[] input = sr.ReadLine().Split(" ");
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            // stringBuilder에 들어오는 데로 추가
            sb.Append($"Case #{i}: " + (A + B) + "\n");
        }
        Console.Write(sb);

    }
}