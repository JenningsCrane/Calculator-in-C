/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QPushButton *pushButton_7;
  QLabel *result;
  QPushButton *pushButton_8;
  QPushButton *pushButton_9;
  QPushButton *pushButton_5;
  QPushButton *pushButton_4;
  QPushButton *pushButton_6;
  QPushButton *pushButton_1;
  QPushButton *pushButton_2;
  QPushButton *pushButton_3;
  QPushButton *pushButton_0;
  QPushButton *pushButton_dot;
  QPushButton *pushButton_minus;
  QPushButton *pushButton_mult;
  QPushButton *pushButton_plus;
  QPushButton *pushButton_div;
  QPushButton *pushButton_eq;
  QPushButton *pushButton_closed_skoba;
  QPushButton *pushButton_open_skoba;
  QPushButton *pushButton_clear_all;
  QPushButton *pushButton_ln;
  QPushButton *pushButton_cos;
  QPushButton *pushButton_clean;
  QPushButton *pushButton_tan;
  QPushButton *pushButton_acos;
  QPushButton *pushButton_sqrt;
  QPushButton *pushButton_log;
  QPushButton *pushButton_asin;
  QPushButton *pushButton_sin;
  QPushButton *pushButton_pow;
  QPushButton *pushButton_atan;
  QPushButton *pushButton_mod;
  QLineEdit *lineEdit_x;
  QPushButton *pushButton_x;
  QPushButton *pushButton_graph;
  QCustomPlot *graphic;
  QPushButton *pushButton_graph_clear;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(722, 322);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    pushButton_7 = new QPushButton(centralwidget);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(160, 110, 51, 51));
    QFont font;
    font.setPointSize(12);
    pushButton_7->setFont(font);
    pushButton_7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    result = new QLabel(centralwidget);
    result->setObjectName(QString::fromUtf8("result"));
    result->setGeometry(QRect(10, 10, 351, 41));
    QFont font1;
    font1.setPointSize(20);
    result->setFont(font1);
    result->setAutoFillBackground(false);
    result->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "	border: 1px solid gray;\n"
        "	background-color : white;\n"
        "	color: black;\n"
        "}\n"
        "\n"
        ""));
    pushButton_8 = new QPushButton(centralwidget);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setGeometry(QRect(210, 110, 51, 51));
    pushButton_8->setFont(font);
    pushButton_8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_9 = new QPushButton(centralwidget);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
    pushButton_9->setGeometry(QRect(260, 110, 51, 51));
    pushButton_9->setFont(font);
    pushButton_9->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_5 = new QPushButton(centralwidget);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(210, 160, 51, 51));
    pushButton_5->setFont(font);
    pushButton_5->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_4 = new QPushButton(centralwidget);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(160, 160, 51, 51));
    pushButton_4->setFont(font);
    pushButton_4->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_6 = new QPushButton(centralwidget);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(260, 160, 51, 51));
    pushButton_6->setFont(font);
    pushButton_6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_1 = new QPushButton(centralwidget);
    pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
    pushButton_1->setGeometry(QRect(160, 210, 51, 51));
    pushButton_1->setFont(font);
    pushButton_1->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_2 = new QPushButton(centralwidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(210, 210, 51, 51));
    pushButton_2->setFont(font);
    pushButton_2->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_3 = new QPushButton(centralwidget);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(260, 210, 51, 51));
    pushButton_3->setFont(font);
    pushButton_3->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_0 = new QPushButton(centralwidget);
    pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
    pushButton_0->setGeometry(QRect(160, 260, 101, 51));
    pushButton_0->setFont(font);
    pushButton_0->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_dot = new QPushButton(centralwidget);
    pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
    pushButton_dot->setGeometry(QRect(260, 260, 51, 51));
    pushButton_dot->setFont(font);
    pushButton_dot->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_minus = new QPushButton(centralwidget);
    pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
    pushButton_minus->setGeometry(QRect(310, 160, 51, 51));
    QFont font2;
    font2.setPointSize(18);
    pushButton_minus->setFont(font2);
    pushButton_minus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: black;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #FF7832, stop 1 #FF9739);\n"
        "}"));
    pushButton_mult = new QPushButton(centralwidget);
    pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
    pushButton_mult->setGeometry(QRect(310, 110, 51, 51));
    pushButton_mult->setFont(font2);
    pushButton_mult->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: black;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #FF7832, stop 1 #FF9739);\n"
        "}"));
    pushButton_plus = new QPushButton(centralwidget);
    pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
    pushButton_plus->setGeometry(QRect(310, 210, 51, 51));
    pushButton_plus->setFont(font2);
    pushButton_plus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: black;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #FF7832, stop 1 #FF9739);\n"
        "}"));
    pushButton_div = new QPushButton(centralwidget);
    pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
    pushButton_div->setGeometry(QRect(310, 60, 51, 51));
    pushButton_div->setFont(font2);
    pushButton_div->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: black;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #FF7832, stop 1 #FF9739);\n"
        "}"));
    pushButton_eq = new QPushButton(centralwidget);
    pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
    pushButton_eq->setGeometry(QRect(310, 260, 51, 51));
    pushButton_eq->setFont(font2);
    pushButton_eq->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(255, 151, 57);\n"
        "	color: black;\n"
        "	border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #FF7832, stop 1 #FF9739);\n"
        "}"));
    pushButton_closed_skoba = new QPushButton(centralwidget);
    pushButton_closed_skoba->setObjectName(
        QString::fromUtf8("pushButton_closed_skoba"));
    pushButton_closed_skoba->setGeometry(QRect(260, 60, 51, 51));
    pushButton_closed_skoba->setFont(font);
    pushButton_closed_skoba->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_open_skoba = new QPushButton(centralwidget);
    pushButton_open_skoba->setObjectName(
        QString::fromUtf8("pushButton_open_skoba"));
    pushButton_open_skoba->setGeometry(QRect(210, 60, 51, 51));
    pushButton_open_skoba->setFont(font);
    pushButton_open_skoba->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_clear_all = new QPushButton(centralwidget);
    pushButton_clear_all->setObjectName(
        QString::fromUtf8("pushButton_clear_all"));
    pushButton_clear_all->setGeometry(QRect(110, 60, 51, 51));
    pushButton_clear_all->setFont(font);
    pushButton_clear_all->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_ln = new QPushButton(centralwidget);
    pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
    pushButton_ln->setGeometry(QRect(110, 160, 51, 51));
    pushButton_ln->setFont(font);
    pushButton_ln->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_cos = new QPushButton(centralwidget);
    pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
    pushButton_cos->setGeometry(QRect(60, 160, 51, 51));
    pushButton_cos->setFont(font);
    pushButton_cos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_clean = new QPushButton(centralwidget);
    pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));
    pushButton_clean->setGeometry(QRect(160, 60, 51, 51));
    pushButton_clean->setFont(font);
    pushButton_clean->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_tan = new QPushButton(centralwidget);
    pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
    pushButton_tan->setGeometry(QRect(60, 210, 51, 51));
    pushButton_tan->setFont(font);
    pushButton_tan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_acos = new QPushButton(centralwidget);
    pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
    pushButton_acos->setGeometry(QRect(10, 160, 51, 51));
    pushButton_acos->setFont(font);
    pushButton_acos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_sqrt = new QPushButton(centralwidget);
    pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
    pushButton_sqrt->setGeometry(QRect(110, 110, 51, 51));
    pushButton_sqrt->setFont(font);
    pushButton_sqrt->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_log = new QPushButton(centralwidget);
    pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
    pushButton_log->setGeometry(QRect(110, 210, 51, 51));
    pushButton_log->setFont(font);
    pushButton_log->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_asin = new QPushButton(centralwidget);
    pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
    pushButton_asin->setGeometry(QRect(10, 110, 51, 51));
    pushButton_asin->setFont(font);
    pushButton_asin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_sin = new QPushButton(centralwidget);
    pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
    pushButton_sin->setGeometry(QRect(60, 110, 51, 51));
    pushButton_sin->setFont(font);
    pushButton_sin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_pow = new QPushButton(centralwidget);
    pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
    pushButton_pow->setGeometry(QRect(10, 60, 51, 51));
    pushButton_pow->setFont(font);
    pushButton_pow->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #BEBEBE, stop 1 #D7D7D7);\n"
        "}"));
    pushButton_atan = new QPushButton(centralwidget);
    pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
    pushButton_atan->setGeometry(QRect(10, 210, 51, 51));
    pushButton_atan->setFont(font);
    pushButton_atan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_mod = new QPushButton(centralwidget);
    pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
    pushButton_mod->setGeometry(QRect(60, 60, 51, 51));
    pushButton_mod->setFont(font);
    pushButton_mod->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	background-color: rgb(215, 215, 215);\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    lineEdit_x = new QLineEdit(centralwidget);
    lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
    lineEdit_x->setGeometry(QRect(60, 260, 101, 51));
    lineEdit_x->setFont(font);
    lineEdit_x->setStyleSheet(QString::fromUtf8(
        "QLineEdit {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignCenter';\n"
        "	border: 1px solid gray;\n"
        "	background-color : rgb(215, 215, 215);\n"
        "	color: black;\n"
        "}"));
    pushButton_x = new QPushButton(centralwidget);
    pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
    pushButton_x->setGeometry(QRect(10, 260, 51, 51));
    pushButton_x->setFont(font);
    pushButton_x->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    pushButton_graph = new QPushButton(centralwidget);
    pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
    pushButton_graph->setGeometry(QRect(370, 280, 221, 31));
    QFont font3;
    font3.setPointSize(10);
    pushButton_graph->setFont(font3);
    pushButton_graph->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    graphic = new QCustomPlot(centralwidget);
    graphic->setObjectName(QString::fromUtf8("graphic"));
    graphic->setGeometry(QRect(370, 10, 341, 261));
    pushButton_graph_clear = new QPushButton(centralwidget);
    pushButton_graph_clear->setObjectName(
        QString::fromUtf8("pushButton_graph_clear"));
    pushButton_graph_clear->setGeometry(QRect(600, 280, 111, 31));
    pushButton_graph_clear->setFont(font3);
    pushButton_graph_clear->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "	border: 1px solid gray;\n"
        "	color: black;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "								"
        "		stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
        "}"));
    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(QCoreApplication::translate(
        "MainWindow",
        "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321"
        "\202\320\276\321\200",
        nullptr));
    pushButton_7->setText(
        QCoreApplication::translate("MainWindow", "7", nullptr));
    result->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
    pushButton_8->setText(
        QCoreApplication::translate("MainWindow", "8", nullptr));
    pushButton_9->setText(
        QCoreApplication::translate("MainWindow", "9", nullptr));
    pushButton_5->setText(
        QCoreApplication::translate("MainWindow", "5", nullptr));
    pushButton_4->setText(
        QCoreApplication::translate("MainWindow", "4", nullptr));
    pushButton_6->setText(
        QCoreApplication::translate("MainWindow", "6", nullptr));
    pushButton_1->setText(
        QCoreApplication::translate("MainWindow", "1", nullptr));
    pushButton_2->setText(
        QCoreApplication::translate("MainWindow", "2", nullptr));
    pushButton_3->setText(
        QCoreApplication::translate("MainWindow", "3", nullptr));
    pushButton_0->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    pushButton_dot->setText(
        QCoreApplication::translate("MainWindow", ".", nullptr));
    pushButton_minus->setText(
        QCoreApplication::translate("MainWindow", "-", nullptr));
    pushButton_mult->setText(
        QCoreApplication::translate("MainWindow", "*", nullptr));
    pushButton_plus->setText(
        QCoreApplication::translate("MainWindow", "+", nullptr));
    pushButton_div->setText(
        QCoreApplication::translate("MainWindow", "/", nullptr));
    pushButton_eq->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
    pushButton_closed_skoba->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
    pushButton_open_skoba->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
    pushButton_clear_all->setText(
        QCoreApplication::translate("MainWindow", "AC", nullptr));
    pushButton_ln->setText(
        QCoreApplication::translate("MainWindow", "ln", nullptr));
    pushButton_cos->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    pushButton_clean->setText(
        QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
    pushButton_tan->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    pushButton_acos->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    pushButton_sqrt->setText(
        QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
    pushButton_log->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    pushButton_asin->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    pushButton_sin->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    pushButton_pow->setText(
        QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
    pushButton_atan->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    pushButton_mod->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
    lineEdit_x->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    pushButton_x->setText(
        QCoreApplication::translate("MainWindow", "X =", nullptr));
    pushButton_graph->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321"
        "\214 \320\263\321\200\320\260\321\204\320\270\320\272",
        nullptr));
    pushButton_graph_clear->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 "
        "\320\263\321\200\320\260\321\204\320\270\320\272",
        nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
