#ifndef HUMIDITYDETECTOR_H
#define HUMIDITYDETECTOR_H

#include <QTimer>

class HumidityDetector
{
public:
    HumidityDetector( const float, const float, const QString & );
    ~HumidityDetector();

    //setBlock
    void setMinHumidity( const float );
    void setMaxHumidity( const float );
    void setHumidity( const float );

    //getBlock
    float getMinHumidity() const;
    float getMaxHumidity() const;
    float getCurrentHumidity() const;

    bool isNormal() const;

private /*functions*/:
    void setTimer( const QString & );
    bool readMonthStat( const QString & );

private:
    float curHumidity;
    float minHumidity, maxHumidity;
    QTimer *timer;
};

#endif // HUMIDITYDETECTOR_H
