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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initData();

    QString filePath;

protected:
    void TriggerActionCar();
    void TriggerActionCalc();
    void connectDB();
    void factBox(const QString &fac);//厂家下拉框
    void brandBox(const QString &brand);
    void clickCancel();
    void clickSure();
    void actionCalc();
    void manaFacToBrandBox(const QString &fac);
    void pieNhis();

public slots:
    void spinBox(int num);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
