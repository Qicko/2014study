#ifndef DETECTOR_H
#define DETECTOR_H

#include <QTimer>

class TempDetector{
public:
    TempDetector(  const float, const float, const QString &  );
    ~TempDetector();

    //setBlock
    void setMinTemp( const float );
    void setMaxTemp( const float );
    void setTemp( const float );

    //getBlock
    float getMinTemp() const;
    float getMaxTemp() const;
    float getCurrentTemp() const;

    bool isNormal() const;

private /*functions*/:
    void setTimer( const QString & );
    bool readMonthStat( const QString & );

private:
    float curTemp;
    float minTemp, maxTemp;
    QTimer *timer;
};

#endif // DETECTOR_H
