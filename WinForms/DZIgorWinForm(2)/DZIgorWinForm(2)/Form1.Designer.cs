namespace DZIgorWinForm_2_
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.txtName = new System.Windows.Forms.TextBox();
            this.lblName = new System.Windows.Forms.Label();
            this.lblSurname = new System.Windows.Forms.Label();
            this.txtSurname = new System.Windows.Forms.TextBox();
            this.grpSkills = new System.Windows.Forms.GroupBox();
            this.chkNimble = new System.Windows.Forms.CheckBox();
            this.chkHardworking = new System.Windows.Forms.CheckBox();
            this.chkCommunicable = new System.Windows.Forms.CheckBox();
            this.chkLogic = new System.Windows.Forms.CheckBox();
            this.btnAdd = new System.Windows.Forms.Button();
            this.lblSearch = new System.Windows.Forms.Label();
            this.txtFind = new System.Windows.Forms.TextBox();
            this.lblSearchName = new System.Windows.Forms.Label();
            this.txtSearchName = new System.Windows.Forms.TextBox();
            this.lblSearchSurname = new System.Windows.Forms.Label();
            this.txtSearchSurname = new System.Windows.Forms.TextBox();
            this.rdbtnFemale = new System.Windows.Forms.RadioButton();
            this.rdbtnMale = new System.Windows.Forms.RadioButton();
            this.grpSex = new System.Windows.Forms.GroupBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.rdbtnSearchMale = new System.Windows.Forms.RadioButton();
            this.rdbtnSearchFemale = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.chkSearchNimble = new System.Windows.Forms.CheckBox();
            this.chkSearchHardworking = new System.Windows.Forms.CheckBox();
            this.chkSearchCommunicable = new System.Windows.Forms.CheckBox();
            this.chkSearchLogic = new System.Windows.Forms.CheckBox();
            this.btnSearch = new System.Windows.Forms.Button();
            this.btnDelete = new System.Windows.Forms.Button();
            this.btnEdit = new System.Windows.Forms.Button();
            this.tmrMain = new System.Windows.Forms.Timer(this.components);
            this.lstUser = new System.Windows.Forms.ListBox();
            this.grpSkills.SuspendLayout();
            this.grpSex.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // txtName
            // 
            this.txtName.Location = new System.Drawing.Point(12, 29);
            this.txtName.Name = "txtName";
            this.txtName.Size = new System.Drawing.Size(162, 22);
            this.txtName.TabIndex = 0;
            // 
            // lblName
            // 
            this.lblName.AutoSize = true;
            this.lblName.Location = new System.Drawing.Point(9, 9);
            this.lblName.Name = "lblName";
            this.lblName.Size = new System.Drawing.Size(45, 17);
            this.lblName.TabIndex = 1;
            this.lblName.Text = "Name";
            // 
            // lblSurname
            // 
            this.lblSurname.AutoSize = true;
            this.lblSurname.Location = new System.Drawing.Point(12, 62);
            this.lblSurname.Name = "lblSurname";
            this.lblSurname.Size = new System.Drawing.Size(65, 17);
            this.lblSurname.TabIndex = 2;
            this.lblSurname.Text = "Surname";
            // 
            // txtSurname
            // 
            this.txtSurname.Location = new System.Drawing.Point(12, 83);
            this.txtSurname.Name = "txtSurname";
            this.txtSurname.Size = new System.Drawing.Size(162, 22);
            this.txtSurname.TabIndex = 3;
            // 
            // grpSkills
            // 
            this.grpSkills.Controls.Add(this.chkNimble);
            this.grpSkills.Controls.Add(this.chkHardworking);
            this.grpSkills.Controls.Add(this.chkCommunicable);
            this.grpSkills.Controls.Add(this.chkLogic);
            this.grpSkills.Location = new System.Drawing.Point(12, 175);
            this.grpSkills.Name = "grpSkills";
            this.grpSkills.Size = new System.Drawing.Size(161, 134);
            this.grpSkills.TabIndex = 7;
            this.grpSkills.TabStop = false;
            this.grpSkills.Text = "Skills";
            // 
            // chkNimble
            // 
            this.chkNimble.AutoSize = true;
            this.chkNimble.Location = new System.Drawing.Point(7, 106);
            this.chkNimble.Name = "chkNimble";
            this.chkNimble.Size = new System.Drawing.Size(73, 21);
            this.chkNimble.TabIndex = 3;
            this.chkNimble.Text = "Nimble";
            this.chkNimble.UseVisualStyleBackColor = true;
            // 
            // chkHardworking
            // 
            this.chkHardworking.AutoSize = true;
            this.chkHardworking.Location = new System.Drawing.Point(7, 78);
            this.chkHardworking.Name = "chkHardworking";
            this.chkHardworking.Size = new System.Drawing.Size(109, 21);
            this.chkHardworking.TabIndex = 2;
            this.chkHardworking.Text = "Hardworking";
            this.chkHardworking.UseVisualStyleBackColor = true;
            // 
            // chkCommunicable
            // 
            this.chkCommunicable.AutoSize = true;
            this.chkCommunicable.Location = new System.Drawing.Point(7, 50);
            this.chkCommunicable.Name = "chkCommunicable";
            this.chkCommunicable.Size = new System.Drawing.Size(122, 21);
            this.chkCommunicable.TabIndex = 1;
            this.chkCommunicable.Text = "Communicable";
            this.chkCommunicable.UseVisualStyleBackColor = true;
            // 
            // chkLogic
            // 
            this.chkLogic.AutoSize = true;
            this.chkLogic.Location = new System.Drawing.Point(7, 22);
            this.chkLogic.Name = "chkLogic";
            this.chkLogic.Size = new System.Drawing.Size(64, 21);
            this.chkLogic.TabIndex = 0;
            this.chkLogic.Text = "Logic";
            this.chkLogic.UseVisualStyleBackColor = true;
            // 
            // btnAdd
            // 
            this.btnAdd.BackColor = System.Drawing.Color.Red;
            this.btnAdd.Enabled = false;
            this.btnAdd.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnAdd.Location = new System.Drawing.Point(12, 316);
            this.btnAdd.Name = "btnAdd";
            this.btnAdd.Size = new System.Drawing.Size(162, 65);
            this.btnAdd.TabIndex = 8;
            this.btnAdd.Text = "Add";
            this.btnAdd.UseVisualStyleBackColor = false;
            this.btnAdd.Click += new System.EventHandler(this.BtnAdd_Click);
            // 
            // lblSearch
            // 
            this.lblSearch.AutoSize = true;
            this.lblSearch.Location = new System.Drawing.Point(384, 9);
            this.lblSearch.Name = "lblSearch";
            this.lblSearch.Size = new System.Drawing.Size(53, 17);
            this.lblSearch.TabIndex = 10;
            this.lblSearch.Text = "Search";
            // 
            // txtFind
            // 
            this.txtFind.Enabled = false;
            this.txtFind.Location = new System.Drawing.Point(577, 111);
            this.txtFind.Multiline = true;
            this.txtFind.Name = "txtFind";
            this.txtFind.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtFind.Size = new System.Drawing.Size(177, 198);
            this.txtFind.TabIndex = 12;
            // 
            // lblSearchName
            // 
            this.lblSearchName.AutoSize = true;
            this.lblSearchName.Location = new System.Drawing.Point(384, 32);
            this.lblSearchName.Name = "lblSearchName";
            this.lblSearchName.Size = new System.Drawing.Size(45, 17);
            this.lblSearchName.TabIndex = 13;
            this.lblSearchName.Text = "Name";
            // 
            // txtSearchName
            // 
            this.txtSearchName.Location = new System.Drawing.Point(456, 29);
            this.txtSearchName.Name = "txtSearchName";
            this.txtSearchName.Size = new System.Drawing.Size(298, 22);
            this.txtSearchName.TabIndex = 14;
            // 
            // lblSearchSurname
            // 
            this.lblSearchSurname.AutoSize = true;
            this.lblSearchSurname.Location = new System.Drawing.Point(384, 65);
            this.lblSearchSurname.Name = "lblSearchSurname";
            this.lblSearchSurname.Size = new System.Drawing.Size(65, 17);
            this.lblSearchSurname.TabIndex = 15;
            this.lblSearchSurname.Text = "Surname";
            // 
            // txtSearchSurname
            // 
            this.txtSearchSurname.Location = new System.Drawing.Point(456, 65);
            this.txtSearchSurname.Name = "txtSearchSurname";
            this.txtSearchSurname.Size = new System.Drawing.Size(298, 22);
            this.txtSearchSurname.TabIndex = 16;
            // 
            // rdbtnFemale
            // 
            this.rdbtnFemale.AutoSize = true;
            this.rdbtnFemale.Location = new System.Drawing.Point(71, 21);
            this.rdbtnFemale.Name = "rdbtnFemale";
            this.rdbtnFemale.Size = new System.Drawing.Size(75, 21);
            this.rdbtnFemale.TabIndex = 5;
            this.rdbtnFemale.TabStop = true;
            this.rdbtnFemale.Text = "Female";
            this.rdbtnFemale.UseVisualStyleBackColor = true;
            // 
            // rdbtnMale
            // 
            this.rdbtnMale.AutoSize = true;
            this.rdbtnMale.Location = new System.Drawing.Point(7, 21);
            this.rdbtnMale.Name = "rdbtnMale";
            this.rdbtnMale.Size = new System.Drawing.Size(59, 21);
            this.rdbtnMale.TabIndex = 4;
            this.rdbtnMale.TabStop = true;
            this.rdbtnMale.Text = "Male";
            this.rdbtnMale.UseVisualStyleBackColor = true;
            // 
            // grpSex
            // 
            this.grpSex.Controls.Add(this.rdbtnMale);
            this.grpSex.Controls.Add(this.rdbtnFemale);
            this.grpSex.Location = new System.Drawing.Point(12, 111);
            this.grpSex.Name = "grpSex";
            this.grpSex.Size = new System.Drawing.Size(162, 54);
            this.grpSex.TabIndex = 6;
            this.grpSex.TabStop = false;
            this.grpSex.Text = "Sex";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.rdbtnSearchMale);
            this.groupBox1.Controls.Add(this.rdbtnSearchFemale);
            this.groupBox1.Location = new System.Drawing.Point(387, 111);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(162, 54);
            this.groupBox1.TabIndex = 17;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Sex";
            // 
            // rdbtnSearchMale
            // 
            this.rdbtnSearchMale.AutoSize = true;
            this.rdbtnSearchMale.Location = new System.Drawing.Point(7, 21);
            this.rdbtnSearchMale.Name = "rdbtnSearchMale";
            this.rdbtnSearchMale.Size = new System.Drawing.Size(59, 21);
            this.rdbtnSearchMale.TabIndex = 4;
            this.rdbtnSearchMale.TabStop = true;
            this.rdbtnSearchMale.Text = "Male";
            this.rdbtnSearchMale.UseVisualStyleBackColor = true;
            // 
            // rdbtnSearchFemale
            // 
            this.rdbtnSearchFemale.AutoSize = true;
            this.rdbtnSearchFemale.Location = new System.Drawing.Point(72, 21);
            this.rdbtnSearchFemale.Name = "rdbtnSearchFemale";
            this.rdbtnSearchFemale.Size = new System.Drawing.Size(75, 21);
            this.rdbtnSearchFemale.TabIndex = 5;
            this.rdbtnSearchFemale.TabStop = true;
            this.rdbtnSearchFemale.Text = "Female";
            this.rdbtnSearchFemale.UseVisualStyleBackColor = true;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.chkSearchNimble);
            this.groupBox2.Controls.Add(this.chkSearchHardworking);
            this.groupBox2.Controls.Add(this.chkSearchCommunicable);
            this.groupBox2.Controls.Add(this.chkSearchLogic);
            this.groupBox2.Location = new System.Drawing.Point(387, 175);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(161, 134);
            this.groupBox2.TabIndex = 8;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Skills";
            // 
            // chkSearchNimble
            // 
            this.chkSearchNimble.AutoSize = true;
            this.chkSearchNimble.Location = new System.Drawing.Point(7, 106);
            this.chkSearchNimble.Name = "chkSearchNimble";
            this.chkSearchNimble.Size = new System.Drawing.Size(73, 21);
            this.chkSearchNimble.TabIndex = 3;
            this.chkSearchNimble.Text = "Nimble";
            this.chkSearchNimble.UseVisualStyleBackColor = true;
            // 
            // chkSearchHardworking
            // 
            this.chkSearchHardworking.AutoSize = true;
            this.chkSearchHardworking.Location = new System.Drawing.Point(7, 78);
            this.chkSearchHardworking.Name = "chkSearchHardworking";
            this.chkSearchHardworking.Size = new System.Drawing.Size(109, 21);
            this.chkSearchHardworking.TabIndex = 2;
            this.chkSearchHardworking.Text = "Hardworking";
            this.chkSearchHardworking.UseVisualStyleBackColor = true;
            // 
            // chkSearchCommunicable
            // 
            this.chkSearchCommunicable.AutoSize = true;
            this.chkSearchCommunicable.Location = new System.Drawing.Point(7, 50);
            this.chkSearchCommunicable.Name = "chkSearchCommunicable";
            this.chkSearchCommunicable.Size = new System.Drawing.Size(122, 21);
            this.chkSearchCommunicable.TabIndex = 1;
            this.chkSearchCommunicable.Text = "Communicable";
            this.chkSearchCommunicable.UseVisualStyleBackColor = true;
            // 
            // chkSearchLogic
            // 
            this.chkSearchLogic.AutoSize = true;
            this.chkSearchLogic.Location = new System.Drawing.Point(7, 22);
            this.chkSearchLogic.Name = "chkSearchLogic";
            this.chkSearchLogic.Size = new System.Drawing.Size(64, 21);
            this.chkSearchLogic.TabIndex = 0;
            this.chkSearchLogic.Text = "Logic";
            this.chkSearchLogic.UseVisualStyleBackColor = true;
            // 
            // btnSearch
            // 
            this.btnSearch.BackColor = System.Drawing.Color.Red;
            this.btnSearch.Enabled = false;
            this.btnSearch.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnSearch.Location = new System.Drawing.Point(387, 316);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(161, 65);
            this.btnSearch.TabIndex = 18;
            this.btnSearch.Text = "Search";
            this.btnSearch.UseVisualStyleBackColor = false;
            this.btnSearch.Click += new System.EventHandler(this.BtnSearch_Click);
            // 
            // btnDelete
            // 
            this.btnDelete.BackColor = System.Drawing.Color.Red;
            this.btnDelete.Enabled = false;
            this.btnDelete.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnDelete.Location = new System.Drawing.Point(578, 316);
            this.btnDelete.Name = "btnDelete";
            this.btnDelete.Size = new System.Drawing.Size(87, 65);
            this.btnDelete.TabIndex = 19;
            this.btnDelete.Text = "Delete";
            this.btnDelete.UseVisualStyleBackColor = false;
            this.btnDelete.Click += new System.EventHandler(this.BtnDelete_Click);
            // 
            // btnEdit
            // 
            this.btnEdit.BackColor = System.Drawing.Color.Red;
            this.btnEdit.Enabled = false;
            this.btnEdit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.btnEdit.Location = new System.Drawing.Point(671, 316);
            this.btnEdit.Name = "btnEdit";
            this.btnEdit.Size = new System.Drawing.Size(83, 65);
            this.btnEdit.TabIndex = 20;
            this.btnEdit.Text = "Edit";
            this.btnEdit.UseVisualStyleBackColor = false;
            this.btnEdit.Click += new System.EventHandler(this.BtnEdit_Click);
            // 
            // tmrMain
            // 
            this.tmrMain.Enabled = true;
            this.tmrMain.Interval = 200;
            this.tmrMain.Tick += new System.EventHandler(this.tmrMain_Tick);
            // 
            // lstUser
            // 
            this.lstUser.FormattingEnabled = true;
            this.lstUser.HorizontalScrollbar = true;
            this.lstUser.ItemHeight = 16;
            this.lstUser.Location = new System.Drawing.Point(181, 9);
            this.lstUser.MultiColumn = true;
            this.lstUser.Name = "lstUser";
            this.lstUser.Size = new System.Drawing.Size(197, 372);
            this.lstUser.TabIndex = 21;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Highlight;
            this.ClientSize = new System.Drawing.Size(767, 392);
            this.Controls.Add(this.lstUser);
            this.Controls.Add(this.btnEdit);
            this.Controls.Add(this.btnDelete);
            this.Controls.Add(this.btnSearch);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.txtSearchSurname);
            this.Controls.Add(this.lblSearchSurname);
            this.Controls.Add(this.txtSearchName);
            this.Controls.Add(this.lblSearchName);
            this.Controls.Add(this.txtFind);
            this.Controls.Add(this.lblSearch);
            this.Controls.Add(this.btnAdd);
            this.Controls.Add(this.grpSkills);
            this.Controls.Add(this.grpSex);
            this.Controls.Add(this.txtSurname);
            this.Controls.Add(this.lblSurname);
            this.Controls.Add(this.lblName);
            this.Controls.Add(this.txtName);
            this.Name = "Form1";
            this.Text = "Account List";
            this.grpSkills.ResumeLayout(false);
            this.grpSkills.PerformLayout();
            this.grpSex.ResumeLayout(false);
            this.grpSex.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtName;
        private System.Windows.Forms.Label lblName;
        private System.Windows.Forms.Label lblSurname;
        private System.Windows.Forms.TextBox txtSurname;
        private System.Windows.Forms.GroupBox grpSkills;
        private System.Windows.Forms.CheckBox chkNimble;
        private System.Windows.Forms.CheckBox chkHardworking;
        private System.Windows.Forms.CheckBox chkCommunicable;
        private System.Windows.Forms.CheckBox chkLogic;
        private System.Windows.Forms.Button btnAdd;
        private System.Windows.Forms.Label lblSearch;
        private System.Windows.Forms.TextBox txtFind;
        private System.Windows.Forms.Label lblSearchName;
        private System.Windows.Forms.TextBox txtSearchName;
        private System.Windows.Forms.Label lblSearchSurname;
        private System.Windows.Forms.TextBox txtSearchSurname;
        private System.Windows.Forms.RadioButton rdbtnFemale;
        private System.Windows.Forms.RadioButton rdbtnMale;
        private System.Windows.Forms.GroupBox grpSex;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton rdbtnSearchMale;
        private System.Windows.Forms.RadioButton rdbtnSearchFemale;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.CheckBox chkSearchNimble;
        private System.Windows.Forms.CheckBox chkSearchHardworking;
        private System.Windows.Forms.CheckBox chkSearchCommunicable;
        private System.Windows.Forms.CheckBox chkSearchLogic;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.Button btnDelete;
        private System.Windows.Forms.Button btnEdit;
        private System.Windows.Forms.Timer tmrMain;
        private System.Windows.Forms.ListBox lstUser;
    }
}

