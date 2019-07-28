using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DZIgorXvsO
{
    public partial class frmMain : Form
    {
        User user;
        Form parent;
        bool exit;
        int time;
        int btnPressed;

        public frmMain(User user, Form login)
        {
            InitializeComponent();
            this.user = user;
            lblUser.Text = user.Name;
            parent = login;
            exit = false;
            time = 0;
            btnPressed = 0;
        }

        private void BtnExit_Click(object sender, EventArgs e)
        {
            parent.Show();
            exit = true;
            this.Close();
        }

        private void BtnStart_Click(object sender, EventArgs e)
        {
            Random rand = new Random();
            grpMain.Controls.Clear();
            tmrScore.Start();
            for(int i = 0; i < nmrBtn.Value; i++)
            {
                var btn = new Button();
                btn.Name = "btn" + (i + 1).ToString();
                btn.Text = rand.Next(1, 101).ToString();
                btn.Height = 50;
                btn.Width = 50;
                btn.Left = i % 12 * 50;
                btn.Top = i / 12 * 50;
                btn.MouseClick += Btn_Click;
                grpMain.Controls.Add(btn);
            }
            nmrBtn.Enabled = false;
        }

        private void FrmMain_FormClosed(object sender, FormClosedEventArgs e)
        {
            if(!exit)
                parent.Close();
        }

        private void TmrScore_Tick(object sender, EventArgs e)
        {
            time += 1;
            lblTime.Text = "Time: " + (time / 100).ToString() + "." + (time % 100).ToString();
        }

        private void Btn_Click(object sender, EventArgs e)
        {
            bool win = true;
            if (int.Parse((sender as Button).Text) < btnPressed)
            {
                Game_Over();
                return;
            }
            else
            {
                btnPressed = int.Parse((sender as Button).Text);
                (sender as Button).Enabled = false;
            }
            foreach (var el in grpMain.Controls)
                if ((el as Button).Enabled)
                    win = false;
            if (win)
                Win();
        }

        private void Game_Over()
        {
            grpMain.Controls.Clear();
            var lbl = new Label();
            lbl.AutoSize = true;
            lbl.Name = "lblGameOver";
            lbl.Text = "Game Over";
            var font = new Font(FontFamily.Families[0], 30);
            lbl.Font = font;
            lbl.Left = 200;
            lbl.Top = 150;
            grpMain.Controls.Add(lbl);
            btnStart.Text = "Restart";
            btnPressed = 0;
            tmrScore.Stop();
            nmrBtn.Enabled = true;
        }

        private void Win()
        {
            tmrScore.Stop();
            var list = User.Users;
            int score = (int)(nmrBtn.Value * nmrBtn.Value / ((decimal)time/100));
            list[list.FindIndex((x) => x.Name == user.Name)].AddScores(score);
            User.Users = list;
            grpMain.Controls.Clear();
            var lbl = new Label();
            lbl.AutoSize = true;
            lbl.Name = "lblWin";
            lbl.Text = "Win Score: " + score.ToString();
            var font = new Font(FontFamily.Families[0], 30);
            lbl.Font = font;
            lbl.Left = 150;
            lbl.Top = 150;
            grpMain.Controls.Add(lbl);
            btnStart.Text = "Restart";
            btnPressed = 0;
            nmrBtn.Enabled = true;

        }

        private void NmrBtn_ValueChanged(object sender, EventArgs e)
        {
            if (nmrBtn.Value < 12)
                nmrBtn.Value = 84;
            if (nmrBtn.Value > 84)
                nmrBtn.Value = 12;
        }
    }
}
