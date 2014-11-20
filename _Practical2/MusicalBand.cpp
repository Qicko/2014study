#include <iostream>
using std::cout;

#include "MusicalBand.h"

//constructorBlock
/**
 * @brief MusicalBand::MusicalBand - Конструктор класса на основе ФИО, музыкального инструмента и зарплаты
 * @param inFIO - Строка, содержащая ФИО
 * @param inMI - Строка, содержащая название музыкального инструмента
 * @param inSalary - Размер заработной платы музыканта
 */
MusicalBand::MusicalBand( string &inFIO, string &inMI, float inSalary ){
    setFIO( inFIO );
    setMusicalInstrument( inMI );
    setSalary( inSalary );
}

/**
 * @brief MusicalBand::MusicalBand Конструктор класса на основе ФИО, музыкального инструмента и зарплаты
 * @param name - Строка, содержащая имя музыканта
 * @param lastName - Строка, содержащая фамилию музыканта
 * @param patronymic - Строка, содержащая отчество музыканта
 * @param inMI - Строка, содержащая название музыкального инструмента
 * @param inSalary - Размер заработной платы музыканта
 */
MusicalBand::MusicalBand( string &name, string &lastName, string &patronymic, string &inMI, float inSalary ){
    setFIO( name, lastName, patronymic );
    setMusicalInstrument( inMI );
    setSalary( inSalary );
}

//setBlock
/**
 * @brief MusicalBand::setFIO - Метод для установки значения ФИО (на основе 1 строки)
 * @param inFIO - Строка, содержащая ФИО
 */
void MusicalBand::setFIO( string &inFIO ){
    this->FIO = inFIO;
}

/**
 * @brief MusicalBand::setFIO - Метод для установки значения ФИО (на основе 3 строк)
 * @param name - Строка, содержащая имя музыканта
 * @param lastName - Строка, содержащая фамилию музыканта
 * @param patronymic - Строка, содержащая отчество музыканта
 */
void MusicalBand::setFIO( string &name, string &lastName, string &patronymic ){
    this->FIO = lastName + ' ' + name + ' ' + patronymic;
}

/**
 * @brief MusicalBand::setMusicalInstrument - Метод для установки значения музыкального инструмента
 * @param inMI - Строка, содержащая название музыкального инструмента
 */
void MusicalBand::setMusicalInstrument( string &inMI ){
    this->musicalInstrument = inMI;
}

/**
 * @brief MusicalBand::setSalary - Метод для установки значения заработной платы музыканта
 * @param inSalary - Размер заработной платы музыканта
 */
void MusicalBand::setSalary( float inSalary ){
    this->salary = inSalary;
}

//getBlock
/**
 * @brief MusicalBand::getFIO - Метод, возвращающий ФИО музыканта
 * @return ФИО музыканта
 */
string MusicalBand::getFIO() const{
    return FIO;
}

/**
 * @brief MusicalBand::getMusicalInstrument - Метод, возвращающий музыкальный инструмент музыканта
 * @return Название музыкального инструмента
 */
string MusicalBand::getMusicalInstrument() const{
    return musicalInstrument;
}

/**
 * @brief MusicalBand::getSalary - Метод, возвращающий размер заработной платы музыканта
 * @return Размер заработной платы музыканта
 */
float MusicalBand::getSalary() const{
    return salary;
}

/**
 * @brief MusicalBand::getInfoAbout - Метод, выводящий всю информацию о музыканте
 */
void MusicalBand::getInfoAbout() const{
    std::cout << std::endl << this->FIO << " profile: " << std::endl
         << "   Musical instrument: " << this->musicalInstrument << std::endl
         << "   Salary: " << this->salary;
}
