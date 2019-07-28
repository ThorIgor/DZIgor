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
    public partial class frmLogin : Form
    {
        public frmLogin()
        {
            InitializeComponent();
            lstUsers.BeginUpdate();
            foreach (var user in User.Users)
                lstUsers.Items.Add(user);
            lstUsers.EndUpdate();
        }

        private void BtnSignIn_Click(object sender, EventArgs e)
        {
            bool find = false;
            foreach (var user in User.Users)
            {
                if (user.Equal(txtNickname.Text, txtPassword.Text))
                {
                    frmMain main = new frmMain(user, this);
                    main.Show();
                    this.Hide();
                    find = true;
                }
            }
            if (!find)
                MessageBox.Show("Nickname or password is invalid", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void BtnSignUp_Click(object sender, EventArgs e)
        {
            if (txtNickname.Text == string.Empty || txtPassword.Text == string.Empty)
                MessageBox.Show("Nickname or password is invalid", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            else
            {
                var list = User.Users;
                User user = new User(txtNickname.Text, txtPassword.Text);
                list.Add(user);
                User.Users = list;
                lstUsers.BeginUpdate();
                lstUsers.Items.Add(user);
                lstUsers.EndUpdate();
            }
        }

        private void FrmLogin_VisibleChanged(object sender, EventArgs e)
        {
            lstUsers.BeginUpdate();
            lstUsers.Items.Clear();
            foreach (var user in User.Users)
                lstUsers.Items.Add(user);
            lstUsers.EndUpdate();
        }
    }
}
