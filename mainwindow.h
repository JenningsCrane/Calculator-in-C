#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QList>
#include <QMainWindow>
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

extern "C" {
#include "calc.h"
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void set_function();
  void set_symb();
  void set_dot();
  void clear_result();
  void compute_result();
  void add_graph();
  void clear_graph();

  //    void on_pushButton_clean_clicked();

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
