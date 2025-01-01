/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *authentificationStack;
    QWidget *loginPage;
    QListView *form;
    QFrame *imageFrame;
    QLabel *imageLabel1;
    QLabel *startLabel;
    QTextEdit *UsernameInput;
    QTextEdit *PasswordInput;
    QLabel *Label1;
    QLabel *Label2;
    QPushButton *LoginButton;
    QPushButton *SignUpButton;
    QLabel *ErrorUsername;
    QLabel *ErrorPassword;
    QWidget *signupPage;
    QListView *signupFORM;
    QFrame *imageFrame_2;
    QLabel *startLabel_2;
    QTextEdit *UsernameInputSP;
    QTextEdit *PasswordInputSP;
    QLabel *Label3;
    QLabel *Label4;
    QLabel *Label5;
    QLabel *Label6;
    QPushButton *createBtn;
    QPushButton *cancelBtn;
    QComboBox *roleCombo;
    QSpinBox *AgespinBox;
    QLabel *ErrorUsernameSP;
    QLabel *ErrorPasswordSP;
    QLabel *ErrorAge;
    QWidget *HomePage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1900, 1200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        authentificationStack = new QStackedWidget(centralwidget);
        authentificationStack->setObjectName("authentificationStack");
        authentificationStack->setGeometry(QRect(0, 0, 1991, 1200));
        authentificationStack->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        loginPage->setStyleSheet(QString::fromUtf8(""));
        form = new QListView(loginPage);
        form->setObjectName("form");
        form->setGeometry(QRect(480, 200, 1000, 600));
        form->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(192, 191, 188);\n"
"border-radius: 50px;"));
        imageFrame = new QFrame(loginPage);
        imageFrame->setObjectName("imageFrame");
        imageFrame->setGeometry(QRect(480, 200, 551, 600));
        imageFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-color: rgb(119, 118, 123);\n"
"border-radius: 50px;"));
        imageFrame->setFrameShape(QFrame::Shape::StyledPanel);
        imageFrame->setFrameShadow(QFrame::Shadow::Raised);
        imageLabel1 = new QLabel(imageFrame);
        imageLabel1->setObjectName("imageLabel1");
        imageLabel1->setGeometry(QRect(30, 70, 480, 480));
        startLabel = new QLabel(loginPage);
        startLabel->setObjectName("startLabel");
        startLabel->setGeometry(QRect(1190, 230, 241, 51));
        startLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 20pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        UsernameInput = new QTextEdit(loginPage);
        UsernameInput->setObjectName("UsernameInput");
        UsernameInput->setGeometry(QRect(1080, 370, 351, 51));
        UsernameInput->setStyleSheet(QString::fromUtf8("font: 14pt \"CaskaydiaCove Nerd Font Propo\";\n"
"padding-top: 10px;\n"
"padding-left: 5px;\n"
"border-radius: 20px;"));
        PasswordInput = new QTextEdit(loginPage);
        PasswordInput->setObjectName("PasswordInput");
        PasswordInput->setGeometry(QRect(1080, 500, 351, 51));
        PasswordInput->setStyleSheet(QString::fromUtf8("font: 14pt \"CaskaydiaCove Nerd Font Propo\";\n"
"padding-top: 10px;\n"
"paddin-left: 5px;\n"
"border-radius: 20px;"));
        Label1 = new QLabel(loginPage);
        Label1->setObjectName("Label1");
        Label1->setGeometry(QRect(1080, 310, 241, 51));
        Label1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        Label2 = new QLabel(loginPage);
        Label2->setObjectName("Label2");
        Label2->setGeometry(QRect(1080, 440, 241, 51));
        Label2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        LoginButton = new QPushButton(loginPage);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(1080, 600, 351, 51));
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(98, 160, 234);\n"
"border-radius: 20px;\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"}\n"
"QPushButton:hover{\n"
"border: 5px solid rgb(246, 245, 244);\n"
"}"));
        SignUpButton = new QPushButton(loginPage);
        SignUpButton->setObjectName("SignUpButton");
        SignUpButton->setGeometry(QRect(1080, 680, 351, 51));
        SignUpButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:hover{\n"
"border: 5px solid rgb(192, 191, 188);\n"
"}"));
        ErrorUsername = new QLabel(loginPage);
        ErrorUsername->setObjectName("ErrorUsername");
        ErrorUsername->setGeometry(QRect(1080, 430, 351, 18));
        ErrorUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(237, 51, 59);"));
        ErrorPassword = new QLabel(loginPage);
        ErrorPassword->setObjectName("ErrorPassword");
        ErrorPassword->setGeometry(QRect(1080, 560, 351, 18));
        ErrorPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(237, 51, 59);"));
        authentificationStack->addWidget(loginPage);
        signupPage = new QWidget();
        signupPage->setObjectName("signupPage");
        signupFORM = new QListView(signupPage);
        signupFORM->setObjectName("signupFORM");
        signupFORM->setGeometry(QRect(480, 200, 1000, 600));
        signupFORM->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(192, 191, 188);\n"
"border-radius: 50px;"));
        imageFrame_2 = new QFrame(signupPage);
        imageFrame_2->setObjectName("imageFrame_2");
        imageFrame_2->setGeometry(QRect(1080, 200, 401, 600));
        imageFrame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);\n"
"border-color: rgb(119, 118, 123);\n"
"border-radius: 50px;"));
        imageFrame_2->setFrameShape(QFrame::Shape::StyledPanel);
        imageFrame_2->setFrameShadow(QFrame::Shadow::Raised);
        startLabel_2 = new QLabel(signupPage);
        startLabel_2->setObjectName("startLabel_2");
        startLabel_2->setGeometry(QRect(680, 210, 241, 51));
        startLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 20pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        UsernameInputSP = new QTextEdit(signupPage);
        UsernameInputSP->setObjectName("UsernameInputSP");
        UsernameInputSP->setGeometry(QRect(550, 330, 451, 51));
        UsernameInputSP->setStyleSheet(QString::fromUtf8("font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"padding-top: 10px;\n"
"padding-left: 30px;\n"
"border-radius: 20px;"));
        PasswordInputSP = new QTextEdit(signupPage);
        PasswordInputSP->setObjectName("PasswordInputSP");
        PasswordInputSP->setGeometry(QRect(550, 450, 451, 51));
        PasswordInputSP->setStyleSheet(QString::fromUtf8("font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"padding-left: 30px;\n"
"padding-top:10px;\n"
"border-radius: 20px;\n"
""));
        Label3 = new QLabel(signupPage);
        Label3->setObjectName("Label3");
        Label3->setGeometry(QRect(550, 270, 241, 51));
        Label3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        Label4 = new QLabel(signupPage);
        Label4->setObjectName("Label4");
        Label4->setGeometry(QRect(550, 410, 241, 31));
        Label4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        Label5 = new QLabel(signupPage);
        Label5->setObjectName("Label5");
        Label5->setGeometry(QRect(550, 520, 171, 51));
        Label5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        Label6 = new QLabel(signupPage);
        Label6->setObjectName("Label6");
        Label6->setGeometry(QRect(810, 520, 241, 51));
        Label6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"color: rgb(255, 255, 255);"));
        createBtn = new QPushButton(signupPage);
        createBtn->setObjectName("createBtn");
        createBtn->setGeometry(QRect(550, 680, 191, 51));
        createBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(98, 160, 234);\n"
"border-radius: 20px;\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"}\n"
"QPushButton:hover{\n"
"border: 5px solid rgb(246, 245, 244);\n"
"}"));
        cancelBtn = new QPushButton(signupPage);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setGeometry(QRect(810, 680, 191, 51));
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:hover{\n"
"border: 5px solid rgb(192, 191, 188);\n"
"}"));
        roleCombo = new QComboBox(signupPage);
        roleCombo->addItem(QString());
        roleCombo->addItem(QString());
        roleCombo->setObjectName("roleCombo");
        roleCombo->setGeometry(QRect(810, 580, 191, 51));
        roleCombo->setStyleSheet(QString::fromUtf8("font: 16pt \"CaskaydiaCove Nerd Font Propo\";\n"
"padding-left: 30px;"));
        AgespinBox = new QSpinBox(signupPage);
        AgespinBox->setObjectName("AgespinBox");
        AgespinBox->setGeometry(QRect(550, 580, 191, 51));
        AgespinBox->setStyleSheet(QString::fromUtf8("font: 16pt \"CaskaydiaCove Nerd Font Propo\";"));
        ErrorUsernameSP = new QLabel(signupPage);
        ErrorUsernameSP->setObjectName("ErrorUsernameSP");
        ErrorUsernameSP->setGeometry(QRect(550, 390, 141, 18));
        ErrorUsernameSP->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(237, 51, 59);"));
        ErrorPasswordSP = new QLabel(signupPage);
        ErrorPasswordSP->setObjectName("ErrorPasswordSP");
        ErrorPasswordSP->setGeometry(QRect(550, 510, 191, 18));
        ErrorPasswordSP->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(237, 51, 59);"));
        ErrorAge = new QLabel(signupPage);
        ErrorAge->setObjectName("ErrorAge");
        ErrorAge->setGeometry(QRect(550, 640, 191, 18));
        ErrorAge->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(237, 51, 59);"));
        authentificationStack->addWidget(signupPage);
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        authentificationStack->addWidget(HomePage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        imageLabel1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startLabel->setText(QCoreApplication::translate("MainWindow", "Login here", nullptr));
        UsernameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre username ici", nullptr));
        PasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre mot de passe ici", nullptr));
        Label1->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Label2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        SignUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        ErrorUsername->setText(QCoreApplication::translate("MainWindow", "Utilisateur non trouv\303\251", nullptr));
        ErrorPassword->setText(QCoreApplication::translate("MainWindow", "Mot de passe incorrect", nullptr));
        startLabel_2->setText(QCoreApplication::translate("MainWindow", "Sign Up here", nullptr));
        UsernameInputSP->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre username ici", nullptr));
        PasswordInputSP->setPlaceholderText(QCoreApplication::translate("MainWindow", "Entrez votre password ici", nullptr));
        Label3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Label4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Label5->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        Label6->setText(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        createBtn->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        roleCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Admin", nullptr));
        roleCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Cashier", nullptr));

        ErrorUsernameSP->setText(QCoreApplication::translate("MainWindow", "User not found", nullptr));
        ErrorPasswordSP->setText(QCoreApplication::translate("MainWindow", "Password incorrect", nullptr));
        ErrorAge->setText(QCoreApplication::translate("MainWindow", "Age invalide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
