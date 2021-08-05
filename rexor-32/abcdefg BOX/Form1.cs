using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace abcdefg_BOX
{
    public partial class Form1 : Form
    {

        bool textclicked = false;
        int textnuber = 0;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textnuber == 11)
            {
                var form2 = new Form2();
                form2.Show();
                form2.FormClosed += (s, args) => this.Close();
                this.Hide();
            }
            else
            {
                Application.Exit();
            }

        }

        private void label1_Click(object sender, EventArgs e)
        {
            this.textclicked = true;
            this.textnuber = this.textnuber + 1;
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
