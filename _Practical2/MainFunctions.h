/** @file */
#ifndef MAINFUNCTIONS_H
#define MAINFUNCTIONS_H

#include "MusicalBand.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using std::vector;

#include <string>
using std::string;

/**
 * @brief clrscreen - Метод для очистки экрана
 */
void clrscreen(){
    if( system("CLS"))
        system("clear");
}

/**
 * @brief getPeopleList - Метод вывода списка людей и выбора человека
 * @param data - Вектор, содержащий информацию о всех музыкантах
 * @return Номер выбранного музыканта для удаления/изменения информации
 */
int getPeopleList( const vector< MusicalBand* > &data ){
    for( unsigned int i = 0; i != data.size(); i++ ){
        std::cout << '\n' << i+1 << ". " << data[i]->getFIO();
    }

    string tmpNum;
    int num;
    do{
        std::cout << "\nВведите номер музыканта, для изменения/удаления его данных: ";
        std::cin >> tmpNum;
    }while( !(atoi( tmpNum.c_str() ) > 0 && atoi( tmpNum.c_str() ) <= data.size()) );
    num = atoi( tmpNum.c_str() ) - 1;
    return num;
}

/**
 * @brief executeAdd - Метод добавления музыканта в список
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executeAdd( vector< MusicalBand* > &data ){
    string name = "", lastName = "", patronymic = "";
    string musicalInstrument = "";
    string salary;
    std::cout << "\n\t\tДобавление музыканта #" << data.size();
    do{
        std::cout << "\nВведите имя:";
        std::cin >> name;
    }while( name.empty() );
    do{
        std::cout << "\nВведите фамилию:";
        std::cin >> lastName;
    }while( lastName.empty() );
    std::cout << "\nВведите отчество:";
    std::cin >> patronymic;
    do{
        std::cout << "\nВведите музыкальный инструмент: ";
        std::cin >> musicalInstrument;
    }while( musicalInstrument.empty() );
    do{
        std::cout << "\nВведите заработную плату музыканта: ";
        std::cin >> salary;
    }while( atof( salary.c_str() ) <= 0 );
    data.push_back( new MusicalBand( name, lastName, patronymic, musicalInstrument, atof(salary.c_str())) );
}

/**
 * @brief executeEdit - Метод изменения информации о музыкантах в список
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executeEdit( vector< MusicalBand* > &data ){
    int num = getPeopleList( data );
    clrscreen();
    if( !data.empty() ){
	std::cout << "\nИзменяется информация для " << data[ num ]->getFIO();
	string name = "", lastName = "", patronymic = "";
	string musicalInstrument = "";
	string salary;
	do{
	   std::cout << "\nВведите новое имя: ";
	   std::cin >> name;
	}while( name.empty() );
	do{
	   std::cout << "\nВведите новую фамилию: ";
	   std::cin >> lastName;
	}while( lastName.empty() );
	std::cout << "\nВведите новое отчество: ";
	std::cin >> patronymic;
	do{
	   std::cout << "\nВведите музыкальный инструмент: ";
	   std::cin >> musicalInstrument;
	}while( musicalInstrument.empty() );
	do{
	   std::cout << "\nВведите заработную плату музыканта: ";
	   std::cin >> salary;
	}while( atof( salary.c_str() ) < 0 );
	data[ num ]->setFIO( name, lastName, patronymic );
	data[ num ]->setMusicalInstrument( musicalInstrument );
	data[ num ]->setSalary( atof( salary.c_str() ) );
   }else{
      std::cout << "\nСписок музыкальной группы пуст.";
      getchar();
   }
}

/**
 * @brief executeDelete - Метод удаления музыканта в список
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executeDelete( vector< MusicalBand* > &data ){
    if( !data.empty() ){
        char choise;
        bool endThis = false;
        do{
            int num = getPeopleList( data );
            std::cout << "\nВы уверены, что хотите удалить " << data[ num ]->getFIO() << '?';
            std::cout << "\nY/y - да, N/n - нет, M/m - возврат в меню";
            std::cin.clear();
            std::cin.sync();
            std::cin >> choise;
            switch( choise ){
            case 'y':
            case 'Y':
            {
                delete data[ num ];
                data.erase( data.begin()+num );
                endThis = true;
            }; break;
            case 'n':
            case 'N':
                clrscreen();  break;
            case 'm':
            case 'M':
                endThis = true;  break;
            default:
                clrscreen();  break;
            }
        }while( !endThis );
    }else{
        std::cout << "\nСписок музыкальной группы пуст.";
        getchar();
    }

}

/**
 * @brief executePrint - Метод вывода информации о музыкантах в список
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executePrint( const vector< MusicalBand* > &data ){
    clrscreen();
    if( !data.empty() ){
        std::cout << "\nСписок музыкантов: ";
        for( unsigned int i = 0; i != data.size(); i++ ){
            std::cout << "\nМузыкант #" << i << ". ";
            data[ i ]->getInfoAbout();
        };
    }else{
        std::cout << "\nСписок пуст.";
    }
    getchar();
    getchar();
}

/**
 * @brief FileExists - Метод проверки файла на существование
 * @param fname - Путь к файл/название файла
 * @return - True - файл существует, False - файл не существует
 */
bool FileExists(const char *fname){
    return std::ifstream(fname, std::ios_base::in ) != NULL;
}

/**
 * @brief executeOpen - Метод считывания музыкантов из файла в список
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executeOpen( vector< MusicalBand* > &data ){
    if( FileExists("Data.mband") ){
        int count = 0;
        int sizeFIO, sizeMI;
        char *buffer, *buffer2;
        float s;
        string t1 = "", t2 = "";
        std::ifstream in( "Data.mband", std::ios::binary | std::ios::in );
        in.read((char*)&count, sizeof(count));
        for( unsigned int i = 0; i != count; i++ ){
            in.read( (char*)&s, sizeof(s) );
            in.read( (char*)&sizeFIO, sizeof(sizeFIO) );
            buffer = new char[sizeFIO];
            in.read( buffer, sizeFIO );
            t1.append( buffer );
            delete buffer;
            in.read( (char*)&sizeMI, sizeof(sizeMI) );
            buffer2 = new char[sizeMI];
            in.read( buffer2, sizeMI );
            t2.append( buffer2 );
            delete[] buffer2;

            data.push_back( new MusicalBand( t1, t2, s ) );
            t1.clear();
            t2.clear();
        }
        in.close();
    };
}

/**
 * @brief executeSave - Метод сохранения музыкантов из списка в файл
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void executeSave( const vector< MusicalBand* > &data ){
    int count = data.size();
    int size;
    string tmpStr;
    float salary;
    std::ofstream out( "Data.mband", std::ios::binary | std::ios::out );
    out.write((char*)&count, sizeof(count));
    for( unsigned int i = 0; i != count; i++ ){
        salary = data[i]->getSalary();
        out.write( (char*)&salary, sizeof(salary) );
        tmpStr = data[i]->getFIO();
        size = tmpStr.size();
        out.write( (char*)&size, sizeof( size ) );
        out.write( tmpStr.c_str(), size );
        tmpStr = data[i]->getMusicalInstrument();
        tmpStr = data[i]->getMusicalInstrument();
        size = tmpStr.size();
        out.write( (char*)&size, sizeof( size ) );
        out.write( tmpStr.c_str(), size );
    }
    out.close();
}

/**
 * @brief goExit - Метод освобождения памяти перед выходом
 * @param data - Вектор, содержащий информацию о всех музыкантах
 */
void goExit( vector< MusicalBand* > &data ){
    for( unsigned int i = 0; i != data.size(); i++ ){
        delete data[ i ];
    };
    data.clear();
    clrscreen();
    std::cout << "Бро, я очистил память. Хорошего дня!" << std::endl;

}



#endif // MAINFUNCTIONS_H
