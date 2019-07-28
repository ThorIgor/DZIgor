using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

namespace DZIgorXvsO
{
    [Serializable]
    public class User
    {
        static string FileName = "Users.dat";

        string name;
        string password;
        List<int> scores;

        public string Name { get => name; }

        public User(string n, string p)
        {
            name = n;
            password = p;
            scores = new List<int>();
        }
        public User(string n, string p, int sc)
        {
            name = n;
            password = p;
            scores = new List<int> { sc };
        }
        public void AddScores(int sc) => scores.Add(sc);
        public override string ToString() => name + " " + ((scores.Count > 0)? scores.Max().ToString() : "none");
        public bool Equal(string n, string p) => name == n && password == p;
        
        static public List<User> Users
        {
            get
            {
                if (!File.Exists(FileName))
                    return new List<User>();
                using (var FS = new FileStream(FileName, FileMode.Open))
                {
                    BinaryFormatter BF = new BinaryFormatter();
                    return BF.Deserialize(FS) as List<User>;
                }
            }
            set
            {
                using (var FS = new FileStream(FileName, FileMode.Create))
                {
                    BinaryFormatter BF = new BinaryFormatter();
                    BF.Serialize(FS, value);
                }
            }
        }
    }
    static class Program
    {
        /// <summary>
        /// Главная точка входа для приложения.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new frmLogin());
        }
    }
}
