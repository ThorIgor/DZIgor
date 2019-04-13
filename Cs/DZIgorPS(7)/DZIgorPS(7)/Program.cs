using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_7_
{
    // 1 -----------------------------
    interface IWalk
    {
        void Walk();
    }
    interface IEat
    {
        void Eat();
    }
    interface ISleep
    {
        void Sleep();
    }
    interface IWatch
    {
        void WatchW(IWalk an);
        void WatchE(IEat an);
        void WatchS(ISleep an);
    }
    abstract class Animal : IWalk, IEat, ISleep
    {
        virtual public void Walk()
        {
            Console.WriteLine($"{this.GetType().Name} is walking");
        }
        virtual public void Eat()
        {
            Console.WriteLine($"{this.GetType().Name} is eating");
        }
        virtual public void Sleep()
        {
            Console.WriteLine($"{this.GetType().Name} is sleeping");
        }
    }
    class Bear : Animal
    { }
    class Parrot : Animal
    { }
    class Lion : Animal
    { }
    class Camera : IWatch
    {
        virtual public void WatchW(IWalk an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Walk();
        }
        virtual public void WatchE(IEat an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Eat();
        }
        virtual public void WatchS(ISleep an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Sleep();
        }
    }
    class Worker : IWatch
    {
        virtual public void WatchW(IWalk an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Walk();
        }
        virtual public void WatchE(IEat an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Eat();
        }
        virtual public void WatchS(ISleep an)
        {
            Console.Write($"{this.GetType().Name} is watching how ");
            an.Sleep();
        }
        public void Feed(IEat an)
        {
            Console.WriteLine($"{this.GetType().Name} is feeding {an.GetType().Name}");
            an.Eat();
        }
    }
    class Zoo
    {
        List<Animal> _animals;
        List<Worker> _workers;
        List<Camera> _cameras;
        public Zoo(int animals, int workers, int cameras)
        {
            Random rand = new Random();
            _animals = new List<Animal>();
            for(int i = 0; i < animals; i++)
            {
                int rnd = rand.Next()%3;
                if (rnd == 0)
                    _animals.Add(new Bear());
                else if (rnd == 1)
                    _animals.Add(new Parrot());
                else if (rnd == 2)
                    _animals.Add(new Lion());
            }
            _workers = new List<Worker>();
            for (int i = 0; i < workers; i++)
                _workers.Add(new Worker());
            _cameras = new List<Camera>();
            for (int i = 0; i < cameras; i++)
                _cameras.Add(new Camera());
        }
        public void  Work()
        {
            Random rand = new Random();
            for (int i = 0; i < _animals.Count; i++)
                _workers[rand.Next() % _workers.Count].Feed(_animals[i]);
            for(int i = 0; i < _animals.Count; i++)
            {
                int rnd = rand.Next()%3;
                if (rnd == 0)
                {
                    _animals[i].Walk();
                    _cameras[rand.Next() % _cameras.Count].WatchW(_animals[i]);
                }
                else if (rnd == 1)
                {
                    _animals[i].Eat();
                    _cameras[rand.Next() % _cameras.Count].WatchE(_animals[i]);
                }
                else if (rnd == 2)
                {
                    _animals[i].Sleep();
                    _cameras[rand.Next() % _cameras.Count].WatchS(_animals[i]);
                }
            }
        }
    }

    // 2 -------------------------------------------------
    struct Drink : IComparable, IComparable<Drink>
    {
        public enum TypeOfDrink{Water, Juice, Tea, Coffee }
        public string name;
        public TypeOfDrink type;
        public string vendor;
        public int kkal;
        public int price;

        public Drink(string _name = "Water", TypeOfDrink _type = 0, string _vendor = "Noname", int _kkal = 0, int _price = 0)
        {
            name = _name;
            type = _type;
            vendor = _vendor;
            kkal = _kkal;
            price = _price;
        }
        public override string ToString()
        {
            return $"{name} {type.ToString()} {vendor} Kkal: {kkal} Price: {price}";
        }
        public int CompareTo(object drink)
        {
            if (drink.GetType().Name == "Drink")
                return this.name.CompareTo(drink);
            else
                return int.MinValue;
        }
        public int CompareTo(Drink drink)
        {
            return name.CompareTo(drink.name);
        }
    }
    interface ICompare
    {
        int Compare(object ob1, object ob2);
    }
    interface ICompare<T>
    {
        int Compare(T ob1, T ob2);
    }

    

    class Program
    {
        static void Task1()
        {
            Zoo zoo = new Zoo(10, 2, 4);
            zoo.Work();
        }
        
        static void Main(string[] args)
        {
            //Task1();
           
        }
    }
}
