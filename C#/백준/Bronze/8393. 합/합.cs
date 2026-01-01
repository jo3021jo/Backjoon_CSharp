using System;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        int sum = 0;        // 0으로 초기화

        // i가 n보다 작거나 같을때까지만 반복하고 i를 반복할떄마다 증가
        for (int i = 0; i <= n; i++)
        {
            sum += i; 
        }

        Console.WriteLine($"{sum}");

    }
}