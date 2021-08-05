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

namespace abcdefg
{
    public partial class Form1 : Form
    {

        bool DebugRexor = false;

        public static void Error()
        {
            string message2 = "An error occured, please try again or contact support.";
            string title2 = "Rexor Launcher";
            MessageBox.Show(message2, title2);
        }

        public void wait(int milliseconds)
        {
            var timer1 = new System.Windows.Forms.Timer();
            if (milliseconds == 0 || milliseconds < 0) return;

            // Console.WriteLine("start wait timer");
            timer1.Interval = milliseconds;
            timer1.Enabled = true;
            timer1.Start();

            timer1.Tick += (s, e) =>
            {
                timer1.Enabled = false;
                timer1.Stop();
                // Console.WriteLine("stop wait timer");
            };

            while (timer1.Enabled)
            {
                Application.DoEvents();
            }
        }

        public void waitrandom(int num1, int num2)
        {
            Random rd = new Random();
            int randomnumberusedintimer = rd.Next(num1, num2);
            wait(randomnumberusedintimer);
        }

        public Form1()
        {
            InitializeComponent();
            radioButton1.Enabled = false;
            radioButton2.Enabled = false;
            radioButton3.Enabled = false;
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            radioButton1.Enabled = true;
            radioButton2.Enabled = true;
            radioButton3.Enabled = true;
        }

        private void Data_Click(object sender, EventArgs e)
        {
        }

        private void tabControl1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void checkBox2_CheckedChanged_1(object sender, EventArgs e)
        {
            string debugmsg = "Debug mode enabled,\nTo disable debug mode, please restart Rexor-Launcher.";
            string debugtitle = "Rexor Launcher";
            MessageBox.Show(debugmsg, debugtitle);
            this.DebugRexor = true;
        }

        public void button1_Click(object sender, EventArgs e)
        {

            if (File.Exists("C:\\Rexor\\bin\\rexor-debug-32.exe"))
            {
                
            }
            else
            {
                Error();
            }

            if (File.Exists("C:\\Rexor\\bin\\rexor-32.exe"))
            {
                
            }
            else
            {
                Error();
            }

            if (DebugRexor)
            {
                System.Diagnostics.Process.Start("file://C:\\Rexor\\bin\\rexor-debug-32.exe");
                Application.Exit();
            }
            else
            {
                System.Diagnostics.Process.Start("file://C:\\Rexor\\bin\\rexor-32.exe");
                Application.Exit();
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void toolTip1_Popup(object sender, PopupEventArgs e)
        {

        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            System.Diagnostics.Process.Start("https://github.com/RealFX-Code/Rexor/blob/main/Flags-List");
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label4_Click_1(object sender, EventArgs e)
        {

        }

    }
}
