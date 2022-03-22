using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyCSharp_220105
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("인치(Inch)를 입력하세요 : ");
            int myinch = int.Parse(Console.ReadLine());
            Console.WriteLine($"{myinch}inch = {myinch * 2.54}cm");

            Console.Write("킬로그램(kg)을 입력하세요 : ");
            int mykg = int.Parse(Console.ReadLine());
            Console.WriteLine($"{mykg}kg = {mykg * 2.20462262}pound");

            const double PI = 3.14;
            Console.Write("원의 반지름을 입력하세요 : ");
            int r = int.Parse(Console.ReadLine());
            Console.WriteLine($"둘레 = {2 * PI * r}");
            Console.WriteLine($"넓이 = {PI * r * r}");

            Console.Write("첫 번째 숫자를 입력하세요 : ");
            int first = int.Parse(Console.ReadLine());
            Console.Write("두 번째 숫자를 입력하세요 : ");
            int second = int.Parse(Console.ReadLine());

            Console.WriteLine($"{first * (second % 10)}");
            Console.WriteLine($"{first * ((second / 10) % 10)}");
            Console.WriteLine($"{first * (second / 10)}");
            Console.WriteLine($"{first * second}");
        }
    }
}
