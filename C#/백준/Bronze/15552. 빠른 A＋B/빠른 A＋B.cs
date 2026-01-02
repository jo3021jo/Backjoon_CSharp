using System;
using System.Text;
using System.IO;

internal class Program
{
    static void Main(string[] args)
    {
        // 입력을 더 빠르게 받는다.
        StreamReader sr = new StreamReader(Console.OpenStandardInput());
        // 기존 입력방식은 문자열에 추가가 되면 기존 문자열을 버리고 새로운 문자열을 만들었지만
        // (기존 string은 한번 입력받으면 수정불가)
        // StringBuilder는 기존 문자열에 추가가 가능하여 쓰래기 데이터가 쌓이는 것을 방지한다.
        StringBuilder stringBuilder = new StringBuilder();

        int T = int.Parse(sr.ReadLine());

        for (int i = 0; i < T; i++)
        {
            string[] input = sr.ReadLine().Split(" ");
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            // Append를 사용하여 문자열에 다른 문자열을 추가
            stringBuilder.Append((A + B) + "\n");
        }
        Console.WriteLine(stringBuilder);
    }
}