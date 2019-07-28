using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace DZIgorWord
{
    public partial class frmWord : Form
    {
        string filename;

        public frmWord()
        {
            InitializeComponent();
            filename = string.Empty;
            strcmbSize.BeginUpdate();
            for (int i = 4; i < 50; i++)
                strcmbSize.Items.Add(i * 2);
            strcmbSize.EndUpdate();
            strcmbFont.BeginUpdate();
            foreach (var family in FontFamily.Families)
                strcmbFont.Items.Add(family.Name);
            strcmbFont.EndUpdate();
        }

        private void NewFileToolStripMenuItem_Click(object sender, EventArgs e)
        {
            filename = string.Empty;
            rtxtMain.Text = string.Empty;
        }

        private void OpenToolStripMenuItem_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog dialog = new OpenFileDialog())
            {
                dialog.Filter = "*.rtf|*.rtf";
                var res = dialog.ShowDialog();
                if (res == DialogResult.OK)
                {
                    filename = dialog.FileName;
                    rtxtMain.LoadFile(filename, RichTextBoxStreamType.RichText);
                }
            }
        }

        private void SaveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (filename == string.Empty)
                SaveAsToolStripMenuItem_Click(sender, e);
            else
                rtxtMain.SaveFile(filename, RichTextBoxStreamType.RichText);
        }

        private void SaveAsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            using (SaveFileDialog dialog = new SaveFileDialog())
            {
                dialog.Filter = "*.rtf|*.rtf";
                var res = dialog.ShowDialog();
                if (res == DialogResult.OK)
                    rtxtMain.SaveFile(dialog.FileName, RichTextBoxStreamType.RichText);
            }
        }

        private void StrbtnColor_Click(object sender, EventArgs e)
        {
            using (ColorDialog dialog = new ColorDialog())
            {
                var res = dialog.ShowDialog();
                if (res == DialogResult.OK)
                    rtxtMain.SelectionColor = dialog.Color;
            }
        }

        private void StrbtnBold_Click(object sender, EventArgs e)
        {
            Font font = new Font(rtxtMain.SelectionFont, rtxtMain.SelectionFont.Bold ? FontStyle.Regular : FontStyle.Bold);
            rtxtMain.SelectionFont = font;
        }

        private void StrbtnCursive_Click(object sender, EventArgs e)
        {
            Font font = new Font(rtxtMain.SelectionFont, rtxtMain.SelectionFont.Italic? FontStyle.Regular : FontStyle.Italic);
            rtxtMain.SelectionFont = font;
        }

        private void StrbtnUnderline_Click(object sender, EventArgs e)
        {

            Font font = new Font(rtxtMain.SelectionFont, rtxtMain.SelectionFont.Underline ? FontStyle.Regular : FontStyle.Underline);
            rtxtMain.SelectionFont = font;
        }

        private void StrcmbSize_SelectedIndexChanged(object sender, EventArgs e)
        {
            Font font = new Font(rtxtMain.SelectionFont.FontFamily, int.Parse(strcmbSize.Text), rtxtMain.SelectionFont.Style);
            rtxtMain.SelectionFont = font;
        }

        private void StrcmbFont_SelectedIndexChanged(object sender, EventArgs e)
        {
            Font font = new Font(strcmbFont.Text, rtxtMain.SelectionFont.Size, rtxtMain.SelectionFont.Style);
            rtxtMain.SelectionFont = font;
        }
    }
}
