/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *page_2;
    QLabel *title_2;
    QLineEdit *fio;
    QLineEdit *email;
    QLineEdit *password_1;
    QLineEdit *password_2;
    QCheckBox *rool_check;
    QTextBrowser *textBrowser;
    QPushButton *regButton;
    QLabel *email_status;
    QLabel *email_status_2;
    QLabel *password_1_status;
    QLabel *password_2_status;
    QWidget *page_3;
    QWidget *page_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1385, 1168);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1381, 1121));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        label_2 = new QLabel(page_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 230, 341, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(31);
        label_2->setFont(font);
        label = new QLabel(page_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 190, 451, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(15);
        label->setFont(font1);
        pushButton = new QPushButton(page_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 400, 141, 51));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border-radius: 20px;\n"
"\n"
""));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        title_2 = new QLabel(page_2);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setGeometry(QRect(510, 140, 341, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("aakar"));
        font2.setPointSize(25);
        title_2->setFont(font2);
        fio = new QLineEdit(page_2);
        fio->setObjectName(QString::fromUtf8("fio"));
        fio->setGeometry(QRect(350, 220, 621, 41));
        fio->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-color:rgb(52, 101, 164);\n"
"border-radius:15px;"));
        email = new QLineEdit(page_2);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(350, 290, 621, 41));
        email->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-color:rgb(52, 101, 164);\n"
"border-radius:15px;"));
        password_1 = new QLineEdit(page_2);
        password_1->setObjectName(QString::fromUtf8("password_1"));
        password_1->setGeometry(QRect(350, 360, 621, 41));
        password_1->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-color:rgb(52, 101, 164);\n"
"border-radius:15px;"));
        password_2 = new QLineEdit(page_2);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setGeometry(QRect(350, 430, 621, 41));
        password_2->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-color:rgb(52, 101, 164);\n"
"border-radius:15px;\n"
""));
        rool_check = new QCheckBox(page_2);
        rool_check->setObjectName(QString::fromUtf8("rool_check"));
        rool_check->setGeometry(QRect(360, 500, 21, 21));
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(380, 500, 321, 111));
        regButton = new QPushButton(page_2);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(500, 640, 301, 61));
        regButton->setFont(font1);
        regButton->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-color:rgb(186, 189, 182);\n"
"border-radius:15px;"));
        email_status = new QLabel(page_2);
        email_status->setObjectName(QString::fromUtf8("email_status"));
        email_status->setGeometry(QRect(350, 270, 261, 18));
        email_status_2 = new QLabel(page_2);
        email_status_2->setObjectName(QString::fromUtf8("email_status_2"));
        email_status_2->setGeometry(QRect(350, 200, 261, 18));
        password_1_status = new QLabel(page_2);
        password_1_status->setObjectName(QString::fromUtf8("password_1_status"));
        password_1_status->setGeometry(QRect(350, 340, 261, 18));
        password_2_status = new QLabel(page_2);
        password_2_status->setObjectName(QString::fromUtf8("password_2_status"));
        password_2_status->setGeometry(QRect(350, 410, 261, 18));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1385, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TRANSSPACE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\275\321\221\320\274", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        fio->setPlaceholderText(QString());
        rool_check->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','sans-serif'; color:#444444; background-color:rgba(0,0,0,0.058824);\">\320\257 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\216 \321\203\321\201\320\273\320\276\320\262\320\270\321\217 \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\263\320\276 \321\201\320\276\320\263\320\273\320\260\321\210\320\265\320\275\320\270\321\217 \320\270 \320\264\320\260\321\216 \321\201\320\262\320\276\321\221 \321\201\320\276\320\263\320\273\320\260\321\201\320"
                        "\270\320\265 \320\275\320\260 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\321\203 \320\274\320\276\320\265\320\271 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\271 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\275\320\260 \321\203\321\201\320\273\320\276\320\262\320\270\321\217\321\205, \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \320\237\320\276\320\273\320\270\321\202\320\270\320\272\320\276\320\271 \320\272\320\276\320\275\321\204\320\270\320\264\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270.</span></p></body></html>", nullptr));
        regButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        email_status->setText(QString());
        email_status_2->setText(QString());
        password_1_status->setText(QString());
        password_2_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
