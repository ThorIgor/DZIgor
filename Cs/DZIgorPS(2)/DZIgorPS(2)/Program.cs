using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_2_
{
    class Program
    {
        static void randFill(int[] arr)
        {
            var rand = new Random();
            for (int i = 0; i < arr.Length; i++)
                arr[i] = rand.Next(-10, 11);
        }
        static void printArr(int[] arr)
        {
            foreach (var el in arr)
                Console.Write($"{el} ");
            Console.WriteLine();
        }
        static void randSwap(int[] arr)
        {
            Random rand = new Random();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] += arr[rand.Next(arr.Length)];
                arr[rand.Next(arr.Length)] = arr[i] - arr[rand.Next(arr.Length)];
                arr[i] = arr[i] - arr[rand.Next(arr.Length)];
            }
        }
        static void rmlp(int[] arr)
        {
            int[] arr1 = Array.FindAll(arr, x => x < 0);
            int[] arr2 = Array.FindAll(arr, x => x >= 0);
            arr1.CopyTo(arr, 0);
            arr2.CopyTo(arr, arr1.Length);
        }
        static int[] notRepeat(int[]arr)
        {
            int count = 0;
            for(int i = 0; i < arr.Length; i++)
            {
                for(int j = i+1; j < arr.Length; j++)
                {
                    if (arr[j] == int.MinValue)
                        continue;
                    if (arr[i] == arr[j])
                    {
                        count++;
                        arr[j] = int.MinValue;
                    }
                }
            }
            int[] notR = new int[arr.Length - count];
            count = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] == int.MinValue)
                    continue;
                notR[count] = arr[i];
                count++;
            }
            return notR;
        }
        static int[] jointArr(int[]a, int[]b)
        {
            int[] newA = notRepeat(a);
            int[] newB = notRepeat(b);
            int count = 0;
            for(int i = 0; i < newA.Length; i++)
            {
                if (newB.Count(x => x == newA[i]) > 0)
                    count++;
            }
            int[] arr = new int[count];
            count = 0;
            for (int i = 0; i < newA.Length; i++)
            {
                for (int j = 0; j < newB.Length; j++)
                {
                    if (newA[i] == newB[j])
                    {
                        arr[count] = newA[i];
                        count++;
                    }
                }
            }
            return arr;
        }
        static int[] notJointArr(int[]a, int[]b)
        {
            int count = 0;
            for (int i = 0; i < a.Length; i++)
            {
                if (b.Count(x => x == a[i]) > 0)
                    count++;
            }
            int[] arr = new int[a.Length - count];
            bool find;
            count = 0;
            for (int i = 0; i < a.Length; i++)
            {
                find = false;
                for (int j = 0; j < b.Length; j++)
                {
                    if (a[i] == b[j])
                    {
                        find = true;
                        break;
                    }
                }
                if (!find)
                {
                    arr[count] = a[i];
                    count++;
                }
            }
            return arr;
        }


        static void swap<T>(ref T a, ref T b)
        {
            var pr = a;
            a = b;
            b = pr;
        }
        static int[][] creatJ()
        {
            Console.Write("Rows: ");
            int[][] arr = new int[int.Parse(Console.ReadLine())][];
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write("Columns: ");
                arr[i] = new int[int.Parse(Console.ReadLine())];
            }
            return arr;
        }
        static void randJ(int[][] arr)
        {
            Random rand = new Random();
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = 0; j < arr[i].Length; j++)
                    arr[i][j] = rand.Next(-10, 11);
            }
        }
        static void printJ(int[][] arr)
        {
            foreach (var elm in arr)
            {
                foreach (var el in elm)
                    Console.Write($"{el,-5}");
                Console.WriteLine();
            }
        }
        static void moveUp(int[][] arr, int poz = 1)
        {
            for (int j = 0; j < poz; j++)
                for (int i = 1; i < arr.Length; i++)
                    swap(ref arr[i - 1], ref arr[i]);
        }
        static void moveDown(int[][] arr, int poz = 1)
        {
            for (int j = 0; j < poz; j++)
                for (int i = arr.Length - 2; i >= 0; i--)
                    swap(ref arr[i], ref arr[i + 1]);
        }



        static void MaxMin(int[]arr, out int max, out int min)
        {
            max = int.MinValue;
            min = int.MaxValue;
            foreach(int el in arr)
            {
                if (el > max)
                    max = el;
                if (el < min)
                    min = el;
            }
        }



        static void Task1()
        {
            int[] arr = new int[10];
            randFill(arr);
            Console.WriteLine("Task1: ");
            printArr(arr);
            
            rmlp(arr);
            Console.Write("Rmlp: ");
            printArr(arr);
        }
        static void Task2()
        {
            int[] arr = new int[10];
            randFill(arr);
            Console.WriteLine("Task2: ");
            printArr(arr);

            int num;
            Console.Write("Enter number: ");
            num = Int32.Parse(Console.ReadLine());
            Console.WriteLine($"Count number: {Array.FindAll(arr, x => x == num).Length}");
        }
        static void Task3()
        {
            int[] arr = new int[10];
            randFill(arr);
            Console.WriteLine("Task3: ");
            printArr(arr);

            Console.WriteLine($"Max: {arr.Max()} Min: {arr.Min()}");
            int max = Array.IndexOf(arr, arr.Max()), min = Array.IndexOf(arr, arr.Min()), sum = 0;
            for (int i = (max > min) ? min : max; i <= ((max > min) ? max : min); i++)
                sum += arr[i];
            Console.WriteLine($"Sum: {sum}");
        }
        static  void Task4()
        {
            Console.WriteLine("Task4: ");
            int[] price = new int[4] { 40, 24, 11, 67 };
            string[] goods = new string[4] { "Meat", "Milk", "Bread", "Fish" };
            Array.Sort(price, goods);
            Console.Write("Market: ");
            for (int i = 0; i < goods.Length; i++)
                Console.Write($"{goods[i]} {price[i]} ");
            Console.WriteLine();
        }
        static void Task5()
        {
            Console.WriteLine("Task5: ");
            int[] arr1 = new int[10];
            int[] arr2 = new int[12];
            randFill(arr1);
            Console.Read();
            randFill(arr2);
            Console.Write("Arr1: ");
            printArr(arr1);
            Console.Write("Arr2: ");
            printArr(arr2);

            Console.Write("Joint: ");
            printArr(jointArr(arr1, arr2));
            Console.Write("NotJoint: ");
            printArr(notJointArr(arr1, arr2));
        }
        static void Task6()
        {
            int[][] arr = creatJ();
            randJ(arr);
            printJ(arr);
            Console.WriteLine();

            moveDown(arr);
            printJ(arr);
            Console.WriteLine();

            moveUp(arr, 2);
            printJ(arr);
            Console.WriteLine();
        }
        static void Task7()
        {
            try
            {
                Console.Write("X: ");
                int sizeX = int.Parse(Console.ReadLine());
                Console.Write("Y: ");
                int sizeY = int.Parse(Console.ReadLine());
                int[,] mtr = new int[sizeX, sizeY];
                int ang = 1; // 1 v 2 > 3 ^ 4 <
                mtr[sizeX / 2, sizeY / 2] = 1;
                int x = sizeX / 2, y = sizeY / 2;
                string com = null;
                while(com != "stop")
                {
                    for(int j = 0; j < sizeX+2; j++)
                        Console.Write("#");
                    Console.WriteLine();
                    for (int i = 0; i < sizeY; i++)
                    {
                        Console.Write("#");
                        for (int j = 0; j < sizeX; j++)
                        {
                            if (mtr[j, i] == 1)
                                Console.Write("R");
                            else
                                Console.Write(" ");
                        }
                        Console.Write("#");
                        Console.WriteLine();
                    }
                    for (int j = 0; j < sizeX+2; j++)
                        Console.Write("#");
                    Console.WriteLine();
                    Console.Write($"Direction: ");
                    switch(ang)
                    {
                        case 1:
                            Console.WriteLine($"North");
                            break;
                        case 2:
                            Console.WriteLine($"East");
                            break;
                        case 3:
                            Console.WriteLine($"South");
                            break;
                        case 4:
                            Console.WriteLine($"West");
                            break;
                    }
                    int count = 0;
                    com = Console.ReadLine();
                    for (int i = 0; i < com.Length; i++)
                        if (com[i] == ' ')
                            count++;
                    string[] words = new string[count+1];
                    count = 0;
                    for (int i = 0; i < com.Length; i++)
                    {
                        if(com[i] == ' ')
                        {
                            count++;
                            continue;
                        }
                        words[count] += com[i]; 
                    }
                    int num;
                    foreach(var el in words)
                    {
                        if(int.TryParse(el, out num))
                        {
                            switch (ang)
                            {
                                case 1:
                                    mtr[x, y] = 0;
                                    if (num + y > sizeY)
                                        y = sizeY - 1;
                                    else
                                        y += num;
                                    mtr[x, y] = 1;
                                    break;
                                case 2:
                                    mtr[x, y] = 0;
                                    if (num + x > sizeX)
                                        x = sizeX - 1;
                                    else
                                        x += num;
                                    mtr[x, y] = 1;
                                    break;
                                case 3:
                                    mtr[x, y] = 0;
                                    if(y-num < 0)
                                        y = 0;
                                    else
                                        y -= num;
                                    mtr[x, y] = 1;
                                    break;
                                case 4:
                                    mtr[x, y] = 0;
                                    if (x - num < 0)
                                        x = 0;
                                    else
                                        x -= num;
                                    mtr[x, y] = 1;
                                    break;
                            }
                        }
                        else if(el == "R")
                        {
                            ang--;
                            if(ang < 1)
                                ang = 4;
                        }
                        else if (el == "L")
                        {
                            ang++;
                            if (ang > 4)
                                ang = 1;
                        }
                    }
                }
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return;
            }
            
        }
        static void Task8()
        {
            int[] arr = new int[10];
            randFill(arr);
            Console.WriteLine("Task8: ");
            printArr(arr);

            int max, min;
            MaxMin(arr, out max, out min);
            Console.WriteLine($"Max: {max} Min: {min}");
        }
        static void Main(string[] args)
        {
            //-------------Одновимірні масиви C #-----------------
            //Task1();
            //Task2();
            Task3();
            //Task4();
            //Task5();
            //-------Багатовимірні масиви. Масиви масивів.--------
            //Task6();
            //Task7();
            //---------------------Методи-------------------------
            //Task8();
        }
    }
}
