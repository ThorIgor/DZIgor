using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DZIgorWinForm_1_
{
    public partial class Form1 : Form
    {
        Button btn;
        public Form1()
        {
            InitializeComponent();
            this.Text = "Caught button";

            btn = new Button();
            btn.Text = "Caught me";
            btn.Location = new Point(260, 160);
            btn.Height = 50;
            btn.Width = 100;
            this.Controls.Add(btn);
            btn.Click += Btn_Click;
            this.MouseMove += Btn_Move;
        }

        public void Btn_Click(object sender, EventArgs e) => (sender as Button).Text = "You caught me!!!";
        public void Btn_Move(object sender, EventArgs e)
        {
            if (btn.Location.X < MousePosition.X && (sender as Form).Width - MousePosition.X < MousePosition.X - btn.Location.X)
                btn.Left -= 3;
            else
                btn.Left += 3;
            if (btn.Location.Y < MousePosition.Y && (sender as Form).Height - MousePosition.Y < MousePosition.Y - btn.Location.Y)
                btn.Top -= 3;
            else
                btn.Top += 3;
            if (btn.Location.X < 0)
                btn.Left = (sender as Form).Width-100;
            if (btn.Location.Y < 0)
                btn.Top = (sender as Form).Height-50;
            if (btn.Location.X > (sender as Form).Width - 100)
                btn.Left = 0;
            if (btn.Location.Y > (sender as Form).Height - 50)
                btn.Top = 0;
        }
    }
}
