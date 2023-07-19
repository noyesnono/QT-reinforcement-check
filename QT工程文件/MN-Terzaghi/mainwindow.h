#include <QDebug>
#include <QString>
#include <QtCharts>
#include <QLineSeries>
#include <QValueAxis>
#include <QGridLayout>
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);//主窗体的构造函数
    ~MainWindow();//主窗体的析构函数

    QGridLayout *chartlayout = new QGridLayout;//创建布局chartlayout用来安排画布chartview
    QChartView *chartview = new QChartView;//创建画布chartview用来展示曲线

    QValueAxis *axisx = new QValueAxis;//创建数轴x
    QValueAxis *axisy = new QValueAxis;//创建数轴y
    float xmax = 0;//数轴x的最大范围
    float ymax = 0;//数轴y的最大范围

private slots:
    void on_pushButton_c_1_clicked();//创建画图按钮的槽函数
    void on_pushButton_c_2_clicked();//创建清除图像按钮的槽函数
    void on_pushButton_c_3_clicked();//定义裂缝验算按钮的槽函数

private:
    Ui::MainWindow *ui;//创建主窗体
};

#endif // MAINWINDOW_H
