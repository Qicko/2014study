#ifndef MUSICALBAND_H
#define MUSICALBAND_H

#include <string>
using std::string;

#include <fstream>
using std::fstream;

/**
 * @brief The MusicalBand class - Класс, содержащий информацию об одном музыканте
 */
class MusicalBand{
public:
    //constructorBlock
    MusicalBand( string &, string &, float );
    MusicalBand( string &, string &, string &, string &, float );

    //destructorBlock
    ~MusicalBand(){}

    //setBlock
    void setFIO( string &fio );
    void setFIO( string &, string &, string & );
    void setMusicalInstrument( string & );
    void setSalary( float );

    //getBlock
    string getFIO() const;
    string getMusicalInstrument() const;
    float getSalary() const;
    void getInfoAbout() const;

private:
    string FIO;
    string musicalInstrument;
    float salary;
};

#endif // MUSICALBAND_H
