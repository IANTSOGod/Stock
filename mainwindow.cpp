#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->authentificationStack->setCurrentIndex (0);
    ui->ErrorUsername->setHidden(true);
    ui->ErrorPassword->setHidden(true);
    ui->ErrorUsernameSP->setHidden(true);
    ui->ErrorPasswordSP->setHidden(true);
    ui->ErrorAge->setHidden(true);
    QPixmap image(":/assets/ill1.jpg"); // Remplacez par le chemin de votre image
    if (image.isNull()) {
        ui->imageLabel1->setText("Impossible de charger l'image !");
    } else {
        ui->imageLabel1->setPixmap(image.scaled(480, 480)); // Ajuste la taille
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//LogForm button events
void MainWindow::on_SignUpButton_clicked()
{
    ui->authentificationStack->setCurrentIndex (1);
}

void MainWindow::on_LoginButton_clicked()
{
    std::string currentUsername=this->loginform.getUsername ();
    std::string currentPassword=this->loginform.getPassword ();
    if(currentUsername!="" && currentPassword!=""){
        int use=this->user.authenticate (currentUsername,currentPassword);
        if(use==1){
            ui->authentificationStack->setCurrentIndex (2);
        }
        else{
            if (use==3){
                ui->ErrorUsername->setHidden(false);
                ui->UsernameInput->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
            }
            else if(use==2){
                ui->ErrorPassword->setHidden(false);
                ui->PasswordInput->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
            }
        }
    }else{
        if(currentUsername==""){
            ui->ErrorUsername->setHidden(false);
            ui->ErrorUsername->setText ("Champ vide");
            ui->UsernameInput->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
        }
        if(currentPassword==""){
            ui->ErrorPassword->setHidden(false);
            ui->ErrorPassword->setText ("Champ vide");
            ui->PasswordInput->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
        }
    }
}

//SignUpForm events
void MainWindow::on_cancelBtn_clicked()
{
    ui->authentificationStack->setCurrentIndex (0);
}

//LogForm inputs events
void MainWindow::on_PasswordInput_textChanged()
{
    QString textFromInput=(ui->PasswordInput->toPlainText ());
    std::string text=textFromInput.toStdString ();
    this->loginform.setPassword (text);
}

void MainWindow::on_UsernameInput_textChanged()
{
    QString textFromInput=(ui->UsernameInput->toPlainText ());
    std::string text=(textFromInput).toStdString ();
    this->loginform.setUsername (text);
}


void MainWindow::on_UsernameInputSP_textChanged()
{
    QString textFromInput=(ui->UsernameInputSP->toPlainText ());
    std::string text=(textFromInput).toStdString ();
    this->signform.setUsername (text);
}


void MainWindow::on_PasswordInputSP_textChanged()
{
    QString textFromInput=(ui->PasswordInputSP->toPlainText ());
    std::string text=(textFromInput).toStdString ();
    this->signform.setPassword (text);
}


void MainWindow::on_AgespinBox_valueChanged(int arg1)
{
    int currentValue=ui->AgespinBox->value ();
    this->signform.setAge (currentValue);
}


void MainWindow::on_roleCombo_currentTextChanged(const QString &arg1)
{
    QString currentText=ui->roleCombo->currentText ();
    std::string role=currentText.toStdString ();
    this->signform.setRole (role);
}


void MainWindow::on_createBtn_clicked()
{
    std::string currentUsername=this->signform.getUsername ();
    std::string currentPassword=this->signform.getPassword ();
    int currentAge=this->signform.getAge ();
    std::string currentRole=this->signform.getRole ();
    if(currentUsername!="" && currentPassword!="" && currentRole!="" && currentAge>19){
        this->user.create (currentUsername,currentPassword,currentAge,currentRole);
    }else{
        if(currentUsername==""){
            ui->ErrorUsernameSP->setHidden(false);
            ui->ErrorUsernameSP->setText ("Champ vide");
            ui->UsernameInputSP->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
        }
        if(currentPassword==""){
            ui->ErrorPasswordSP->setHidden(false);
            ui->ErrorPasswordSP->setText ("Champ vide");
            ui->PasswordInputSP->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;border-radius: 20px;");
        }
        if(currentAge<19){
            ui->ErrorAge->setHidden(false);
            ui->AgespinBox->setStyleSheet ("border: 5px solid rgb(237, 51, 59);font: 14pt 'CaskaydiaCove Nerd Font Propo';padding-top: 5px;padding-left: 5px;");
        }
    }
}

