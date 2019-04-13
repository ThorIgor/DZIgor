using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test_Access
{
    class Paralelepiped : DZIgorPS_6_.Rectangle
    {
        double c;
        public Paralelepiped(double a, double b, double c) : base(a, b)
        {
            this.c = c;
        }
        public override double Square => base.Square*2 + 2*a*c + 2*b*c;
    }
    class Square : DZIgorPS_6_.Rectangle
    {
        public Square(double a) : base(a, a)
        { }
    }
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                List<DZIgorPS_6_.Shape> shapes = new List<DZIgorPS_6_.Shape>
                {
                new Paralelepiped(2, 3, 4),
                new DZIgorPS_6_.Circle(5),
                new Square(5),
                new DZIgorPS_6_.Rectangle(4, 10),
                new Square(3),
                new Paralelepiped(2, 3, 45),
                new Square(2)
                };
                foreach (var el in shapes)
                    el.Print();
                Console.WriteLine();
                Console.WriteLine($"Is all shapes bigger 10? {shapes.All(x => x.Square > 10)}");
                Console.WriteLine($"Is any paralelepiped bigger 100? {shapes.Where(x => x.GetType().Name == "Paralelepiped").Any(x => x.Square > 100)}");
                shapes.Where(x => x.GetType().Name == "Square").First(x => x.Square < 20).Print();
                shapes.Where(x => x.GetType().Name == "Square").Last(x => x.Square < 20).Print();
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }

        }
    }
}
