#include "mainwindow.h"
#include "ui_mainwindow.h"

unsigned int l;

// Initializes the Window
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

// Code Cleanup
MainWindow::~MainWindow()
{
    delete ui;
}

// Reveals the label
void MainWindow::on_show_Button_clicked()
{
    if (!l) ui->label->show();
}

// Hides the label
void MainWindow::on_hide_Button_clicked()
{
    if (!l) ui->label->hide();
}

// Shifts the label to the left
void MainWindow::on_left_Button_clicked()
{
    if (!l && !ui->label->isHidden()) {
        int curx = ui->label->x();
        int cury = ui->label->y();
        int newx = curx - 10;
        ui->label->move(newx, cury);
    }
}

// Shifts the label to the right
void MainWindow::on_right_Button_clicked()
{
    if (!l && !ui->label->isHidden()) {
        int curx = ui->label->x();
        int cury = ui->label->y();
        int newx = curx + 10;
        ui->label->move(newx, cury);
    }
}

// Updates stored value for when the application is locked
void MainWindow::on_lock_CheckBox_stateChanged(int arg1)
{
    l = ui->lock_CheckBox->isChecked();
}

// Populated the lineEdit with the specified item from listWidget when clicked
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->lineEdit->setText(item->text());
}

// Replaces the selected item in the listWidget, or adds a new one if none selected
void MainWindow::on_buttonBox_accepted()
{
    //try {
        ui->listWidget->currentItem()->setText(ui->lineEdit->text());
    //}  catch () {
    //    ui->listWidget->addItem(ui->lineEdit->text());
    //}
    //else ui->listWidget->addItem(ui->lineEdit->text());
}

// Clears the line edit if the button is rejected, and deselects the listWidget
void MainWindow::on_buttonBox_rejected()
{
    ui->lineEdit->clear();
    ui->listWidget->clearSelection();
}

