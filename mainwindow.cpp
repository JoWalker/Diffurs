#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <vector>
#include <symb/include/symbolicc++.h>
#include <QDebug>
#include <QString>
#include <string>
#include <QPixmap>

const QString version = "2.1";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::Start);
    ui->label_2->hide();
    setWindowTitle("Решение дифференциальных уравнений");
    ui->version->setText("v"+version);
}

MainWindow::~MainWindow()
{
    delete ui;
}


Symbolic pars(QString inp)
{
    QString num = "";
    std::vector<QString> pol;
    std::vector<QString> stack;
    for (int i = 0; i < inp.size(); ++i)
    {
        if (inp[i] <= '9' && inp[i] >= '0' || inp[i] == 'x')
        {
            while (inp[i] <= '9' && inp[i] >= '0')
            {
                num += inp[i];
                ++i;
            }
            if (inp[i] == 'x')
            num = "x";
            pol.push_back(num);
            num = "";
            if (inp[i] != 'x')
                --i;
        }
        else
            if (inp[i] == '*' || inp[i] == '/')
            {
                QString sss;
                if (inp[i] == '*')
                    sss = "*";
                else
                    sss = "/";
                stack.push_back(sss);
            }
        else
                if (inp[i] == '+' || inp[i] == '-')
                {
                    int ptr = stack.size() - 1;
                    while ((ptr >= 0) && (stack[ptr] == "*" || stack[ptr] == "/"))
                    {
                        pol.push_back(stack[ptr]);
                        stack.pop_back();
                        --ptr;
                    }
                    stack.push_back(QString(inp[i]));
                }
    }
    int ptr = stack.size() - 1;
    while (stack.size() > 0)
    {
        pol.push_back(stack[ptr]);
        stack.pop_back();
        --ptr;
    }

    std::vector <Symbolic> stack2;
    Symbolic tmp1, tmp2, x("x");
    for (int i = 0; i < pol.size(); ++i)
    {
        if (pol[i] == "+" || pol[i] == "-" || pol[i] == "*" || pol[i] == "/")
        {
            tmp2 = stack2.back();
            stack2.pop_back();
            tmp1 = stack2.back();
            stack2.pop_back();
            if (pol[i] == "+")
            stack2.push_back(tmp1 + tmp2);
            if (pol[i] == "-")
            stack2.push_back(tmp1 - tmp2);
            if (pol[i] == "*")
            stack2.push_back(tmp1 * tmp2);
            if (pol[i] == "/")
            stack2.push_back(tmp1 / tmp2);
        }
        else
        {
            if (pol[i] == "x")
                stack2.push_back(x);
            else
            {
                Symbolic xx = 0;
                xx += pol[i].toInt();
                stack2.push_back(xx);
            }
            }
    }
    return stack2.back();
}


void MainWindow::Simple_DU()
{
    std::vector<Symbolic> step;
    Symbolic x("x");
    Symbolic y("y");


    QString str1 = ui->lineEdit->text();
    QString str;
    for (int i = 3; i < str1.length(); ++i)
        str += str1[i];


    Symbolic ss = pars(str);
    Symbolic s = integrate(ss, x);

        std::ostringstream gg;
             gg << s;
             std::string hh = gg.str();
             QString sss;
             sss = QString::fromStdString(hh);
             ui->label->setText("y = " + sss + " + c");
             ui->label_2->show();

}

void MainWindow::Multiple_DU()
{   
    Symbolic x("x");
    QString str = ui->lineEdit->text();
    QString str1;
    QString str2;

    int i = 0;
    while (str[i] != '=')
    {
        if (str[i] != '\'' && str[i + 1] != '\'' && str[i + 2] != '\'')
            str1 += str[i];
        ++i;
    }

    for (int j = i + 1; j < str.length(); ++j)
    {
        str2 += str[j];
    }
    for (int j = 0; j < str1.length(); ++j)
    {
         if (str1[j] == 'y') str1[j] = 'x';
    }

    Symbolic fx = pars(str2);
    Symbolic fy = pars(str1);

    fx = integrate(fx, x);
    fy = integrate(fy, x);

    std::ostringstream gg;
         gg << fy;
         std::string hh = gg.str();
         QString sy;
         sy = QString::fromStdString(hh);

         for (int j = 0; j < sy.length(); ++j)
         {
              if (sy[j] == 'x') sy[j] = 'y';
         }
         gg << fx;
         hh = gg.str();
         QString sx = QString::fromStdString(hh);
         ui->label->setText(sy + "=" + sx + "+c2-c1");
         ui->label_2->show();

}

void MainWindow::Full_DU()
{
    ui->label->setText("Здесь могла быть ваша математика");
}

void MainWindow::Start()
{
    if (ui->comboBox->currentText() == "Простейшее ДУ I порядка")
        Simple_DU();

    if (ui->comboBox->currentText() == "ДУ с разделяющимися переменными I порядка")
        Multiple_DU();

    if (ui->comboBox->currentText() == "Уравнение в полных дифференциалах I порядка")
        Full_DU();

}
