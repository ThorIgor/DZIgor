using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_1_
{
    class Program
    {
        static void Task1()
        {
            Console.WriteLine("Workers: accountant, programmer, medic");
            Console.Write("Worker: ");
            string worker = Console.ReadLine();
            Console.Write("Hours: ");
            int hours;
            try
            {
                hours = int.Parse(Console.ReadLine());
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return;
            }
            switch(worker)
            {
                case "accountent":
                case "Accountant":
                    Console.WriteLine(worker + $": {hours*100}grn");
                    break;
                case "programmer":
                case "Programmer":
                    Console.WriteLine(worker + $": {hours * 250}grn");
                    break;
                case "medic":
                case "Medic:":
                    Console.WriteLine(worker + $": {hours * 200}grn");
                    break;
                default:
                    Console.WriteLine(worker + $": {hours * 30}grn");
                    break;
            }
        }
        static void Task2()
        {
            int A, B;
            try
            {
                Console.Write("A: ");
                A = int.Parse(Console.ReadLine());
                Console.Write("B: ");
                B = int.Parse(Console.ReadLine());
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return;
            }
            for(int i = A; i <= B; i++)
            {
                for (int j = 0; j < i; j++)
                    Console.Write($"{i, -3}");
                Console.WriteLine();
            }
        }
        static void Task3()
        {
            int num, dnum;
            try
            {
                Console.Write("Number: ");
                num = int.Parse(Console.ReadLine());
                dnum = num;
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return;
            }
            int count = 0;
            for (int i = 1; i < num; i *= 10)
                count++;
            int[] numbers = new int[count+1];
            count = 0;
            for (int i = 1; i < num; i *= 10)
            {
                numbers[count] = (num % (i * 10)) / i;
                count++;
            }
            num = 0; count--;
            for (int i = 1; i < dnum; i *= 10)
            {
                num += numbers[count]*i;
                count--;
            }
            Console.WriteLine($"Number: {num}");
        }
        static void Task4()
        {
            int prb = 0, num = 0, let = 0, znk = 0;
            char zn = (char)0;
            while(zn != '.')
            {
                zn = (char)Console.Read();
                if (zn < 58 && zn > 47)
                    num++;
                else if (zn == ' ')
                    prb++;
                else if (zn > 64 && zn < 91 || zn > 96 && zn < 123)
                    let++;
                else
                    znk++;
            }
            Console.WriteLine($"Probels: {prb} Numbers: {num} Letters: {let} Znuks: {znk}");
        }
        static void Task5()
        {
            char zn = (char)0;
            while (zn != '.')
            {
                zn = (char)Console.Read();
                if (zn > 64 && zn < 91)
                    zn = (char)(zn + 32);
                else if (zn > 96 && zn < 123)
                    zn = (char)(zn - 32);
                Console.Write($"{zn}");
            }
            Console.WriteLine();
        }
        static void Main(string[] args)
        {
            //Task1();
            //Task2();
            //Task3();
            //Task4();
            Task5();
        }
    }
}
