using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_5_
{
    class Student
    {
        enum Subject { Programming, Admin, Design }
        string _lastName;
        string _name;
        string _surname;
        int _age;
        int _group;
        int _numberBook;
        DateTime _bornDay;
        int[][] marks = new int[3][];
        const int min = 1, max = 12;

        static string school;
        static int countStud;

        static string OnlyL(string st)
        {
            string newS = "";
            for (int i = 0; i < st.Length; i++)
                if (char.IsLetter(st[i]))
                    newS += st[i];
            return newS;
        }

        static Student()
        {
            countStud = 0;
            school = "№12";
        }
        public Student(string lastName, string name, string surname, DateTime bornDay)
        {
            _lastName = lastName;
            _name = name;
            _surname = surname;
            _bornDay = bornDay;
            _age = Age;
            _group = countStud / 20 + 1;
            countStud++;
            _numberBook = countStud * 12;
        }


        public string LastName
        {
            get { return _lastName; }
            set
            {
                if (value == null)
                    return;
                _lastName = OnlyL(value);
            }
        }
        public string Name
        {
            get { return _name; }
            set
            {
                if (value == null)
                    return;
                _name = OnlyL(value);
            }
        }
        public string Surname
        {
            get { return _surname; }
            set
            {
                if (value == null)
                    return;
                _surname = OnlyL(value);
            }
        }

        static public int Count
        { get; }

        public void SetMarksProg(params int[] arr) => marks[0] = arr;
        public void SetMarksAdmin(params int[] arr) => marks[1] = arr;
        public void SetMarksDesign(params int[] arr) => marks[2] = arr;
        public int AverageProg
        {
            get
            {
                int sum = 0;
                foreach (var el in marks[0])
                    sum += el;
                return sum / marks[0].Length;
            }
        }
        public int AverageAdmin
        {
            get
            {
                int sum = 0;
                foreach (var el in marks[1])
                    sum += el;
                return sum / marks[1].Length;
            }
        }
        public int AverageDesign
        {
            get
            {
                int sum = 0;
                foreach (var el in marks[2])
                    sum += el;
                return sum / marks[2].Length;
            }
        }
        public int Average
        {
            get { return (AverageProg + AverageAdmin + AverageDesign) / 3; }
        }
        public string FirstName
        {
            get { return _lastName + " " + _name + " " + _surname; }
        }
        public int Age
        {
            get
            {
                _age = -(int)(_bornDay.Subtract(DateTime.Now).TotalDays / 365.5);
                return _age;
            }
        }
        public int Group
        { get; set; }

        public void SetMark(int SubjectNum, int numLesson, int mark)
        {
            if (SubjectNum > 2 || SubjectNum < 0)
                return;
            if (numLesson < 0 || numLesson >= marks[SubjectNum].Length)
                return;
            if (mark < min || mark > max)
                return;
            marks[SubjectNum][numLesson] = mark;
        }
        public void ClearMark()
        {
            for (int i = 0; i < marks.Length; i++)
                marks[i] = null;
        }
        public void print()
        {
            Console.WriteLine($"School: {school} Group: {Group}");
            Console.WriteLine($"First name: {FirstName} Age: {Age} Number book: {_numberBook}");
            Console.Write("Prog:");
            foreach (var el in marks[0])
                Console.Write($"{el,3}");
            Console.WriteLine();
            Console.Write("Admin:");
            foreach (var el in marks[1])
                Console.Write($"{el,3}");
            Console.WriteLine();
            Console.Write("Admin:");
            foreach (var el in marks[2])
                Console.Write($"{el,3}");
            Console.WriteLine();
        }
        public void SetStudent()
        {
            Console.Write("Last name: ");
            LastName = Console.ReadLine();
            Console.Write("Name: ");
            Name = Console.ReadLine();
            Console.Write("Surname: ");
            Surname = Console.ReadLine();
            Console.Write("Group: ");
            if (!int.TryParse(Console.ReadLine(), out _group))
                Console.WriteLine("Group must be number!!!");
        }
    }

    class Vector
    {
        double x, y;

        public Vector(double _x = 0, double _y = 0)
        {
            x = _x;
            y = _y;
        }
        public override string ToString()
        {
            return $"Vector({x}, {y})";
        }
        public override bool Equals(object obj)
        {
            if (obj == null || !(obj is Vector))
                return false;
            else
            {
                if (x == ((Vector)obj).x && y == ((Vector)obj).y)
                    return true;
                else
                    return false;
            }

        }
        public override int GetHashCode()
        {
            return base.GetHashCode();
        }
        public double Length
        { get { return Math.Sqrt(x * x + y * y); } }

        static public Vector operator +(Vector v1, Vector v2) => new Vector(v1.x + v2.y, v1.y + v2.y);
        static public Vector operator -(Vector v1, Vector v2) => new Vector(v1.x - v2.y, v1.y - v2.y);
        static public Vector operator *(Vector v1, double num) => new Vector(v1.x * num, v1.y * num);
        static public double operator *(Vector v1, Vector v2) => v1.x * v1.y + v2.x * v2.y;
        static public bool operator ==(Vector v1, Vector v2) => v1.Equals(v2);
        static public bool operator !=(Vector v1, Vector v2) => !v1.Equals(v2);
        static public Vector operator ++(Vector v1) => new Vector(v1.x++, v1.y++);
        static public Vector operator --(Vector v1) => new Vector(v1.x--, v1.y--);
        static public Vector operator -(Vector v1) => new Vector(-v1.x, -v1.y);
        static public bool operator true(Vector v1) => !(v1.x == 0 && v1.y == 0);
        static public bool operator false(Vector v1) => (v1.x == 0 && v1.y == 0);
    }
    class Program
    {
        static void Main(string[] args)
        {

        }
    }
}
