using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace ConsoleApp1
{
    class Program
    {
        [DllImport(@"C:\Users\u40497\Source\Repos\Mixed_Mode_Debugging\Debug\Mixed_Mode_Debugging.dll", EntryPoint =
        "mixed_mode_multiply", CallingConvention = CallingConvention.StdCall, CharSet = CharSet.Unicode)]
        public static extern int Multiply(StringBuilder buff, int length);

        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder(100); // 20000 caracteres.

            int result = Multiply(sb, sb.Capacity);
            //sb.Length = 150;

            var lineas = sb.ToString().Split(new string[] { "&&" }, StringSplitOptions.RemoveEmptyEntries);
            foreach(var s in lineas)
            {
                Console.WriteLine(s);
            }
            //Console.WriteLine(sb.ToString());

            Console.ReadKey();
        }
    }
}
