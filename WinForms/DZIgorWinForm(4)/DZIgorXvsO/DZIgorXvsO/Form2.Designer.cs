namespace DZIgorXvsO
{
    partial class frmMain
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.lblUser = new System.Windows.Forms.Label();
            this.btnExit = new System.Windows.Forms.Button();
            this.btnStart = new System.Windows.Forms.Button();
            this.grpMain = new System.Windows.Forms.GroupBox();
            this.lblTime = new System.Windows.Forms.Label();
            this.tmrScore = new System.Windows.Forms.Timer(this.components);
            this.nmrBtn = new System.Windows.Forms.NumericUpDown();
            this.lblBtn = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.nmrBtn)).BeginInit();
            this.SuspendLayout();
            // 
            // lblUser
            // 
            this.lblUser.AutoSize = true;
            this.lblUser.Location = new System.Drawing.Point(12, 16);
            this.lblUser.Name = "lblUser";
            this.lblUser.Size = new System.Drawing.Size(0, 17);
            this.lblUser.TabIndex = 0;
            // 
            // btnExit
            // 
            this.btnExit.Location = new System.Drawing.Point(737, 14);
            this.btnExit.Name = "btnExit";
            this.btnExit.Size = new System.Drawing.Size(75, 23);
            this.btnExit.TabIndex = 1;
            this.btnExit.Text = "Exit";
            this.btnExit.UseVisualStyleBackColor = true;
            this.btnExit.Click += new System.EventHandler(this.BtnExit_Click);
            // 
            // btnStart
            // 
            this.btnStart.Location = new System.Drawing.Point(656, 14);
            this.btnStart.Name = "btnStart";
            this.btnStart.Size = new System.Drawing.Size(75, 23);
            this.btnStart.TabIndex = 2;
            this.btnStart.Text = "Start";
            this.btnStart.UseVisualStyleBackColor = true;
            this.btnStart.Click += new System.EventHandler(this.BtnStart_Click);
            // 
            // grpMain
            // 
            this.grpMain.Location = new System.Drawing.Point(13, 42);
            this.grpMain.Name = "grpMain";
            this.grpMain.Size = new System.Drawing.Size(800, 430);
            this.grpMain.TabIndex = 3;
            this.grpMain.TabStop = false;
            // 
            // lblTime
            // 
            this.lblTime.AutoSize = true;
            this.lblTime.Location = new System.Drawing.Point(519, 16);
            this.lblTime.Name = "lblTime";
            this.lblTime.Size = new System.Drawing.Size(75, 17);
            this.lblTime.TabIndex = 4;
            this.lblTime.Text = "Time: 0.00";
            // 
            // tmrScore
            // 
            this.tmrScore.Interval = 10;
            this.tmrScore.Tick += new System.EventHandler(this.TmrScore_Tick);
            // 
            // nmrBtn
            // 
            this.nmrBtn.Location = new System.Drawing.Point(369, 14);
            this.nmrBtn.Name = "nmrBtn";
            this.nmrBtn.Size = new System.Drawing.Size(58, 22);
            this.nmrBtn.TabIndex = 5;
            this.nmrBtn.Value = new decimal(new int[] {
            84,
            0,
            0,
            0});
            this.nmrBtn.ValueChanged += new System.EventHandler(this.NmrBtn_ValueChanged);
            // 
            // lblBtn
            // 
            this.lblBtn.AutoSize = true;
            this.lblBtn.Location = new System.Drawing.Point(302, 16);
            this.lblBtn.Name = "lblBtn";
            this.lblBtn.Size = new System.Drawing.Size(56, 17);
            this.lblBtn.TabIndex = 6;
            this.lblBtn.Text = "Buttons";
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(824, 484);
            this.Controls.Add(this.lblBtn);
            this.Controls.Add(this.nmrBtn);
            this.Controls.Add(this.lblTime);
            this.Controls.Add(this.grpMain);
            this.Controls.Add(this.btnStart);
            this.Controls.Add(this.btnExit);
            this.Controls.Add(this.lblUser);
            this.Name = "frmMain";
            this.Text = "Game";
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.FrmMain_FormClosed);
            ((System.ComponentModel.ISupportInitialize)(this.nmrBtn)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblUser;
        private System.Windows.Forms.Button btnExit;
        private System.Windows.Forms.Button btnStart;
        private System.Windows.Forms.GroupBox grpMain;
        private System.Windows.Forms.Label lblTime;
        private System.Windows.Forms.Timer tmrScore;
        private System.Windows.Forms.NumericUpDown nmrBtn;
        private System.Windows.Forms.Label lblBtn;
    }
}