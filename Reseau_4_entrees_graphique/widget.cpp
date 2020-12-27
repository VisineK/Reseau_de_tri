#include "widget.h"
#include "ui_widget.h"

#include <QSpinBox>
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Titre de la fenêtre */
    setWindowTitle("Réseau de Tri à 4 Entrées - Graphique");
}


Widget::~Widget()
{
    delete ui;
}


/* Boutton quitter */
void Widget::on_QuitButton_clicked()
{
    close();
}


void Widget::on_Tri_Button_clicked()
{








    /*
    int spin1 = ui -> choix1 -> value();
    int spin2 = ui -> choix2 -> value();
    int spin3 = ui -> choix3 -> value();
    int spin4 = ui -> choix4 -> value();

    QString lab1 = ui -> label1_1 -> text();
    QString lab2 = ui -> label1_2 -> text();
    QString lab3 = ui -> label2_1 -> text();
    QString lab4 = ui -> label2_2 -> text();
    QString lab5 = ui -> label3_1 -> text();
    QString lab6 = ui -> label3_2 -> text();
    QString lab7 = ui -> label4_1 -> text();
    QString lab8 = ui -> label4_2 -> text();
    QString lab9 = ui -> label5_1 -> text();
    QString lab10 = ui -> label5_2 -> text();


    if(spin1 > spin3){
        lab1 = spin3;
        lab2 = spin1;
        lab1.toInt();
        show();
    }else{
        lab1 = spin1;
        lab2 = spin3;
        show();
    }

    if(spin2 > spin4){
        lab3 = spin4;
        lab4 = spin2;
        show();
    }else{
        lab3 = spin2;
        lab4 = spin4;
        show();
    }

    if(spin1 > spin2){
        lab5 = spin2;
        lab6 = spin1;
        show();
    }else{
        lab5 = spin1;
        lab6 = spin2;
        show();
    }

    if(spin3 > spin4){
        lab7 = spin4;
        lab8 = spin3;
        show();
    }else{
        lab7 = spin3;
        lab8 = spin4;
        show();
    }

    if(spin2 > spin3){
        lab9 = spin3;
        lab10 = spin2;
        show();
    }else{
        lab9 = spin2;
        lab10 = spin3;
        repaint();
     }*/
}
