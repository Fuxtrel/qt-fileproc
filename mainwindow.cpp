#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->fio->setPlaceholderText(QString("ФИО"));
    ui->email->setPlaceholderText(QString("Email"));
    ui->password_1->setPlaceholderText(QString("Пароль"));
    ui->password_2->setPlaceholderText(QString("Повторите пароль"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

bool MainWindow::fieldEmailChecking(){
    QString email = ui->email->text();
    if(email[0] == '@'){
        return false;
    }
    for(int i = 0; i < email.length(); i++){
        if(email[i] == '@'){
            i++;
            int tmp = 0;
            for(;i < email.length(); i++){
                if(email[i] == '.' && i > tmp){
                    tmp = i;
                }
            }
            for(int j = tmp; j < email.length(); j++){
                if(((email.length() - j - 1) > 1) && ((email.length() - j - 1) < 4)){
                    j++;
                    for(; j < email.length(); j++){
                        if(email[i] > 'z' || email[j] < 'A'){
                            return false;
                        }
                    }
                    return true;
                }
            }
        }

    }
    return false;
}

bool MainWindow::fieldPasswordCheck(){
    QString pass1 = ui->password_1->text();
    QString pass2 = ui->password_2->text();
    if(pass1.isEmpty() || pass2.isEmpty()){
        return false;
    }
    for(int i = 0; i < pass1.length(); i++){
        if(((pass1[i] > 'z') || (pass1[i] < 'A')) && ((pass1[i] > '0') || (pass1[i] < '9'))){
            return false;
        }
        if(((pass2[i] > 'z') || (pass2[i] < 'A')) && ((pass2[i] > '0') || (pass2[i] < '9'))){
            return false;
        }
    }
    if(pass1.length() != pass2.length()){
        return false;
    }
    for(int i = 0; i < pass1.length(); i++){
        if(pass1[i] != pass2[i]){
            return false;
        }
    }
    return true;
}




void MainWindow::on_regButton_clicked()
{
    ui->email_status->clear();
    ui->password_1_status->clear();
    ui->password_2_status->clear();
    if(!ui->rool_check->isChecked()){
        return;
    }
    if(!fieldEmailChecking()){
        ui->email_status->setStyleSheet("color:rgb(239, 41, 41);");
        ui->email_status->setText("Неверный формат Email");
        ui->email->clear();
    }else{
        ui->email_status->setStyleSheet("color:rgb(115, 210, 22);");
        ui->email_status->setText("Готово");
    }
    if(!fieldPasswordCheck()){
        ui->password_1_status->setStyleSheet("color:rgb(239, 41, 41);");
        ui->password_1_status->setText("Пароли не совпадают");
        ui->password_1->clear();
        ui->password_2->clear();
    }else{
        ui->password_1_status->setStyleSheet("color:rgb(115, 210, 22);");
        ui->password_1_status->setText("Готово");
    }
}


void MainWindow::on_rool_check_clicked()
{
    ui->email_status->clear();
    ui->password_1_status->clear();
    ui->password_2_status->clear();
    if (ui->rool_check->isChecked())
    {
        ui->regButton->setStyleSheet("background-color:rgb(245, 121, 0);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-color:rgb(245, 121, 0);"
                                      "border-radius:15px;"
                                      );
    }else{
        ui->regButton->setStyleSheet("background-color: rgb(186, 189, 182);"
                                      "border-style: outset;"
                                      "border-width: 2px;"
                                      "border-color:rgb(186, 189, 182);"
                                      "border-radius:15px;"
                                      );
    }
}
