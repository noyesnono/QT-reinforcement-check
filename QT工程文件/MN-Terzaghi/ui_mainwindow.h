/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_a;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_a;
    QLabel *label_a_1;
    QWidget *tab_b;
    QGridLayout *gridLayout_b;
    QWidget *widget_b;
    QLabel *label_b_1;
    QWidget *tab_c;
    QGridLayout *gridLayout_c;
    QWidget *widget_c;
    QWidget *chartwidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_c_1;
    QLabel *label_c_2;
    QLabel *label_c_3;
    QLabel *label_c_4;
    QLabel *label_c_5;
    QLabel *label_c_6;
    QLabel *label_c_7;
    QLabel *label_c_8;
    QLabel *label_c_9;
    QLabel *label_c_10;
    QLabel *label_c_19;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_c_1;
    QLineEdit *lineEdit_c_2;
    QLineEdit *lineEdit_c_3;
    QLineEdit *lineEdit_c_4;
    QLineEdit *lineEdit_c_5;
    QLineEdit *lineEdit_c_6;
    QLineEdit *lineEdit_c_7;
    QLineEdit *lineEdit_c_8;
    QLineEdit *lineEdit_c_9;
    QLineEdit *lineEdit_c_10;
    QLineEdit *lineEdit_c_17;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_c_13;
    QLineEdit *lineEdit_c_13;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_c_11;
    QLabel *label_c_12;
    QLineEdit *lineEdit_c_12;
    QLineEdit *lineEdit_c_11;
    QPushButton *pushButton_c_3;
    QLabel *label_c_14;
    QLabel *label_c_18;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_c_1;
    QPushButton *pushButton_c_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_c_16;
    QLabel *label_c_15;
    QLabel *label_c_17;
    QLabel *label_c_20;
    QLabel *label_c_21;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_c_14;
    QLineEdit *lineEdit_c_15;
    QLineEdit *lineEdit_c_16;
    QLineEdit *lineEdit_c_18;
    QLineEdit *lineEdit_c_19;
    QWidget *tab_d;
    QGridLayout *gridLayout_d;
    QWidget *widget_d;
    QLabel *label_d_1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1034, 781);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_a = new QWidget();
        tab_a->setObjectName(QStringLiteral("tab_a"));
        verticalLayout_4 = new QVBoxLayout(tab_a);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_a = new QWidget(tab_a);
        widget_a->setObjectName(QStringLiteral("widget_a"));
        label_a_1 = new QLabel(widget_a);
        label_a_1->setObjectName(QStringLiteral("label_a_1"));
        label_a_1->setGeometry(QRect(9, 9, 68, 22));

        verticalLayout_4->addWidget(widget_a);

        tabWidget->addTab(tab_a, QString());
        tab_b = new QWidget();
        tab_b->setObjectName(QStringLiteral("tab_b"));
        gridLayout_b = new QGridLayout(tab_b);
        gridLayout_b->setSpacing(6);
        gridLayout_b->setContentsMargins(11, 11, 11, 11);
        gridLayout_b->setObjectName(QStringLiteral("gridLayout_b"));
        widget_b = new QWidget(tab_b);
        widget_b->setObjectName(QStringLiteral("widget_b"));
        label_b_1 = new QLabel(widget_b);
        label_b_1->setObjectName(QStringLiteral("label_b_1"));
        label_b_1->setGeometry(QRect(9, 9, 68, 22));

        gridLayout_b->addWidget(widget_b, 0, 0, 1, 1);

        tabWidget->addTab(tab_b, QString());
        tab_c = new QWidget();
        tab_c->setObjectName(QStringLiteral("tab_c"));
        gridLayout_c = new QGridLayout(tab_c);
        gridLayout_c->setSpacing(6);
        gridLayout_c->setContentsMargins(11, 11, 11, 11);
        gridLayout_c->setObjectName(QStringLiteral("gridLayout_c"));
        widget_c = new QWidget(tab_c);
        widget_c->setObjectName(QStringLiteral("widget_c"));
        chartwidget = new QWidget(widget_c);
        chartwidget->setObjectName(QStringLiteral("chartwidget"));
        chartwidget->setGeometry(QRect(340, 50, 621, 571));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chartwidget->sizePolicy().hasHeightForWidth());
        chartwidget->setSizePolicy(sizePolicy);
        layoutWidget1 = new QWidget(widget_c);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 30, 131, 284));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_c_1 = new QLabel(layoutWidget1);
        label_c_1->setObjectName(QStringLiteral("label_c_1"));

        verticalLayout_2->addWidget(label_c_1);

        label_c_2 = new QLabel(layoutWidget1);
        label_c_2->setObjectName(QStringLiteral("label_c_2"));

        verticalLayout_2->addWidget(label_c_2);

        label_c_3 = new QLabel(layoutWidget1);
        label_c_3->setObjectName(QStringLiteral("label_c_3"));

        verticalLayout_2->addWidget(label_c_3);

        label_c_4 = new QLabel(layoutWidget1);
        label_c_4->setObjectName(QStringLiteral("label_c_4"));

        verticalLayout_2->addWidget(label_c_4);

        label_c_5 = new QLabel(layoutWidget1);
        label_c_5->setObjectName(QStringLiteral("label_c_5"));

        verticalLayout_2->addWidget(label_c_5);

        label_c_6 = new QLabel(layoutWidget1);
        label_c_6->setObjectName(QStringLiteral("label_c_6"));

        verticalLayout_2->addWidget(label_c_6);

        label_c_7 = new QLabel(layoutWidget1);
        label_c_7->setObjectName(QStringLiteral("label_c_7"));

        verticalLayout_2->addWidget(label_c_7);

        label_c_8 = new QLabel(layoutWidget1);
        label_c_8->setObjectName(QStringLiteral("label_c_8"));

        verticalLayout_2->addWidget(label_c_8);

        label_c_9 = new QLabel(layoutWidget1);
        label_c_9->setObjectName(QStringLiteral("label_c_9"));

        verticalLayout_2->addWidget(label_c_9);

        label_c_10 = new QLabel(layoutWidget1);
        label_c_10->setObjectName(QStringLiteral("label_c_10"));

        verticalLayout_2->addWidget(label_c_10);

        label_c_19 = new QLabel(layoutWidget1);
        label_c_19->setObjectName(QStringLiteral("label_c_19"));

        verticalLayout_2->addWidget(label_c_19);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_c_1 = new QLineEdit(layoutWidget1);
        lineEdit_c_1->setObjectName(QStringLiteral("lineEdit_c_1"));

        verticalLayout->addWidget(lineEdit_c_1);

        lineEdit_c_2 = new QLineEdit(layoutWidget1);
        lineEdit_c_2->setObjectName(QStringLiteral("lineEdit_c_2"));

        verticalLayout->addWidget(lineEdit_c_2);

        lineEdit_c_3 = new QLineEdit(layoutWidget1);
        lineEdit_c_3->setObjectName(QStringLiteral("lineEdit_c_3"));

        verticalLayout->addWidget(lineEdit_c_3);

        lineEdit_c_4 = new QLineEdit(layoutWidget1);
        lineEdit_c_4->setObjectName(QStringLiteral("lineEdit_c_4"));

        verticalLayout->addWidget(lineEdit_c_4);

        lineEdit_c_5 = new QLineEdit(layoutWidget1);
        lineEdit_c_5->setObjectName(QStringLiteral("lineEdit_c_5"));

        verticalLayout->addWidget(lineEdit_c_5);

        lineEdit_c_6 = new QLineEdit(layoutWidget1);
        lineEdit_c_6->setObjectName(QStringLiteral("lineEdit_c_6"));

        verticalLayout->addWidget(lineEdit_c_6);

        lineEdit_c_7 = new QLineEdit(layoutWidget1);
        lineEdit_c_7->setObjectName(QStringLiteral("lineEdit_c_7"));

        verticalLayout->addWidget(lineEdit_c_7);

        lineEdit_c_8 = new QLineEdit(layoutWidget1);
        lineEdit_c_8->setObjectName(QStringLiteral("lineEdit_c_8"));

        verticalLayout->addWidget(lineEdit_c_8);

        lineEdit_c_9 = new QLineEdit(layoutWidget1);
        lineEdit_c_9->setObjectName(QStringLiteral("lineEdit_c_9"));

        verticalLayout->addWidget(lineEdit_c_9);

        lineEdit_c_10 = new QLineEdit(layoutWidget1);
        lineEdit_c_10->setObjectName(QStringLiteral("lineEdit_c_10"));
        lineEdit_c_10->setStyleSheet(QStringLiteral("background-color: rgb(133, 133, 200);"));
        lineEdit_c_10->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_c_10);

        lineEdit_c_17 = new QLineEdit(layoutWidget1);
        lineEdit_c_17->setObjectName(QStringLiteral("lineEdit_c_17"));
        lineEdit_c_17->setStyleSheet(QStringLiteral("background-color: rgb(133, 133, 200);"));
        lineEdit_c_17->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_c_17);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget3 = new QWidget(widget_c);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(50, 610, 121, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_c_13 = new QLabel(layoutWidget3);
        label_c_13->setObjectName(QStringLiteral("label_c_13"));

        horizontalLayout_5->addWidget(label_c_13);

        lineEdit_c_13 = new QLineEdit(layoutWidget3);
        lineEdit_c_13->setObjectName(QStringLiteral("lineEdit_c_13"));
        lineEdit_c_13->setStyleSheet(QStringLiteral("background-color: rgb(133, 133, 200);"));
        lineEdit_c_13->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_c_13);

        layoutWidget = new QWidget(widget_c);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 460, 119, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_c_11 = new QLabel(layoutWidget);
        label_c_11->setObjectName(QStringLiteral("label_c_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_c_11->sizePolicy().hasHeightForWidth());
        label_c_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_c_11, 0, 0, 1, 1);

        label_c_12 = new QLabel(layoutWidget);
        label_c_12->setObjectName(QStringLiteral("label_c_12"));
        sizePolicy1.setHeightForWidth(label_c_12->sizePolicy().hasHeightForWidth());
        label_c_12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_c_12, 1, 0, 1, 1);

        lineEdit_c_12 = new QLineEdit(layoutWidget);
        lineEdit_c_12->setObjectName(QStringLiteral("lineEdit_c_12"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_c_12->sizePolicy().hasHeightForWidth());
        lineEdit_c_12->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_c_12, 1, 1, 1, 1);

        lineEdit_c_11 = new QLineEdit(layoutWidget);
        lineEdit_c_11->setObjectName(QStringLiteral("lineEdit_c_11"));
        sizePolicy2.setHeightForWidth(lineEdit_c_11->sizePolicy().hasHeightForWidth());
        lineEdit_c_11->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_c_11, 0, 1, 1, 1);

        pushButton_c_3 = new QPushButton(widget_c);
        pushButton_c_3->setObjectName(QStringLiteral("pushButton_c_3"));
        pushButton_c_3->setGeometry(QRect(50, 580, 131, 23));
        label_c_14 = new QLabel(widget_c);
        label_c_14->setObjectName(QStringLiteral("label_c_14"));
        label_c_14->setGeometry(QRect(50, 550, 181, 16));
        label_c_18 = new QLabel(widget_c);
        label_c_18->setObjectName(QStringLiteral("label_c_18"));
        label_c_18->setGeometry(QRect(190, 270, 88, 14));
        widget = new QWidget(widget_c);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 510, 271, 31));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_c_1 = new QPushButton(widget);
        pushButton_c_1->setObjectName(QStringLiteral("pushButton_c_1"));

        horizontalLayout_4->addWidget(pushButton_c_1);

        pushButton_c_2 = new QPushButton(widget);
        pushButton_c_2->setObjectName(QStringLiteral("pushButton_c_2"));

        horizontalLayout_4->addWidget(pushButton_c_2);

        widget1 = new QWidget(widget_c);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 320, 231, 128));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_c_16 = new QLabel(widget1);
        label_c_16->setObjectName(QStringLiteral("label_c_16"));

        verticalLayout_3->addWidget(label_c_16);

        label_c_15 = new QLabel(widget1);
        label_c_15->setObjectName(QStringLiteral("label_c_15"));

        verticalLayout_3->addWidget(label_c_15);

        label_c_17 = new QLabel(widget1);
        label_c_17->setObjectName(QStringLiteral("label_c_17"));

        verticalLayout_3->addWidget(label_c_17);

        label_c_20 = new QLabel(widget1);
        label_c_20->setObjectName(QStringLiteral("label_c_20"));

        verticalLayout_3->addWidget(label_c_20);

        label_c_21 = new QLabel(widget1);
        label_c_21->setObjectName(QStringLiteral("label_c_21"));

        verticalLayout_3->addWidget(label_c_21);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lineEdit_c_14 = new QLineEdit(widget1);
        lineEdit_c_14->setObjectName(QStringLiteral("lineEdit_c_14"));

        verticalLayout_5->addWidget(lineEdit_c_14);

        lineEdit_c_15 = new QLineEdit(widget1);
        lineEdit_c_15->setObjectName(QStringLiteral("lineEdit_c_15"));

        verticalLayout_5->addWidget(lineEdit_c_15);

        lineEdit_c_16 = new QLineEdit(widget1);
        lineEdit_c_16->setObjectName(QStringLiteral("lineEdit_c_16"));

        verticalLayout_5->addWidget(lineEdit_c_16);

        lineEdit_c_18 = new QLineEdit(widget1);
        lineEdit_c_18->setObjectName(QStringLiteral("lineEdit_c_18"));

        verticalLayout_5->addWidget(lineEdit_c_18);

        lineEdit_c_19 = new QLineEdit(widget1);
        lineEdit_c_19->setObjectName(QStringLiteral("lineEdit_c_19"));

        verticalLayout_5->addWidget(lineEdit_c_19);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout_c->addWidget(widget_c, 0, 1, 1, 1);

        tabWidget->addTab(tab_c, QString());
        tab_d = new QWidget();
        tab_d->setObjectName(QStringLiteral("tab_d"));
        gridLayout_d = new QGridLayout(tab_d);
        gridLayout_d->setSpacing(6);
        gridLayout_d->setContentsMargins(11, 11, 11, 11);
        gridLayout_d->setObjectName(QStringLiteral("gridLayout_d"));
        widget_d = new QWidget(tab_d);
        widget_d->setObjectName(QStringLiteral("widget_d"));
        label_d_1 = new QLabel(widget_d);
        label_d_1->setObjectName(QStringLiteral("label_d_1"));
        label_d_1->setGeometry(QRect(9, 9, 68, 22));

        gridLayout_d->addWidget(widget_d, 0, 0, 1, 1);

        tabWidget->addTab(tab_d, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1034, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_a_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\274\200\345\217\221ing</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_a), QApplication::translate("MainWindow", "\350\215\267\350\275\275", Q_NULLPTR));
        label_b_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\274\200\345\217\221ing</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_b), QApplication::translate("MainWindow", "\345\206\205\345\212\233", Q_NULLPTR));
        label_c_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\316\261<span style=\" vertical-align:sub;\">1</span></p></body></html>", Q_NULLPTR));
        label_c_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\316\276<span style=\" vertical-align:sub;\">b</span></p></body></html>", Q_NULLPTR));
        label_c_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\316\262<span style=\" vertical-align:sub;\">1</span></p></body></html>", Q_NULLPTR));
        label_c_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>f<span style=\" vertical-align:sub;\">c</span>\357\274\210N/mm<span style=\" vertical-align:super;\">2</span>\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>f<span style=\" vertical-align:sub;\">y</span>\357\274\210N/mm<span style=\" vertical-align:super;\">2</span>\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_6->setText(QApplication::translate("MainWindow", "b\357\274\210mm\357\274\211", Q_NULLPTR));
        label_c_7->setText(QApplication::translate("MainWindow", "h\357\274\210mm\357\274\211", Q_NULLPTR));
        label_c_8->setText(QApplication::translate("MainWindow", "as'\357\274\210mm\357\274\211", Q_NULLPTR));
        label_c_9->setText(QApplication::translate("MainWindow", "as\357\274\210mm\357\274\211", Q_NULLPTR));
        label_c_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>h<span style=\" vertical-align:sub;\">0</span>\357\274\210mm\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\316\276cy</p></body></html>", Q_NULLPTR));
        lineEdit_c_1->setText(QApplication::translate("MainWindow", "1.0", Q_NULLPTR));
        lineEdit_c_2->setText(QApplication::translate("MainWindow", "0.518", Q_NULLPTR));
        lineEdit_c_3->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        lineEdit_c_4->setText(QApplication::translate("MainWindow", "23.1", Q_NULLPTR));
        lineEdit_c_5->setText(QApplication::translate("MainWindow", "360", Q_NULLPTR));
        lineEdit_c_6->setText(QApplication::translate("MainWindow", "1200", Q_NULLPTR));
        lineEdit_c_7->setText(QApplication::translate("MainWindow", "350", Q_NULLPTR));
        lineEdit_c_8->setText(QApplication::translate("MainWindow", "55", Q_NULLPTR));
        lineEdit_c_9->setText(QApplication::translate("MainWindow", "55", Q_NULLPTR));
        lineEdit_c_10->setText(QApplication::translate("MainWindow", "295", Q_NULLPTR));
        lineEdit_c_17->setText(QApplication::translate("MainWindow", "1.082", Q_NULLPTR));
        label_c_13->setText(QApplication::translate("MainWindow", "\350\243\202\347\274\235\357\274\210mm\357\274\211", Q_NULLPTR));
        label_c_11->setText(QApplication::translate("MainWindow", "As'\357\274\210mm2\357\274\211", Q_NULLPTR));
        label_c_12->setText(QApplication::translate("MainWindow", "As\357\274\210mm2\357\274\211", Q_NULLPTR));
        lineEdit_c_12->setText(QApplication::translate("MainWindow", "5680", Q_NULLPTR));
        lineEdit_c_11->setText(QApplication::translate("MainWindow", "5680", Q_NULLPTR));
        pushButton_c_3->setText(QApplication::translate("MainWindow", "\351\252\214\347\256\227\350\243\202\347\274\235", Q_NULLPTR));
        label_c_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\357\274\210\345\217\257\346\224\271\345\217\230\346\225\260\346\215\256\347\273\230\345\210\266\345\244\232\346\235\241\347\233\270\345\205\263\346\233\262\347\272\277\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\273\230\345\233\276\346\227\266\350\207\252\345\212\250\350\256\241\347\256\227</p></body></html>", Q_NULLPTR));
        pushButton_c_1->setText(QApplication::translate("MainWindow", "\347\273\230\345\210\266M-N\345\233\276", Q_NULLPTR));
        pushButton_c_2->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\233\276\345\203\217", Q_NULLPTR));
        label_c_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\255\243\345\270\270\344\275\277\347\224\250\346\236\201\351\231\220\346\234\200\345\244\247\345\274\257\347\237\251\357\274\210kN.m\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\205\201\350\256\270\350\243\202\347\274\235\345\256\275\345\272\246\357\274\210mm\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\316\261cr</p></body></html>", Q_NULLPTR));
        label_c_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Es\357\274\210N/mm<span style=\" vertical-align:super;\">2</span>\357\274\211</p></body></html>", Q_NULLPTR));
        label_c_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p>ftk\357\274\210N/mm<span style=\" vertical-align:super;\">2</span>\357\274\211</p></body></html>", Q_NULLPTR));
        lineEdit_c_14->setText(QApplication::translate("MainWindow", "238.48", Q_NULLPTR));
        lineEdit_c_15->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        lineEdit_c_16->setText(QApplication::translate("MainWindow", "1.9", Q_NULLPTR));
        lineEdit_c_18->setText(QApplication::translate("MainWindow", "200000", Q_NULLPTR));
        lineEdit_c_19->setText(QApplication::translate("MainWindow", "2.64", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_c), QApplication::translate("MainWindow", "\351\205\215\347\255\213", Q_NULLPTR));
        label_d_1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\274\200\345\217\221ing</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_d), QApplication::translate("MainWindow", "\351\252\214\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
