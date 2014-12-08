#include "TempDetector.h"

TempDetector::TempDetector( const float min, const float max, const QString &fileName ){
    this->setMinTemp( min );
    this->setMaxTemp( max );
    this->setTimer( fileName );
}


void TempDetector::setMinTemp( const float min ){
    this->minTemp = (min < 0)? 15 : (min > 20)? 15 : min ;
}

void TempDetector::setMaxTemp( const float max ){
    this->maxTemp = ( max > this->minTemp )? ((max > 32)? 32 : max) : 32;
}

void TempDetector::setTemp(const float cTemp){
    this->curTemp = cTemp;
}

float TempDetector::getMinTemp() const{
    return this->minTemp;
}

float TempDetector::getMaxTemp() const{
    return this->maxTemp;
}

float TempDetector::getCurrentTemp() const{
    return this->curTemp;
}

bool TempDetector::isNormal() const{
    return ( this->curTemp>=this->minTemp && this->curTemp <= this->maxTemp )? true : false ;
}

/*private functions*/
void TempDetector::setTimer( const QString &fileName ){
    this->timer = new QTimer();
    if( readMonthStat(fileName) ){
        timer->start( 600000 );
    }else{
        timer->start( 60000 );
    }
}

bool TempDetector::readMonthStat( const QString & ){

    return true;
}
