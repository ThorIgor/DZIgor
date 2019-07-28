namespace DZIgorWord
{
    partial class frmWord
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(frmWord));
            this.rtxtMain = new System.Windows.Forms.RichTextBox();
            this.menuStrip = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.newFileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.saveToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.saveAsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.toolStrip1 = new System.Windows.Forms.ToolStrip();
            this.strbtnColor = new System.Windows.Forms.ToolStripButton();
            this.strbtnBold = new System.Windows.Forms.ToolStripButton();
            this.strbtnCursive = new System.Windows.Forms.ToolStripButton();
            this.strbtnUnderline = new System.Windows.Forms.ToolStripButton();
            this.strcmbFont = new System.Windows.Forms.ToolStripComboBox();
            this.strcmbSize = new System.Windows.Forms.ToolStripComboBox();
            this.menuStrip.SuspendLayout();
            this.toolStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // rtxtMain
            // 
            this.rtxtMain.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.rtxtMain.Location = new System.Drawing.Point(12, 68);
            this.rtxtMain.Name = "rtxtMain";
            this.rtxtMain.Size = new System.Drawing.Size(776, 370);
            this.rtxtMain.TabIndex = 0;
            this.rtxtMain.Text = "";
            // 
            // menuStrip
            // 
            this.menuStrip.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem});
            this.menuStrip.Location = new System.Drawing.Point(0, 0);
            this.menuStrip.Name = "menuStrip";
            this.menuStrip.Size = new System.Drawing.Size(800, 28);
            this.menuStrip.TabIndex = 1;
            this.menuStrip.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.newFileToolStripMenuItem,
            this.openToolStripMenuItem,
            this.saveToolStripMenuItem,
            this.saveAsToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(46, 24);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // newFileToolStripMenuItem
            // 
            this.newFileToolStripMenuItem.Name = "newFileToolStripMenuItem";
            this.newFileToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.newFileToolStripMenuItem.Text = "New file";
            this.newFileToolStripMenuItem.Click += new System.EventHandler(this.NewFileToolStripMenuItem_Click);
            // 
            // openToolStripMenuItem
            // 
            this.openToolStripMenuItem.Name = "openToolStripMenuItem";
            this.openToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.openToolStripMenuItem.Text = "Open";
            this.openToolStripMenuItem.Click += new System.EventHandler(this.OpenToolStripMenuItem_Click);
            // 
            // saveToolStripMenuItem
            // 
            this.saveToolStripMenuItem.Name = "saveToolStripMenuItem";
            this.saveToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.saveToolStripMenuItem.Text = "Save";
            this.saveToolStripMenuItem.Click += new System.EventHandler(this.SaveToolStripMenuItem_Click);
            // 
            // saveAsToolStripMenuItem
            // 
            this.saveAsToolStripMenuItem.Name = "saveAsToolStripMenuItem";
            this.saveAsToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.saveAsToolStripMenuItem.Text = "Save as";
            this.saveAsToolStripMenuItem.Click += new System.EventHandler(this.SaveAsToolStripMenuItem_Click);
            // 
            // toolStrip1
            // 
            this.toolStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.strbtnColor,
            this.strbtnBold,
            this.strbtnCursive,
            this.strbtnUnderline,
            this.strcmbFont,
            this.strcmbSize});
            this.toolStrip1.Location = new System.Drawing.Point(0, 28);
            this.toolStrip1.Name = "toolStrip1";
            this.toolStrip1.Size = new System.Drawing.Size(800, 28);
            this.toolStrip1.TabIndex = 2;
            this.toolStrip1.Text = "toolStrip1";
            // 
            // strbtnColor
            // 
            this.strbtnColor.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.strbtnColor.Image = ((System.Drawing.Image)(resources.GetObject("strbtnColor.Image")));
            this.strbtnColor.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.strbtnColor.Name = "strbtnColor";
            this.strbtnColor.Size = new System.Drawing.Size(29, 25);
            this.strbtnColor.Text = "Color";
            this.strbtnColor.Click += new System.EventHandler(this.StrbtnColor_Click);
            // 
            // strbtnBold
            // 
            this.strbtnBold.CheckOnClick = true;
            this.strbtnBold.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.strbtnBold.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Bold);
            this.strbtnBold.Image = ((System.Drawing.Image)(resources.GetObject("strbtnBold.Image")));
            this.strbtnBold.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.strbtnBold.Name = "strbtnBold";
            this.strbtnBold.Size = new System.Drawing.Size(29, 25);
            this.strbtnBold.Text = "Ж";
            this.strbtnBold.Click += new System.EventHandler(this.StrbtnBold_Click);
            // 
            // strbtnCursive
            // 
            this.strbtnCursive.CheckOnClick = true;
            this.strbtnCursive.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.strbtnCursive.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Italic);
            this.strbtnCursive.Image = ((System.Drawing.Image)(resources.GetObject("strbtnCursive.Image")));
            this.strbtnCursive.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.strbtnCursive.Name = "strbtnCursive";
            this.strbtnCursive.Size = new System.Drawing.Size(29, 25);
            this.strbtnCursive.Text = "К";
            this.strbtnCursive.Click += new System.EventHandler(this.StrbtnCursive_Click);
            // 
            // strbtnUnderline
            // 
            this.strbtnUnderline.CheckOnClick = true;
            this.strbtnUnderline.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Text;
            this.strbtnUnderline.Font = new System.Drawing.Font("Segoe UI", 9F, System.Drawing.FontStyle.Underline);
            this.strbtnUnderline.Image = ((System.Drawing.Image)(resources.GetObject("strbtnUnderline.Image")));
            this.strbtnUnderline.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.strbtnUnderline.Name = "strbtnUnderline";
            this.strbtnUnderline.Size = new System.Drawing.Size(29, 25);
            this.strbtnUnderline.Text = "П";
            this.strbtnUnderline.Click += new System.EventHandler(this.StrbtnUnderline_Click);
            // 
            // strcmbFont
            // 
            this.strcmbFont.DropDownHeight = 70;
            this.strcmbFont.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.strcmbFont.IntegralHeight = false;
            this.strcmbFont.Name = "strcmbFont";
            this.strcmbFont.Size = new System.Drawing.Size(300, 28);
            this.strcmbFont.SelectedIndexChanged += new System.EventHandler(this.StrcmbFont_SelectedIndexChanged);
            // 
            // strcmbSize
            // 
            this.strcmbSize.DropDownHeight = 70;
            this.strcmbSize.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.strcmbSize.IntegralHeight = false;
            this.strcmbSize.Name = "strcmbSize";
            this.strcmbSize.Size = new System.Drawing.Size(121, 28);
            this.strcmbSize.SelectedIndexChanged += new System.EventHandler(this.StrcmbSize_SelectedIndexChanged);
            // 
            // frmWord
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.toolStrip1);
            this.Controls.Add(this.rtxtMain);
            this.Controls.Add(this.menuStrip);
            this.MainMenuStrip = this.menuStrip;
            this.Name = "frmWord";
            this.Text = "Word Sim";
            this.menuStrip.ResumeLayout(false);
            this.menuStrip.PerformLayout();
            this.toolStrip1.ResumeLayout(false);
            this.toolStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.RichTextBox rtxtMain;
        private System.Windows.Forms.MenuStrip menuStrip;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem newFileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem saveToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem saveAsToolStripMenuItem;
        private System.Windows.Forms.ToolStrip toolStrip1;
        private System.Windows.Forms.ToolStripButton strbtnColor;
        private System.Windows.Forms.ToolStripButton strbtnBold;
        private System.Windows.Forms.ToolStripButton strbtnCursive;
        private System.Windows.Forms.ToolStripButton strbtnUnderline;
        private System.Windows.Forms.ToolStripComboBox strcmbFont;
        private System.Windows.Forms.ToolStripComboBox strcmbSize;
    }
}

