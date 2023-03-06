#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //The Ui::MainWindow class is a nested class within the MainWindow class that is generated from the MainWindow.ui file
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
