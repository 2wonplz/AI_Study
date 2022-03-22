using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyCsharp_02
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("안녕하세요.");
            Console.WriteLine(Console.ReadLine());

            int a = int.Parse(Console.ReadLine());
            int.TryParse(Console.ReadLine(), out a);
            int.TryParse(Console.ReadLine(), out int b);

            String myname = Console.ReadLine();

            // cr
            Console.ReadLine();
            // intcr
            int.Parse(Console.ReadLine());
            // tryint
            int.TryParse(Console.ReadLine(), out int ex);
        }
    }
}
