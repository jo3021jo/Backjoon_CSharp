using System;


class Program
{
    static void Main(string[] args)
    {
        int A = int.Parse(Console.ReadLine());
        int B = 1;

        // B가 10보다 작다면 아래 반복문 실행
    //    while(B < 10)
    //    {
    //        Console.WriteLine($"{A} * {B} = {A * B}");
    //        B++;
    //    }
        // B가 10보다 커지면 종료
       for (B = 1; B < 10; B++)
        {
            Console.WriteLine($"{A} * {B} = {A * B}");
        }
    }
}