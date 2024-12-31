#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "logform.h"
#include "signform.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    private:
    User user;
    LogForm loginform;
    SignForm signform;
private slots:
    void on_SignUpButton_clicked();

    void on_LoginButton_clicked();

    void on_UsernameInput_textChanged();

    void on_cancelBtn_clicked();

    void on_PasswordInput_textChanged();

    void on_UsernameInputSP_textChanged();

    void on_PasswordInputSP_textChanged();

    void on_AgespinBox_valueChanged(int arg1);

    void on_roleCombo_currentTextChanged(const QString &arg1);

    void on_createBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
