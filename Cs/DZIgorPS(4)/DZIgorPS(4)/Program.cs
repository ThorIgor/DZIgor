using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_4_
{
    class Program
    {
        class Student
        {
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
                    Console.Write($"{el, 3}");
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
        static void Main(string[] args)
        {
            Student Dima = new Student("Gladunov", "Dima", "OLeksandrovich", DateTime.Parse("10. 10.2002"));
            Dima.SetMarksProg(new int[]{10, 8, 4, 11 });
            Dima.SetMarksAdmin(new int[] { 12, 9, 6 });
            Dima.SetMarksDesign(new int[] { 11, 8, 9, 6, 8, 7, 12});
            Dima.print();
        }
    }
}
