using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DZIgorWinForm_2_
{
    public partial class Form1 : Form
    {
        List<User> users;
        bool edt = false;
        public Form1()
        {
            InitializeComponent();
            users = new List<User>();
        }

        private void tmrMain_Tick(object sender, EventArgs e)
        {
            if(edt)
            {
                lblSearch.Text = "Edit";
                btnSearch.Text = "Edit";
            }
            else
            {
                lblSearch.Text = "Search";
                btnSearch.Text = "Search";
            }

            if (lstUser.SelectedItem != null)
            {
                btnDelete.Enabled = true;
                btnDelete.BackColor = Color.Green;
                btnEdit.Enabled = true;
                btnEdit.BackColor = Color.Green;
                int SI = lstUser.SelectedIndex;
                string[] user = new string[] {
                    users[SI].ToString(),
                    (users[SI].Sex ? "Male" : "Female"),
                    (users[SI].Skills[0] ? "Logic" : "") + " " +
                    (users[SI].Skills[1] ? "Communicable" : "") + " " +
                    (users[SI].Skills[2] ? "Hardworking" : "") + " " +
                    (users[SI].Skills[3] ? "Nimble" : "")
                };
                txtFind.Text = "";
                txtFind.Lines = user;
            }
            else
            {
                btnDelete.Enabled = false;
                btnDelete.BackColor = Color.Red;
            }

            if (txtName.Text != "" && 
                txtSurname.Text != "" && 
                (rdbtnMale.Checked == true || 
                rdbtnFemale.Checked == true))
            {
                btnAdd.Enabled = true;
                btnAdd.BackColor = Color.Green;
            }
            else
            {
                btnAdd.Enabled = false;
                btnAdd.BackColor = Color.Red;
            }

            if(txtSearchName.Text != "" || 
                txtSearchSurname.Text != "" || 
                rdbtnSearchMale.Checked || 
                rdbtnSearchFemale.Checked || 
                chkSearchLogic.Checked ||
                chkSearchCommunicable.Checked ||
                chkSearchHardworking.Checked ||
                chkSearchNimble.Checked)
            {
                btnSearch.Enabled = true;
                btnSearch.BackColor = Color.Green;
            }
            else
            {
                btnSearch.Enabled = false;
                btnSearch.BackColor = Color.Red;
            }
        }

        private void BtnAdd_Click(object sender, EventArgs e)
        {
            bool[] sk = { chkLogic.Checked, chkCommunicable.Checked, chkHardworking.Checked, chkNimble.Checked };
            User user = new User(txtName.Text, txtSurname.Text, rdbtnMale.Checked, sk);
            users.Add(user);
            lstUser.BeginUpdate();
            lstUser.Items.Add(user);
            lstUser.EndUpdate();
        }

        private void BtnSearch_Click(object sender, EventArgs e)
        {
            if (edt)
            {
                bool[] sk = { chkSearchLogic.Checked, chkSearchCommunicable.Checked, chkSearchHardworking.Checked, chkSearchNimble.Checked };
                User user = new User(txtSearchName.Text, txtSearchSurname.Text, rdbtnSearchMale.Checked, sk);
                int SI = lstUser.SelectedIndex;
                users[SI] = user;
                lstUser.BeginUpdate();
                lstUser.Items[SI] = user;
                lstUser.EndUpdate();
            }
            else
            {
                for (int i = 0; i < users.Count; i++)
                {
                    if (txtSearchName.Text != "")
                        if (users[i].Name != txtSearchName.Text)
                            continue;
                    if (txtSearchSurname.Text != "")
                        if (users[i].Surname != txtSearchSurname.Text)
                            continue;
                    if (rdbtnSearchMale.Checked || rdbtnSearchFemale.Checked)
                        if (users[i].Sex != rdbtnSearchMale.Checked)
                            continue;
                    if (chkSearchLogic.Checked &&
                        chkSearchLogic.Checked != users[i].Skills[0])
                        continue;
                    if (chkSearchCommunicable.Checked &&
                        chkSearchCommunicable.Checked != users[i].Skills[1])
                        continue;
                    if (chkSearchHardworking.Checked &&
                        chkSearchHardworking.Checked != users[i].Skills[2])
                        continue;
                    if (chkSearchNimble.Checked &&
                        chkSearchNimble.Checked != users[i].Skills[3])
                        continue;
                    lstUser.SelectedIndex = i;
                    break;
                }
            }
        }

        private void BtnDelete_Click(object sender, EventArgs e)
        {
            users.RemoveAt(lstUser.SelectedIndex);
            lstUser.BeginUpdate();
            lstUser.Items.RemoveAt(lstUser.SelectedIndex);
            lstUser.EndUpdate();
            txtFind.Text = "";
        }

        private void BtnEdit_Click(object sender, EventArgs e)
        {
            edt = edt ? false : true;
            int SI = lstUser.SelectedIndex;
            txtSearchName.Text = users[SI].Name;
            txtSearchSurname.Text = users[SI].Surname;
            rdbtnSearchMale.Checked = users[SI].Sex;
            rdbtnSearchFemale.Checked = !users[SI].Sex;
            chkSearchLogic.Checked = users[SI].Skills[0];
            chkSearchCommunicable.Checked = users[SI].Skills[1];
            chkSearchHardworking.Checked = users[SI].Skills[2];
            chkSearchNimble.Checked = users[SI].Skills[3];
        }
    }
}
