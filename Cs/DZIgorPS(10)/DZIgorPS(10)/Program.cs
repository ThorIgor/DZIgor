using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Text.RegularExpressions;

namespace DZIgorPS_10_
{
    class Program
    {
        // 1 -----------------------------------
        class AppSettingHelper
        {
            string file;
            public AppSettingHelper(string FileName) => file = FileName;
            public void Save()
            {
                try
                {
                    using (BinaryWriter bw = new BinaryWriter(new FileStream(file, FileMode.Create)))
                    {
                        bw.Write((int)Console.BackgroundColor);
                        bw.Write((int)Console.ForegroundColor);
                        bw.Write(Console.Title);
                        bw.Write(Console.WindowHeight);
                        bw.Write(Console.WindowWidth);
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            public void Load()
            {
                try
                {
                    using (BinaryReader br = new BinaryReader(new FileStream(file, FileMode.Open)))
                    {
                        Console.BackgroundColor = (ConsoleColor)br.ReadInt32();
                        Console.ForegroundColor = (ConsoleColor)br.ReadInt32();
                        Console.Title = br.ReadString();
                        Console.WindowHeight = br.ReadInt32();
                        Console.WindowWidth = br.ReadInt32();
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
        }
        static void ChangeColor(string color)
        {
            if (color.Length > 2)
                return;
            switch(color[0])
            {
                case '0':
                    Console.BackgroundColor = ConsoleColor.Black;
                    break;
                case '1':
                    Console.BackgroundColor = ConsoleColor.Blue;
                    break;
                case '2':
                    Console.BackgroundColor = ConsoleColor.Green;
                    break;
                case '3':
                    Console.BackgroundColor = ConsoleColor.Cyan;
                    break;
                case '4':
                    Console.BackgroundColor = ConsoleColor.Red;
                    break;
                case '5':
                    Console.BackgroundColor = ConsoleColor.Magenta;
                    break;
                case '6':
                    Console.BackgroundColor = ConsoleColor.Yellow;
                    break;
                case '7':
                    Console.BackgroundColor = ConsoleColor.White;
                    break;
                case '8':
                    Console.BackgroundColor = ConsoleColor.Gray;
                    break;
                case '9':
                    Console.BackgroundColor = ConsoleColor.DarkBlue;
                    break;
                case 'A':
                    Console.BackgroundColor = ConsoleColor.DarkGreen;
                    break;
                case 'B':
                    Console.BackgroundColor = ConsoleColor.DarkCyan;
                    break;
                case 'C':
                    Console.BackgroundColor = ConsoleColor.DarkRed;
                    break;
                case 'D':
                    Console.BackgroundColor = ConsoleColor.DarkMagenta;
                    break;
                case 'E':
                    Console.BackgroundColor = ConsoleColor.DarkYellow;
                    break;
                case 'F':
                    Console.BackgroundColor = ConsoleColor.DarkGray;
                    break;
            }
            switch (color[1])
            {
                case '0':
                    Console.ForegroundColor = ConsoleColor.Black;
                    break;
                case '1':
                    Console.ForegroundColor = ConsoleColor.Blue;
                    break;
                case '2':
                    Console.ForegroundColor = ConsoleColor.Green;
                    break;
                case '3':
                    Console.ForegroundColor = ConsoleColor.Cyan;
                    break;
                case '4':
                    Console.ForegroundColor = ConsoleColor.Red;
                    break;
                case '5':
                    Console.ForegroundColor = ConsoleColor.Magenta;
                    break;
                case '6':
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    break;
                case '7':
                    Console.ForegroundColor = ConsoleColor.White;
                    break;
                case '8':
                    Console.ForegroundColor = ConsoleColor.Gray;
                    break;
                case '9':
                    Console.ForegroundColor = ConsoleColor.DarkBlue;
                    break;
                case 'A':
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    break;
                case 'B':
                    Console.ForegroundColor = ConsoleColor.DarkCyan;
                    break;
                case 'C':
                    Console.ForegroundColor = ConsoleColor.DarkRed;
                    break;
                case 'D':
                    Console.ForegroundColor = ConsoleColor.DarkMagenta;
                    break;
                case 'E':
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    break;
                case 'F':
                    Console.ForegroundColor = ConsoleColor.DarkGray;
                    break;
            }
        
        }
        // 2 -----------------------------------
        static class ConsoleSym
        {

            static void Creat(string FileName)
            {
                try
                {
                    string dop = "";
                    while (true)
                    {
                        dop += Console.ReadLine() + Environment.NewLine;
                        if (dop.ToLower().Contains("end"))
                            break;
                    }
                    File.WriteAllText(Directory.GetCurrentDirectory() + "\\" + FileName, dop.Remove(dop.Length - 5, 5));
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Type(string FileName)
            {
                try
                {
                    Console.WriteLine(File.ReadAllText(Directory.GetCurrentDirectory() + "\\" + FileName));
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Cd(string path)
            {
                try
                {
                    Directory.SetCurrentDirectory(path);
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Dir(string dop = null)
            {
                try
                {
                    if (dop == null)
                    {
                        DirectoryInfo info = new DirectoryInfo(Directory.GetCurrentDirectory());
                        foreach (var el in info.GetDirectories())
                            Console.WriteLine($"{el.CreationTime,15} <DIR> {el.Name,10}");
                        foreach (var el in info.GetFiles())
                            Console.WriteLine($"{el.CreationTime,15} {el.Length,10} {el.Name}");
                    }
                    else if (dop == "\\")
                    {
                        DirectoryInfo info = new DirectoryInfo("C:\\");
                        foreach (var el in info.GetDirectories())
                            Console.WriteLine($"{el.CreationTime,15} <DIR> {el.Name,10}");
                        foreach (var el in info.GetFiles())
                            Console.WriteLine($"{el.CreationTime,15} {el.Length,10} {el.Name}");
                    }
                    else if (dop == "..")
                    {
                        DirectoryInfo info = new DirectoryInfo(Directory.GetCurrentDirectory());
                        info = info.Parent;
                        foreach (var el in info.GetDirectories())
                            Console.WriteLine($"{el.CreationTime,15} <DIR> {el.Name,10}");
                        foreach (var el in info.GetFiles())
                            Console.WriteLine($"{el.CreationTime,15} {el.Length,10} {el.Name}");
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Md(string path)
            {
                try
                {
                    Directory.CreateDirectory(path);
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Rd(string path)
            {
                try
                {
                    Directory.Delete(path, true);
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Del(string path)
            {
                try
                {
                    File.Delete(path);
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static void Copy(string from, string to)
            {
                try
                {
                    File.Copy(from, to);
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message);
                }
            }
            static public void Work()
            {
                string str = "";
                bool exit = false;
                while (!exit)
                {
                    try
                    {
                        Console.Write(Directory.GetCurrentDirectory() + ">");
                        str = Console.ReadLine();
                        string[] strArr = str.Split(" ".ToArray(), StringSplitOptions.RemoveEmptyEntries);
                        switch (strArr[0].ToLower())
                        {
                            case "creat":
                                Creat(strArr[1]);
                                break;
                            case "type":
                                Type(strArr[1]);
                                break;
                            case "cd":
                                Cd(strArr[1]);
                                break;
                            case "dir":
                                if (strArr.Length > 1)
                                    Dir(strArr[1]);
                                else
                                    Dir();
                                break;
                            case "md":
                                Md(strArr[1]);
                                break;
                            case "rd":
                                Rd(strArr[1]);
                                break;
                            case "del":
                                Del(strArr[1]);
                                break;
                            case "copy":
                                Copy(strArr[1], strArr[2]);
                                break;
                            case "clear":
                                Console.Clear();
                                break;
                            case "exit":
                                exit = true;
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
        }
        // 3 -----------------------------------
        static string Rev(Match mtc)
        {
            string str = mtc.ToString();
            string dop = "";
            for (int i = 0; i < str.Length; i++)
                dop += str[str.Length - i - 1];
            return dop;
        }

        static void Task1()
        {
            string str;
            bool end = false;
            AppSettingHelper ASH = new AppSettingHelper("ASH");
            while (!end)
            {
                try
                {
                    Console.Write("> ");
                    str = Console.ReadLine();
                    string[] strArr = str.Split(" ".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                    switch (strArr[0].ToLower())
                    {
                        case "save":
                            ASH.Save();
                            break;
                        case "load":
                            ASH.Load();
                            break;
                        case "color":
                            ChangeColor(strArr[1]);
                            break;
                        case "title":
                            Console.Title = strArr[1];
                            break;
                        case "width":
                            Console.WindowWidth = int.Parse(strArr[1]);
                            break;
                        case "height":
                            Console.WindowHeight = int.Parse(strArr[1]);
                            break;
                        case "exit":
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
        static void Task2() => ConsoleSym.Work();
        static void Task3()
        {
            Console.Write("Write something: ");
            string str = Console.ReadLine();
            str = Regex.Replace(str, @"\b\w*[A-Z]\w*\b", "");
            Console.WriteLine("New string: " + str);
        }
        static void Task4()
        {
            Console.Write("Write something: ");
            string str = Console.ReadLine();
            Console.WriteLine("Find " + Regex.Matches(str, @"\b(ab|bo)\w*\b").Count + " matches");
            str = Regex.Replace(str, @"\b(ab|bo)\w*\b", Rev);
            Console.WriteLine("New string: " + str);
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
