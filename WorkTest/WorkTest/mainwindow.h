#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_show_Button_clicked();

    void on_hide_Button_clicked();

    void on_left_Button_clicked();

    void on_right_Button_clicked();

    void on_lock_CheckBox_stateChanged(int arg1);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
