using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_3_
{
    class Program
    {
        // dop func
        static void Swap<T>(ref T a, ref T b)
        {
            var pr = a;
            a = b;
            b = pr;
        }
        static int Count(string st, char sym)
        {
            int count= 0;
            foreach (var el in st)
                if (el == sym)
                    count++;
            return count;

        }
        static string Cod(string st, int num)
        {
            char[] dop = st.ToCharArray();
            string newL = "";
            for (int i = 0; i < st.Length; i++)
            {
                dop.SetValue((char)((int)st[i] + num), i);
                newL += dop[i];
            }
            return newL;
        }
        static string deCod(string st, int num)
        {
            char[] dop = st.ToCharArray();
            string newL = "";
            for (int i = 0; i < st.Length; i++)
            {
                dop.SetValue((char)((int)st[i] - num), i);
                newL += dop[i];
            }
            return newL;
        }
        // tasks
        static void Task1()
        {
            Console.WriteLine("Task1 ---------------------------------");
            Console.Write("Line: ");
            string line = Console.ReadLine();
            Console.Write("Symbol: ");
            char sym = Console.ReadLine()[0];
            int count = 0, index = line.Length;
            for(int i = 0; i < line.Length; i++)
                if(line[i] == sym)
                    count++;
            line = line.Remove(line.LastIndexOf(sym)+1);
            Console.WriteLine("New line: " + line);
        }
        static void Task2()
        {
            Console.WriteLine("Task2 ---------------------------------");
            Console.Write("Line1: ");
            string line1 = Console.ReadLine();
            Console.Write("Line2: ");
            string line2 = Console.ReadLine();
            IEnumerable<char> line = line1.Except(line2);
            string dop = "";
            for(int i = 0; i < line1.Length; i++)
            {
                if (!line.Contains(line1[i]) && !dop.Contains(line1[i]))
                {
                    Console.WriteLine($"{line1[i]}: {Count(line1, line1[i])}");
                    dop += line1[i];
                }

            }
            string newL = "";
            foreach (var sym in line)
                newL += sym;
            Console.WriteLine($"Delete symbols: {line1.Length - newL.Length}");
            Console.WriteLine($"New line: {newL}");
            Console.WriteLine($"New line length: {newL.Length}");
        }
        static void Task3() 
        {
            Console.Write("Line: ");
            string line = Console.ReadLine();
            Console.WriteLine("   1 2 3 4 5 6 7 8 9");
            string dop = "";
            for (int i = 0; i < line.Length; i++)
            {
                if (!dop.Contains(line[i]) && char.IsLetter(line[i]))

                {
                    Console.Write($"{line[i]}:");
                    for (int j = 0; j < Count(line, line[i]); j++)
                        Console.Write("**");
                    Console.WriteLine();
                    dop += line[i];
                }

            }
        }
        static void Task4()
        {
            Console.Write("Line: ");
            string line = Console.ReadLine();
            Console.WriteLine($"Cod line: {Cod(line, 2)}");
            Console.WriteLine($"DeCod line: {deCod(Cod(line, 2), 2)}");
        }
        static void Main(string[] args)
        {
            //Task1();
            //Task2();
            //Task3();
            Task4();
        }
    }
}
