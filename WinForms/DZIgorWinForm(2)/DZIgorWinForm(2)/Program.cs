using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DZIgorWinForm_2_
{
    public class User
    {
        public string Name { get; set; }
        public string Surname { get; set; }
        public bool Sex { get; set; }
        public bool[] Skills { get; set; }

        public User(string n, string sn, bool sx, bool[] sk)
        {
            Name = n;
            Surname = sn;
            Sex = sx;
            Skills = sk;
        }

        public void Edit(string n, string sn, bool sx, bool[] sk)
        {
            Name = n;
            Surname = sn;
            Sex = sx;
            Skills = sk;
        }

        public string AllInfo()
        {
            string allInf = Name + " " + Surname + "\n";
            allInf += "Sex: " + (Sex ? "Male" : "Female") + "\n";
            allInf += "Skills: ";
            if (Skills[0])
                allInf += "Logic ";
            if (Skills[1])
                allInf += "Communicable ";
            if (Skills[2])
                allInf += "Hardworking ";
            if (Skills[3])
                allInf += "Nimble ";
            return allInf;
        }
        public override string ToString() => Name + " " + Surname;
    }
    static class Program
    {
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }
}
