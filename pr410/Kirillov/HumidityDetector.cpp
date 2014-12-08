#include "HumidityDetector.h"

HumidityDetector::HumidityDetector( const float min, const float max, const QString &fileName ){
    this->setMinHumidity( min );
    this->setMaxHumidity( max );
    this->setTimer( fileName );
}

void HumidityDetector::setMinHumidity( const float min ){
    this->minHumidity = min;//(min > maxHumidity)? maxHumidity - 20 : min ;
}

void HumidityDetector::setMaxHumidity( const float max ){
    this->maxHumidity = max;//( max > this->minHumidity )? minHumidity + 20 : max;
}

void HumidityDetector::setHumidity(const float cHumidity){
    this->curHumidity = cHumidity;
}

float HumidityDetector::getMinHumidity() const{
    return this->minHumidity;
}

float HumidityDetector::getMaxHumidity() const{
    return this->maxHumidity;
}

float HumidityDetector::getCurrentHumidity() const{
    return this->curHumidity;
}

bool HumidityDetector::isNormal() const{
    return ( this->curHumidity>=this->minHumidity && this->curHumidity <= this->maxHumidity )? true : false ;
}

/*private functions*/
void HumidityDetector::setTimer( const QString &fileName ){
    this->timer = new QTimer();
    if( readMonthStat(fileName) ){
        timer->start( 600000 );
    }else{
        timer->start( 60000 );
    }
}

bool HumidityDetector::readMonthStat( const QString & ){

    return true;
}
