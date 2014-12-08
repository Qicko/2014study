#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDate>


#include <vector>
using std::vector;
#include <TempDetector.h>
#include <HumidityDetector.h>
#include <QListWidgetItem>
#include <QLabel>

struct Room{
    TempDetector *temp;
    HumidityDetector *humidity;
    bool isNTemp, isNHum, isError;
    QTimer *timer;
};

struct RoomSensors{
    QLabel *sensorNum;
    QLabel *sensorStatus;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*************/
    QTimer *system, *checking, *autoTimer;
    vector< Room > rooms;
    vector< RoomSensors > sensors;
    QListWidgetItem *pItem;
    bool on;
    /*************/

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_listWidget_clicked(const QModelIndex &index);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();
    /*********************************/

    void on_sysTimer();
    void on_checkTimer();
    void on_autoTimer();
    void getWarning( int, QString &);
    void getError( int, QString& );


    /*********************************/

    void on_checkBox_clicked();

    void on_menuExit_triggered();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_5_valueChanged(double arg1);

    void on_doubleSpinBox_6_valueChanged(double arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_allAuto_triggered();

    void on_allBySelf_triggered();

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

    void on_dial_actionTriggered(int action);

    void on_dial_valueChanged(int value);

    void on_dial_2_valueChanged(int value);

    void on_authors_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
