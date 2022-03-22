using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyCSharp_220105_05
{
    internal class Program
    {
        static void Main(string[] args)
        {
            String input = Console.ReadLine();
            while (input != "exit")
            {
                Console.Write("안녕하세요. 당신의 이름은? : ");
                input = Console.ReadLine();
                Console.WriteLine($"{input}님 안녕하세요.");
            }


            int count = 0;
            do
            {
                count++;
                Console.WriteLine("숫자를 입력하세요.");
                count = int.Parse(Console.ReadLine());
            } while (count != 0);


            for(char a = '가'; a <= '힣'; a++)
            {
                Console.Write(a);
            }
        }
    }
}
