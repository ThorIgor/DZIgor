using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Collections;

namespace DZIgorPS_9_
{
    
    class Program
    {
        // 1 -----------------------------------
        class Product : IComparable
        {
            public string Name { get; set; }
            public double Price { get; set; }

            public Product(string name, double price)
            {
                Name = name;
                Price = price;
            }
            public int CompareTo(object obj)
            {
                if (obj == null)
                    throw new ArgumentNullException();
                if (!(obj is Product))
                    throw new ArgumentException();
                return Price.CompareTo((obj as Product).Price);
            }
            public override string ToString()
            {
                return Name + ": " + Price;
            }
        }
        static void Swap<T>(ref T a, ref T b)
        {
            var pr = a;
            a = b;
            b = pr;
        }
        static void Sort<T>(T[] arr) where T : IComparable
        { 
            for(int i = 0; i < arr.Length; i++)
                for (int j = 0; j < arr.Length; j++)
                    if (arr[i].CompareTo(arr[j]) < 0)
                        Swap(ref arr[i], ref arr[j]);
        }
        static void PrintArr<T>(T[] arr)
        {
            foreach (var el in arr)
                Console.Write(el + " ");
            Console.WriteLine();
        }
        static void Task1()
        {
            Random rand = new Random();
            int[] iArr = new int[10];
            for (int i = 0; i < iArr.Length; i++)
                iArr[i] = rand.Next(0, 100);
            PrintArr(iArr);
            Sort(iArr);
            PrintArr(iArr);
            string[] sArr = { "Hi", "Igor", "Somebody", "Ann"};
            PrintArr(sArr);
            Sort(sArr);
            PrintArr(sArr);
            Product[] pArr = new Product[]
            {
                new Product("Meet", rand.Next(50, 200)),
                new Product("Fish", rand.Next(34, 500)),
                new Product("Milk", rand.Next(10, 50))
            };
            PrintArr(pArr);
            Sort(pArr);
            PrintArr(pArr);
        }
        // 2 -----------------------------------
        interface IMyStack<T>
        {
            void Add(T el);
            T Extract();
            T Top();
            uint Size { get; }
        }
        class MyStack<T> : IMyStack<T>, IEnumerable<T>
        {
            T[] arr;
            uint capacity;
            uint size;
            public uint Size { get => size; }
            public MyStack(uint c = 10)
            {
                capacity = c;
                arr = new T[capacity];
                size = 0;
            }
            public void Add(T el)
            {
                if (size >= capacity)
                {
                    capacity *= 2;
                    T[] dArr = arr;
                    arr = new T[capacity];
                    for (int i = 0; i < dArr.Length; i++)
                        arr[i] = dArr[i];
                }
                arr[size] = el;
                size++;
            }
            public T Extract()
            {
                if (size <= 0)
                    throw new Exception("Stack is empty");
                T dop = arr[size - 1];
                size--;
                return dop;
            }
            public T Top() => arr[size-1];
            public IEnumerator<T> GetEnumerator()
            {
                return arr.Cast<T>().GetEnumerator();
            }
            IEnumerator IEnumerable.GetEnumerator()
            {
                return arr.GetEnumerator();
            }
        }
        
        static void Task2()
        {
            Random rand = new Random();
            MyStack<int> stack = new MyStack<int>();
           
            for (int i = 0; i < 10; i++)
                stack.Add(rand.Next(0, 100));
            
            foreach (var el in stack)
                Console.Write($"{el,3}");
            Console.WriteLine();
            Console.WriteLine($"Size: {stack.Size}");
            Console.WriteLine($"Top: {stack.Top()}");
        }
        // 3 -----------------------------------
        class Student
        {
            public string Name { get; set; }
            public string LastName { get; set; }
            public byte[] Marks { get; set; }


            public Student(string name = "Noname", string lasName = "Noname")
            {
                Name = name;
                LastName = lasName;
                Marks = new byte[0];
            }
            public Student(string name, string lasName, byte[] marks)
            {
                Name = name;
                LastName = lasName;
                Marks = marks;
            }
            public override string ToString()
            {
                string student = "";
                student += Name + " " + LastName + ": ";
                foreach (var el in Marks)
                    student += el + " ";
                return student;

            }
            public byte[] ByteArray
            {
                get { return Encoding.Default.GetBytes(this.ToString()); }
            }
            public static Student StringToStudent(string student)
            {
                if (student == null)
                    throw new ArgumentNullException();
                Student std = new Student();
                string[] words = student.Split(new char[] { ' ', ':' });
                std.Name = words[0];
                std.LastName = words[1];
                byte[] marks = new byte[words.Length - 4];
                for (int i = 3; i < words.Length-1; i++)
                {
                    marks[i - 3] = byte.Parse(words[i]);
                }
                std.Marks = marks;
                return std;
            }
        }
        static class FileWorker
        {
            public static void SaveStudent(Student student, string file)
            {
                try
                {
                    using (FileStream fs = new FileStream(file, FileMode.Create, FileAccess.Write))
                    {
                        fs.Write(student.ByteArray, 0, student.ByteArray.Length);
                    }
                }
                catch(Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            public static Student LoadStudent(string file)
            {
                string str = null;
                try
                {
                    using (FileStream fs = new FileStream(file, FileMode.Open, FileAccess.Read))
                    {
                        byte[] arr = new byte[fs.Length];
                        fs.Read(arr, 0, arr.Length);
                        str = Encoding.Default.GetString(arr);
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                    throw;
                }
                return Student.StringToStudent(str);
            }
        }
        static void Task3()
        {
            try
            {
               FileWorker.SaveStudent(new Student("Sam", "Thoruk", new byte[] {10 ,11, 9, 12, 9, 8 }), "Student.txt");
               Console.WriteLine(FileWorker.LoadStudent("Student.txt").ToString());
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }
        static void Main(string[] args)
        {
            //Task1();
            Task2();
            //Task3();
        }
    }
}
