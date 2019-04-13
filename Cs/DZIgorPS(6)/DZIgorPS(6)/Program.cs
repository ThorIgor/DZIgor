using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_6_
{
    // 1 ----------------------------------------------
    class Employee
    {
        string _name;
        string _lastName;
        string _position;
        ushort _salary;
        int number = ++count;
        static int count = 0;

        void IsLetter(string value)
        {
            if (value == null)
                throw new ArgumentNullException();
            foreach (var el in value)
                if (!char.IsLetter(el))
                    throw new FormatException();
        }
        public string Name
        {
            get { return _name; }
            set
            {
                IsLetter(value);
                _name = value;
            }
        }
        public string LastName
        {
            get { return _lastName; }
            set
            {
                IsLetter(value);
                _lastName = value;
            }
        }
        public string Position
        {
            get { return _position; }
            set
            {
                if (value == null)
                    throw new ArgumentNullException();
                _position = value;
            }
        }
        public int Number
        { get { return number; } }

        public void Print()
        {
            Console.WriteLine($"Name: {Name}\tLast name: {LastName}\tPosition: {Position}");
            Console.WriteLine($"Number: {Number}\tSalary: {_salary}");
        }
        public void Write()
        {
            bool end = false;
            while (!end)
            {
                try
                {
                    Console.Write("Name: ");
                    Name = Console.ReadLine();
                    Console.Write("Last name: ");
                    LastName = Console.ReadLine();
                    Console.Write("Position: ");
                    Position = Console.ReadLine();
                    Console.Write("Salary: ");
                    _salary = checked(ushort.Parse(Console.ReadLine()));
                    end = true;
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                    end = false;
                }
            }
        }
        static public Employee WriteNew()
        {
            Employee em = new Employee();
            em.Write();
            return em;
        }
    }

    class Department
    {
        List<Employee> workers = new List<Employee>();
        const int max = 10;
        public void Add(Employee em)
        {
            if (workers.Count >= max)
                throw new OverflowException();
            workers.Add(em);
        }
        public void Add()
        {
            if (workers.Count >= max)
                throw new OverflowException();
            workers.Add(Employee.WriteNew());
        }
        public void Del(int number)
        {
            if (workers.Count == 0)
                throw new ArgumentNullException();
            workers.RemoveAll(x => x.Number == number);
        }
        public void Print()
        {
            foreach (var el in workers)
                el.Print();
        }
    }



    // 2 ------------------------------------------------
    static class String 
    {
        static public int CountBigLetters(this string st)
        {
            int count = 0;
            foreach (var el in st)
                if (el > 64 && el < 91)
                    count++;
            return count;
        }
        static public string Revers(this string st)
        {
            IEnumerable<char> s = st.Reverse();
            string newS = "";
            foreach (var el in s)
                newS += el;
            return newS;
        }
        static public int Average(this string st)
        {
            int sum = 0;
            foreach (var el in st)
                sum += el;
            return sum / st.Length;
        }
    }




    public abstract class Shape
    {
        abstract public double Square { get; }
        virtual public void Print()
        {
            Console.WriteLine(this.GetType().Name + " S:" + Square);
        }
    }
    public class Circle : Shape
    {
        double R;
        public Circle(double r = 1) => R = r;
        public override double Square => Math.PI * R * R;
    }
    public class Rectangle : Shape
    {
        protected double a, b;
        public Rectangle(double a = 1, double b = 1)
        {
            this.a = a;
            this.b = b;
        }
        public override double Square => a * b;
    }

    class Program
    {
        static void Task1()
        {
            Department dep = new Department();
            bool end = false;
            while (!end)
            {
                try
                {
                    Console.WriteLine("Add  Del  Print  Exit");
                    Console.Write("Write: ");
                    string prg = Console.ReadLine();
                    switch (prg)
                    {
                        case "Add":
                            dep.Add();
                            break;
                        case "Del":
                            Console.Write("Number of employee: ");
                            int num = int.Parse(Console.ReadLine());
                            dep.Del(num);
                            break;
                        case "Print":
                            dep.Print();
                            break;
                        case "Exit":
                            end = true;
                            break;
                        default:
                            Console.WriteLine("Error");
                            break;
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
        }
        static void Task2()
        {
            string @string = "My name is Igor. Hello World!!!";
            Console.WriteLine($"Big letters: {String.CountBigLetters(@string)}");
            Console.WriteLine($"Revers: {String.Revers(@string)}");
            Console.WriteLine($"Average: {String.Average(@string)}");
        }
        static void Task3()
        {
            List<Shape> shapes = new List<Shape>
            {
                new Circle(3),
                new Rectangle(2, 7),
                new Rectangle(5, 9),
                new Circle(9)
            };
            Console.WriteLine();
            foreach (var el in shapes)
                el.Print();
            var sort = shapes.OrderBy(x => x.Square);
            Console.WriteLine();
            foreach (var el in sort)
                el.Print();
            var circles = shapes.FindAll(x => x.GetType().Name == "Circle");
            Console.WriteLine();
            foreach (var el in circles)
                el.Print();
            var result1 = shapes.Where(x => x.Square>10 && x.Square<20);
            Console.WriteLine();
            foreach (var el in result1)
                el.Print();
            var result2 = shapes.Where(x => x.GetType().Name == "Rectangle").Max(x => x.Square);
            Console.WriteLine($"Max: {result2}");
            var result3 = shapes.Where(x => x.GetType().Name == "Circle").Count(x => x.Square > 10);
            Console.WriteLine($"Count: {result3}");
            var result4 = shapes.Where(x => x.GetType().Name == "Circle").OrderBy(x => x.Square).Concat(shapes.Where(x => x.GetType().Name == "Rectangle").OrderBy(x => x.Square));
            Console.WriteLine();
            foreach (var el in result4)
                el.Print();
            Console.WriteLine();
            var result5 = shapes.Where(x => x.GetType().Name == "Rectangle").Select(x => x.Square);
            foreach (var el in result5)
                Console.Write($"{el, 4}");
            Console.WriteLine();
        }
        static void Main(string[] args)
        {
            //Task1();
            //Task2();
            Task3();
        }
    }
}
