using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Configuration;

namespace DZIgorSAC_1_
{
    class Program
    {
        class Menu
        {
            string[][] menu;
            int pozMenu;
            int enableMenu;

            public int EnableMenu {
                set
                {
                    pozMenu = 0;
                    enableMenu = value;
                }
                get => enableMenu;
            }

            public Menu(string[][] m)
            {
                menu = m;
                EnableMenu = 0;
                pozMenu = 0;
            }
            public void Output()
            {
                Console.Clear();
                for(int i = 0; i < menu[EnableMenu].Length; i++)
                {
                    if (i == pozMenu)
                    {
                        Console.ForegroundColor = ConsoleColor.White;
                        Console.Write(">" + menu[EnableMenu][i]);
                        Console.ResetColor();
                    }
                    else
                        Console.Write(" " + menu[EnableMenu][i]);
                    Console.WriteLine();
                }
            }
            public int Input()
            {
                ConsoleKey key = Console.ReadKey().Key;
                switch(key)
                {
                    case ConsoleKey.UpArrow:
                        pozMenu = (pozMenu > 0) ? pozMenu - 1 : menu[EnableMenu].Length - 1;
                        break;
                    case ConsoleKey.DownArrow:
                        pozMenu = (pozMenu < menu[EnableMenu].Length - 1) ? pozMenu + 1 : 0;
                        break;
                    case ConsoleKey.Enter:
                        return pozMenu;
                }
                return -1;
            }
            public void UpdateMenu(string[][] m) => menu = m;
        }
        static class SqlF
        {
            static string[] tables = new string[]{ "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" };

            static int GetSqlFieldCount(int table, SqlConnection con)
            {
                string query = "SELECT * FROM " + tables[table];
                SqlCommand com = new SqlCommand(query, con);
                var reader = com.ExecuteReader();
                int FC = reader.FieldCount;
                reader.Close();
                return FC;
            }
            static Type GetSqlType(int table, SqlConnection con, int i)
            {
                string query = "SELECT * FROM " + tables[table];
                SqlCommand com = new SqlCommand(query, con);
                var reader = com.ExecuteReader();
                Type type = reader.GetFieldType(i);
                reader.Close();
                return type;

            }

            static public void InsertTo(int table, SqlConnection con)
            {
                
                string query = $"INSERT INTO {tables[table]} VALUES ( ";
                int FC = GetSqlFieldCount(table, con);
                SqlParameter[] parameters = new SqlParameter[0];
                for (int i = 0; i < FC; i++)
                {
                    string NP = "@" + (char)(i + 97);
                    
                    parameters = parameters.Append(new SqlParameter()) as SqlParameter[];
                    if (i < FC - 1)
                        query += ",";
                    query += " ";
                }
                query += ")";
                SqlCommand com = new SqlCommand(query, con);
            }
            static public void Delete(int table, SqlConnection con)
            {

            }
            static public void Update(int table, SqlConnection con)
            {

            }
        }
        static void Main(string[] args)
        {
            using (SqlConnection connection = new SqlConnection())
            {
                connection.ConnectionString = ConfigurationManager.ConnectionStrings["connStr"].ConnectionString;
                connection.Open();
                
                string[][] str = { new string[] { "Insert", "Delete", "Update", "Select All", "Select Id", "Exit" },
                    new string[] { "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" },
                    new string[] { "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" },
                    new string[] { "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" },
                    new string[] { "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" },
                    new string[] { "Book", "Author", "Sales", "Shop", "Category", "Address", "Country", "Incomes", "Publish", "Back" },
                };
                Menu menu = new Menu(str);
                bool end = false;
                while(!end)
                {
                    int input;
                    menu.Output();
                    input = menu.Input();

                    switch(menu.EnableMenu)
                    {
                        case 0:
                            switch(input)
                            {
                                case 0:
                                    menu.EnableMenu = 1;
                                    break;
                                case 1:
                                    menu.EnableMenu = 2;
                                    break;
                                case 2:
                                    menu.EnableMenu = 3;
                                    break;
                                case 3:
                                    menu.EnableMenu = 4;
                                    break;
                                case 4:
                                    menu.EnableMenu = 5;
                                    break;
                                case 5:
                                    end = true;
                                    break;
                            }
                            break;
                        case 1:
                            SqlF.InsertTo(input, connection);
                            break;
                    }
                }
            }
        }
    }
}
