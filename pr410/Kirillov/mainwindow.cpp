#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <time.h>
#include <fstream>

#include <QPixmap>
#include <stdio.h>
#include "ui_about.h"
#include "about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->system = new QTimer( this );
    this->checking = new QTimer( this );
	this->autoTimer = new QTimer( this );
    connect( system, SIGNAL(timeout()), this, SLOT(on_sysTimer()) );
    connect( checking, SIGNAL(timeout()), this, SLOT(on_checkTimer()) );
	connect( autoTimer, SIGNAL(timeout()), this, SLOT(on_autoTimer()) );
    int xPos = 15, yPos = 650;
    for( int i = 0; i != 10; i++ ){
        RoomSensors tmp;
        tmp.sensorNum = new QLabel(this);
        tmp.sensorNum->setText( QString::number( i + 1 ) );
        tmp.sensorNum->setGeometry( xPos, yPos, 20, 20);
        tmp.sensorStatus = new QLabel(this);
        tmp.sensorStatus->setPixmap( QPixmap("./off.png"));
        if( i == 9 )
            xPos += 5;
        tmp.sensorStatus->setGeometry( xPos - 5, yPos + 20, 20, 20);
        this->sensors.push_back( tmp );
        xPos += 30;
    }
    this->on = false;
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index){

}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index){

}

void MainWindow::on_autoTimer(){
	srand( time(0) );
    for( int i = 0; i != 10; i++){
        ui->spinBox->setValue( i+1 );
        double random = rand()*100;
        if( random <= 5 ){
            this->rooms[i].temp->setTemp( ui->doubleSpinBox_5->value() - 0.5 );
            this->rooms[i].humidity->setHumidity( ui->doubleSpinBox_6->value() + 1 );
        }else{
            if( random == 51 ){
                random = rand();
                ( random < 0.5 )?
                    this->rooms[i].temp->setTemp( ui->doubleSpinBox->value() - ( rand() * ui->doubleSpinBox->value() ) ),
                    this->rooms[i].humidity->setHumidity( ui->doubleSpinBox_3->value() + ( rand() * ui->doubleSpinBox_3->value() ) )
                    :
                    this->rooms[i].temp->setTemp( ui->doubleSpinBox_2->value() + ( rand() * ui->doubleSpinBox_2->value() ) ),
                    this->rooms[i].humidity->setHumidity( ui->doubleSpinBox_4->value() - ( rand() * ui->doubleSpinBox_4->value() ) );
            }else{
                if( random >= 96 ){
                    this->rooms[i].temp->setTemp( ui->doubleSpinBox_5->value() + 0.5 );
                    this->rooms[i].humidity->setHumidity( ui->doubleSpinBox_6->value() - 1 );
                };
            };
        };
    };
}

void MainWindow::getError( int num, QString &error ){
    QString cRoom =  "[ERROR]Room" + QString::number(num+1) + error;
    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] " + cRoom );
    pItem->setForeground(Qt::red);   // sets red text
    pItem->setBackground(Qt::white); // sets green background
    ui->listWidget_2->addItem(pItem);
    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] " + cRoom );
    pItem->setForeground(Qt::red);   // sets red text
    pItem->setBackground(Qt::white); // sets green background
    ui->listWidget->addItem(pItem);
    ui->listWidget_2->setCurrentRow( ui->listWidget_2->count() - 1 );
    ui->listWidget->setCurrentRow( ui->listWidget->count() - 1 );
    this->sensors[num].sensorStatus->setPixmap(QPixmap("./error.png"));
}

void MainWindow::getWarning( int num, QString &warning ){
    QString cRoom =  "[Warning]Room" + QString::number(num+1) + warning;
    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] " + cRoom );
    pItem->setForeground(Qt::darkYellow);
    pItem->setBackground(Qt::white); // sets green background
    ui->listWidget_2->addItem(pItem);
    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] " + cRoom );
    pItem->setForeground(Qt::darkYellow);
    pItem->setBackground(Qt::white); // sets green background
    ui->listWidget->addItem(pItem);
    ui->listWidget_2->setCurrentRow( ui->listWidget_2->count() - 1 );
    ui->listWidget->setCurrentRow( ui->listWidget->count() - 1 );
    this->sensors[num].sensorStatus->setPixmap(QPixmap("./warning.png"));
}

void MainWindow::on_checkTimer(){
    QString cRoom;
    bool f, bT, bH;
    float cT, cH;
    QString scT, scH;
    for( int i = 0; i != 10; i++ ){
        
        bT = this->rooms[i].temp->isNormal();
        bH = this->rooms[i].humidity->isNormal();
        f = bT&&bH;
        if( f ){
            if( this->rooms[i].isError ){
                this->rooms[i].isNTemp = true;
                this->rooms[i].isNHum = true;
                this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] Room " + QString::number(i+1) + " ERROR is fixed." );
                pItem->setForeground(Qt::green);   // sets red text
                pItem->setBackground(Qt::white); // sets green background
                ui->listWidget_2->addItem(pItem);
                ui->listWidget_2->setCurrentRow( ui->listWidget_2->count() - 1 );
                this->rooms[i].isError = false;
                this->sensors[i].sensorStatus->setPixmap(QPixmap("./on.png"));
            }else{
                if( !this->rooms[i].isNTemp && bT){
                    this->rooms[i].isNTemp = true;
                    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] Room " + QString::number(i+1) + " Temp WARNING is fixed." );
                    pItem->setForeground(Qt::green);   // sets red text
                    pItem->setBackground(Qt::white); // sets green background
                    ui->listWidget_2->addItem(pItem);
                    ui->listWidget_2->setCurrentRow( ui->listWidget_2->count() - 1 );
                    this->rooms[i].isError = false;
                    if(this->rooms[i].isNHum)
                        this->sensors[i].sensorStatus->setPixmap(QPixmap("./on.png"));
                };
                if( !this->rooms[i].isNHum && bH){
                    this->rooms[i].isNHum = true;
                    this->pItem =new QListWidgetItem( "[" + QTime::currentTime().toString() + "] Room " + QString::number(i+1) + " Humility WARNING is fixed." );
                    pItem->setForeground(Qt::green);   // sets red text
                    pItem->setBackground(Qt::white); // sets green background
                    ui->listWidget_2->addItem(pItem);
                    ui->listWidget_2->setCurrentRow( ui->listWidget_2->count() - 1 );
                    this->rooms[i].isError = false;
                    if(this->rooms[i].isNTemp)
                        this->sensors[i].sensorStatus->setPixmap(QPixmap("./on.png"));
                }
            }
        }else{
            if( !bT&!bH ){
                if( !this->rooms[i].isError ){
                    this->rooms[i].isError = true;
                    cT = this->rooms[i].temp->getCurrentTemp();
                    scT = " Temperature is too low/high = " + QString::number( cT ) + ";";
                    cH = this->rooms[i].humidity->getCurrentHumidity();
                    scH = " Humility is too low/high = " + QString::number( cH ) + ";" ;
                    scT += "; " + scH;
                    getError( i, scT );
                }
            }else{
                if( !bT ){
                    if( this->rooms[i].isNTemp ){
                        this->rooms[i].isNTemp = false;
                        cT = this->rooms[i].temp->getCurrentTemp();
                        scT = " Temperature is too low/high = " + QString::number( cT ) + ";";
                        getWarning( i, scT );
                    }
                };
                if( !bH ){
                    if( this->rooms[i].isNHum ){
                        this->rooms[i].isNHum = false;
                        cH = this->rooms[i].humidity->getCurrentHumidity();
                        scH = " Humility is too low/high = " + QString::number( cH ) + ";" ;
                        getWarning( i, scH);
                    }
                };
            };
        };
    };
}

void MainWindow::on_sysTimer(){
    QString cRoom;
    bool f;
    float cT, cH;
    QString scT, scH, scOK;
    for( int i = 0; i != 10; i++ ){
        cT = this->rooms[i].temp->getCurrentTemp();
        cH = this->rooms[i].humidity->getCurrentHumidity();
        scT = QString::number( cT );
        scH = QString::number( cH );
        f = this->rooms[i].temp->isNormal()&&
            this->rooms[i].humidity->isNormal();
        scOK = ( f )? "OK" : "ERROR";
        cRoom = " Temperature = " + scT +
                "; Humidity = " + scH +
                "; Status: " + scOK;
        ui->listWidget->addItem( "[" + QTime::currentTime().toString() + "] Room " + QString::number(i+1) + cRoom  );
    }
    ui->listWidget->setCurrentRow( ui->listWidget->count() - 1 );
}

bool readMonthStat( const QString &fileName ){
    std::ifstream inFile;
    QString fileLine = "";
    bool result = false;
    inFile.open( fileName );
    while( inFile ){
        inFile >> fileLine;
        result = result && checkLine( fileLine );
        fileLine.clear();
    };
    return result;
}

void MainWindow::on_menuExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1){
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].temp->setMinTemp( arg1 );
    }
    ui->doubleSpinBox_2->setMinimum( arg1 );
    if( ui->doubleSpinBox_2->value() < ui->doubleSpinBox_2->minimum() )
        ui->doubleSpinBox_2->setValue( ui->doubleSpinBox_2->minimum() );
}

void MainWindow::on_doubleSpinBox_5_valueChanged(double arg1)
{
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].temp->setTemp( arg1 );
    }
    ui->dial->setValue( arg1 );
    //ui->doubleSpinBox->setMaximum( arg1 );
}

void MainWindow::on_doubleSpinBox_6_valueChanged(double arg1)
{
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].humidity->setHumidity( arg1 );
    }
    ui->dial_2->setValue( arg1 );
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if( !this->rooms.empty() ){
        ui->doubleSpinBox_5->setValue( this->rooms[ arg1 - 1 ].temp->getCurrentTemp() );
        ui->doubleSpinBox_6->setValue( this->rooms[ arg1 - 1 ].humidity->getCurrentHumidity() );
    }
}

void MainWindow::on_pushButton_clicked()
{
    QTime cTime = QTime::currentTime();
    bool can = false;
    /****/
    time_t rawtime;
    tm * timeinfo;
    time( &rawtime );
    timeinfo = localtime ( &rawtime );
    /****/
    int today = timeinfo->tm_wday;
    if( (cTime.hour() >= 8 )&&( cTime.hour() <= 20)&&( today != 0 ) ){
        if( cTime.hour() == 8 ){
            if( cTime.minute() < 30 ){
                can = false;
            }else{
                can = true;
            }
        }else{
            can = true;
        };
        if( cTime.hour() == 20 ){
            if( cTime.minute() != 00 ){
                can = false;
            }else{
                can = true;
            }
        }else{
            can = true;
        };
    };
    if( can ){
        if( !this->on ){
            Room tempRoom;
            float t = ui->doubleSpinBox_5->value(), h = ui->doubleSpinBox_6->value();
            this->rooms.clear();
            for( int i = 0; i != 10; i++){
                tempRoom.temp = new TempDetector( ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value(), "monthStat"+i );
                tempRoom.humidity = new HumidityDetector( ui->doubleSpinBox_3->value(), ui->doubleSpinBox_4->value() );
                tempRoom.timer = new QTimer( this );
                if( readMonthStat( "monthStat"+i ) ){
                    tempRoom.timer->start( 600000 );
                }else{
                    tempRoom.timer->start( 60000 );
                }
                this->rooms.push_back( tempRoom );
                rooms[i].temp->setTemp( t );
                rooms[i].humidity->setHumidity( h );
                rooms[i].isNTemp = true;
                rooms[i].isNHum = true;
                rooms[i].isError = false;
            }
            checking->start( 100 );
            system->start( 60000 );
            this->on = true;
            ui->pushButton->setIcon( QIcon("./syson"));
            ui->listWidget->addItem( "Система активирована." );
            for( int i = 0; i != 10; i++ ){
                this->sensors[i].sensorStatus->setPixmap(QPixmap("./on.png"));
            }
        }else{
            checking->stop();
            system->stop();
            this->on = false;
            ui->pushButton->setIcon( QIcon("./sysoff"));
            ui->listWidget->addItem( "Система остановлена." );
            for( int i = 0; i != 10; i++ ){
                this->sensors[i].sensorStatus->setPixmap(QPixmap("./off.png"));
            }
        }
    }else{
        ui->listWidget->addItem( "Система может работать только с 8:30 до 20:00" );
        this->on = false;
        ui->pushButton->setIcon( QIcon("./sysoff"));
    }
}

void MainWindow::on_allAuto_triggered()
{
    ui->doubleSpinBox_5->setEnabled( false );
    ui->doubleSpinBox_6->setEnabled( false );
    ui->dial->setEnabled( false );
    ui->dial_2->setEnabled( false );
    autoTimer->start( 5000 );
}

void MainWindow::on_allBySelf_triggered()
{
    ui->doubleSpinBox_5->setEnabled( true );
    ui->doubleSpinBox_6->setEnabled( true );
    ui->dial->setEnabled( true );
    ui->dial_2->setEnabled( true );
    autoTimer->stop();
}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].temp->setMaxTemp( arg1 );
    }
    ui->doubleSpinBox->setMaximum( arg1 );
    if( ui->doubleSpinBox->value() > ui->doubleSpinBox->maximum() )
        ui->doubleSpinBox->setValue( ui->doubleSpinBox->maximum() );
}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].humidity->setMinHumidity( arg1 );
    }
    ui->doubleSpinBox_4->setMinimum( arg1 );
    if( ui->doubleSpinBox_4->value() < ui->doubleSpinBox_4->minimum() )
        ui->doubleSpinBox_4->setValue( ui->doubleSpinBox_4->minimum() );
}

void MainWindow::on_doubleSpinBox_4_valueChanged(double arg1)
{
    if( !this->rooms.empty() ){
        this->rooms[ ui->spinBox->value() - 1 ].humidity->setMaxHumidity( arg1 );
    }
    ui->doubleSpinBox_3->setMaximum( arg1 );
    if( ui->doubleSpinBox_3->value() > ui->doubleSpinBox_3->maximum() )
        ui->doubleSpinBox_3->setValue( ui->doubleSpinBox_3->maximum() );
}

void MainWindow::on_dial_actionTriggered(int action)
{
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->doubleSpinBox_5->setValue( value );
}

void MainWindow::on_dial_2_valueChanged(int value)
{
    ui->doubleSpinBox_6->setValue( value );
}

void MainWindow::on_authors_triggered()
{
   About *aboutF = new About();
   aboutF->exec();
}
