using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyCSharp_220105_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int testnum = 100;
            if (testnum > 50)
            {
                Console.WriteLine("testnum은 50 이상");
            } else if (testnum < 0)
            {
                Console.WriteLine("testnum은 음수");
            } else
            {
                Console.WriteLine("testnum은 양수");
            }

            Console.WriteLine();
            Console.Write("나이를 입력하세요 : ");
            int age = int.Parse(Console.ReadLine());

            if (age > 0 && age < 20)
            {
                Console.WriteLine("미성년자");
            } else if (age > 20 && age < 40)
            {
                Console.WriteLine("청년");
            } else if (age > 40 && age < 60)
            {
                Console.WriteLine("중년");
            } else if (age > 60 && age < 100)
            {
                Console.WriteLine("노년");
            } else if (age > 100 && age < 124)
            {
                Console.WriteLine("장수");
            } else
            {
                Console.WriteLine("타노스");
            }
        }
    }
}
