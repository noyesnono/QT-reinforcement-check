#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);//展示主窗体

    ui->chartwidget->setLayout(chartlayout);//把布局baselayout放在空白构件chartwidget上
    chartlayout->addWidget(chartview, 1, 0);//把画布chartview放在网格布局baselayout中

    chartview->chart()->setTheme(QChart::ChartThemeBrownSand);//设置图表主题
    chartview->chart()->setTitle("Nu-Mu相关曲线");//设置图表名称

    axisx->setTitleText("M");//设置数轴x的名称为M
    axisy->setTitleText("N");//数轴y的名称为N
}



MainWindow::~MainWindow()
{
    delete ui;//析构函数，删除主窗体
}

void MainWindow::on_pushButton_c_1_clicked()//画图按钮的槽函数
{
    QString str;//数据传输和转化
    str = ui->lineEdit_c_1->text();//将文本框中的数字字符传递给str
    float alpha_1 = str.toFloat();//把str中的字符转化为浮点型数字传递给变量
    str = ui->lineEdit_c_2->text();
    float xi_b = str.toFloat();
    str = ui->lineEdit_c_3->text();
    float beta_1 = str.toFloat();
    str = ui->lineEdit_c_4->text();
    float fc = str.toFloat();
    str = ui->lineEdit_c_5->text();
    float fy = str.toFloat();
    str = ui->lineEdit_c_6->text();
    float b = str.toFloat();
    str = ui->lineEdit_c_7->text();
    float h = str.toFloat();
    str = ui->lineEdit_c_8->text();
    float as1 = str.toFloat();//as1是受压钢筋到混凝土表面的距离as'
    str = ui->lineEdit_c_9->text();
    float as2 = str.toFloat();//as2是受拉钢筋到混凝土表面的距离

    float h0 = h - as2;//h0设为只读，通过h0=h-as计算
    ui->lineEdit_c_10->setText(str.sprintf("%.0f", h0));
    float xicy = 2*beta_1 - xi_b;//xicy设为只读，通过xicy=2*beta1-xib计算
    ui->lineEdit_c_17->setText(str.sprintf("%.3f", xicy));

    str = ui->lineEdit_c_11->text(); //As1是受压钢筋的面积As'
    float As1 = str.toFloat();
    str = ui->lineEdit_c_12->text();//As2是受拉钢筋的面积As
    float As2 = str.toFloat();
    
    float Nmax = 0.9*1.0*(fc*b*h+fy*(As1+As2))*0.001;//计算N最大值，即轴心受压时
    float Ndiv = alpha_1*fc*b*xi_b*h0*0.001;//计算大偏心和小偏心分界处的N
    float N0 = alpha_1*fc*b*(2*as1)*0.001;//计算按大偏心计算x=2as'时的N
    float M0 = fy*As2*(h0-as1)*0.000001;//计算x<2as'时的M

    QSplineSeries *series1 = new QSplineSeries;//添加曲线数据系列
    QString str1 = ui->lineEdit_c_11->text();
    QString str2 = ui->lineEdit_c_12->text();
    series1->setName("As'"+str1+"As"+str2);//获取钢筋面积信息来设置曲线的名称

    series1->append(M0, 0);//添加x<2as'时的点

    for(int i = qRound(N0); i<qFloor(Ndiv); i=i+5)//添加大偏心曲线的点
    {
        series1->append(- (i*i)/(2*alpha_1*fc*b) + 0.5*h*i*0.001 + fy*As1*(h0-as1)*0.000001, i);
    }

    float xi;//借助ξ使公式简洁清晰
    for(int i=qCeil(Ndiv); i<qFloor(Nmax); i=i+5)//添加小偏心曲线的点
    {
        xi = ((beta_1-xi_b)*i*1000 + xi_b*fy*As1) / (alpha_1*fc*b*h0*(beta_1-xi_b) + fy*As1);
        series1->append(alpha_1*fc*b*h0*h0*(xi-0.5*xi*xi)*0.000001 - (0.5*h-as2)*i*0.001 + fy*As1*(h0-as1)*0.000001, i);
    }

    series1->append(0, Nmax);//添加轴心受压时的点


    int i = qFloor(Ndiv);
    float Mmax = - (i*i)/(2*alpha_1*fc*b) + 0.5*h*i*0.001 + fy*As1*(h0-as1)*0.000001;
    if(Mmax>xmax)
        xmax=Mmax;//确定数轴x最大范围
    if(Nmax>ymax)
        ymax=Nmax;//确定数轴y最大范围

    chartview->chart()->addSeries(series1);//把数据系列添加到图表中
    axisx->setRange(0,qRound(xmax/100+1)*100);//数轴x的范围
    axisy->setRange(0,qRound(ymax/1000+1)*1000);//数轴y的范围
    axisx->setTickCount(qRound(xmax/100+1)+1);//数轴x的间隔划分
    axisy->setTickCount(qRound(ymax/1000+1)+1);//数轴y的间隔划分
    chartview->chart()->setAxisX(axisx, series1);//把数轴x放在图的x轴上
    chartview->chart()->setAxisY(axisy, series1);//把数轴y放在图的y轴上
}



void MainWindow::on_pushButton_c_2_clicked()//清空图像按钮的槽函数
{
    chartview->chart()->removeAllSeries();//清空所有Series
}

void MainWindow::on_pushButton_c_3_clicked()//裂缝验算的槽函数
{
    QString str;//数据传输和转化
    str = ui->lineEdit_c_6->text();
    float b = str.toFloat();
    str = ui->lineEdit_c_7->text();
    float h = str.toFloat();
    str = ui->lineEdit_c_9->text();
    float as2 = str.toFloat();
    str = ui->lineEdit_c_12->text();
    float As2 = str.toFloat();
    str = ui->lineEdit_c_14->text();
    float Mq = str.toFloat();
    str = ui->lineEdit_c_16->text();
    float alpha_cr = str.toFloat();
    str = ui->lineEdit_c_19->text();
    float ftk = str.toFloat();
    str = ui->lineEdit_c_18->text();
    float Es = str.toFloat();

    float rho_te = As2/(0.5*b*h);//计算
    float sigma_s = Mq*1000000/(0.87*(h-as2)*As2);
    float deq = sqrt(As2/8*4/3.1416);
    float cs = as2 - deq/2;
    float psi = 1.1 - 0.65*ftk/(rho_te*sigma_s);
    float wmax = alpha_cr*psi*sigma_s/Es*(1.9*cs + 0.08*deq/rho_te);

    ui->lineEdit_c_13->setText(str.sprintf("%.3f", wmax));//返回数据，显示结果
}
