using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DZIgorPS_8_
{
    delegate void GreenhouseDel(Greenhouse gh);
    class Calc
    {
        public enum operation {sum, sub, dob, div};
        Func<double, double, double> func;


        public Calc(operation op = operation.sum)
        {
            switch(op)
            {
                case operation.sum: func = Sum;
                    break;
                case operation.sub: func = Sub;
                    break;
                case operation.dob: func = Dob;
                    break;
                case operation.div: func = Div;
                    break;
            }
        }
        public Calc(Func<double, double, double> f) => func = f;


        public void SetOperation(operation op)
        {
            switch (op)
            {
                case operation.sum:
                    func = Sum;
                    break;
                case operation.sub:
                    func = Sub;
                    break;
                case operation.dob:
                    func = Dob;
                    break;
                case operation.div:
                    func = Div;
                    break;
            }
        }
        public void SetOperation(Func<double, double, double> f) => func = f;


        public double Calculate(double a, double b) => func?.Invoke(a, b) ?? double.MinValue;


        double Sum(double a, double b) => a + b;
        double Sub(double a, double b) => a - b;
        double Dob(double a, double b) => a * b;
        double Div(double a, double b)
        {
            if (b == 0)
                throw new DivideByZeroException();
            return a / b;
        }
    }

    
    class Greenhouse
    {
        double curT, maxT, minT;
        public event GreenhouseDel TooHot, TooCold, Well;

        public Greenhouse(double curt, double maxt, double mint)
        {
            curT = curt;
            maxT = maxt;
            minT = mint;
        }
        public double CurrentT
        {
            get { return curT; }
            set
            {
                curT = value;
                if (curT > maxT)
                    TooHot(this);
                else if (curT < minT)
                    TooCold(this);
                else
                    Well(this);
            }
        }
        public void print()
        {
            Console.WriteLine($"Temperature: {curT}, Max temperatur: {maxT}, Min temperature: {minT}");
        }
    }
    class Heater
    {
        public void Warm(Greenhouse gh)
        {
            Console.WriteLine($"Heater is working. Temperature: {gh.CurrentT}");
            gh.CurrentT += 5;

        }
    }
    class Cooler
    {
        public void Cool(Greenhouse gh)
        {
            Console.WriteLine($"Cooler is working. Temperature: {gh.CurrentT}");
            gh.CurrentT -= 5;

        }
    }


    class Clock
    {
        uint hour, minute;
        uint ahour, aminute;
        public event EventHandler<MyArgs> Alarm_Clock;

        public Clock(uint h, uint m)
        {
            Hour = h;
            Minute = m;
        }
        uint Hour
        {
            get { return hour; }
            set
            {
                hour = value;
                while (hour >= 24)
                    hour -= 24;
            }
        }
        uint Minute
        {
            get { return minute; }
            set
            {
                minute = value;
                while(minute >= 60)
                {
                    hour++;
                    minute -= 60;
                }
            }
        }
        public uint Ahour
        {
            get { return ahour; }
            set
            {
                ahour = value;
                while (ahour >= 24)
                    ahour -= 24;
            }
        }
        public uint Aminute
        {
            get { return aminute; }
            set
            {
                aminute = value;
                while (aminute >= 60)
                {
                    ahour++;
                    aminute -= 60;
                }
            }
        }
        public void Tick()
        {
            Minute+=1;
            if(Hour == Ahour && Minute == Aminute)
                Alarm_Clock(this, new MyArgs("Get up!"));
        }
        public void Print() => Console.WriteLine($"{Hour}.{Minute}");
    }
    class MyArgs : EventArgs
    {
        public MyArgs(string ms) => Message = ms;
        public string Message { get; set; }
    }


    class English_Ukrain_Dictionary
    {
        Dictionary<string, string> dictionary;

        public English_Ukrain_Dictionary() => dictionary = new Dictionary<string, string>();
        public void AddWord(string e, string u)
        {
            try
            {
                dictionary.Add(e, u);
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);

            }
        }
        public void ChageWord(string e, string u)
        {
            if (dictionary.ContainsKey(e))
                dictionary[e] = u;
            else
            {
                string key = null;
                foreach (var el in dictionary)
                {
                    if (el.Value == u)
                    {
                        key = el.Key;
                        break;
                    }
                }
                dictionary.Remove(key);
                dictionary.Add(e, u);
            }
        }
        public void Print()
        {
            int count = 0;
            foreach (var el in dictionary)
            {
                count++;
                Console.WriteLine($"{count}. {el.Key} - {el.Value}");
            }
        }
        public void SearchEng(string e)
        {
            if(!dictionary.ContainsKey(e))
            {
                Console.WriteLine("We can`t find this word. Sorry");
                return;
            }
            Console.WriteLine($"{e} - {dictionary[e]}");

        }
        public void SearchUkr(string u)
        {
            if(!dictionary.ContainsValue(u))
            {
                Console.WriteLine("We can`t find this word. Sorry");
                return;
            }
            foreach (var el in dictionary)
                if (el.Value == u)
                    Console.WriteLine($"{el.Key} - {u}");
        }
        public void DelWord(string e) => dictionary.Remove(e);
    }
    class Program
    {
        static void Task1()
        {
            Calc calc = new Calc();
            Console.WriteLine($"Sum(3, 7): {calc.Calculate(3, 7)}");
            calc.SetOperation(Calc.operation.sub);
            Console.WriteLine($"Sub(3, 7): {calc.Calculate(3, 7)}");
            calc.SetOperation(Calc.operation.dob);
            Console.WriteLine($"Dob(3, 7): {calc.Calculate(3, 7)}");
            calc.SetOperation(Calc.operation.div);
            Console.WriteLine($"Div(3, 7): {calc.Calculate(3, 7)}");
            calc.SetOperation((double a, double b) => a * a + b * b);
            Console.WriteLine($"Lam(3, 7): {calc.Calculate(3, 7)}");
        }
        static void Task2()
        {
            Random rand = new Random();
            Greenhouse house = new Greenhouse(36, 40, 32);
            Heater heater = new Heater();
            Cooler cooler = new Cooler();
            house.TooCold += heater.Warm;
            house.TooHot += cooler.Cool;
            house.Well += (Greenhouse gh) => Console.WriteLine($"Temperature is well. Temperatuer: {gh.CurrentT}");
            while(true)
            {
                house.print();
                double rnd = rand.Next(-20, 20) /10.0;
                Console.WriteLine($"Temperature is changing by {rnd}");
                house.CurrentT += rnd;
                string str = Console.ReadLine(); 
                if (str == "exit" || str == "Exit")
                    break;
            } 
        }
        static void Task3()
        {
            Clock clock = new Clock(0, 0);
            clock.Ahour = 1;
            clock.Aminute = 31;
            clock.Alarm_Clock += (object cl, MyArgs ma) => Console.WriteLine($"{ma.Message}");
            while(true)
            {
                Console.Clear();
                clock.Print();
                clock.Tick();
                Console.Read();
            } 
        }
        static void Task4()
        {
            English_Ukrain_Dictionary EUDictionary = new English_Ukrain_Dictionary();
            EUDictionary.AddWord("Go", "Іти");
            EUDictionary.ChageWord("Go", "Йти");
            EUDictionary.AddWord("Move", "Перемищуватися");
            EUDictionary.AddWord("Run", "Бижати");
            EUDictionary.Print();
            EUDictionary.SearchEng("Run");
            EUDictionary.SearchUkr("Йти");
            EUDictionary.SearchUkr("Іти");
            EUDictionary.DelWord("Run");
            EUDictionary.SearchUkr("Бижати");
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
