using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyCSharp_ex
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 1
            int[] nums = new int[5];
            for(int i = 0; i < nums.Length; i++)
            {
                Console.Write("숫자를 입력하세요 : ");
                nums[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine($"가장 큰 수 : {nums.Max()}");
            Console.WriteLine($"가장 작은 수 : {nums.Min()}");
        }
    }
}
