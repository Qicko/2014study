/** @file */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//#include <curses.h>

#include <string>
using std::string;

// stdlib (cstdlib) содержит в себе функции, занимающиеся выделением памяти,
//контроль процесса выполнения программы, преобразования типов и другие.
#include <cstdlib>
#include <vector>
using std::vector;

/*Custom includes*/
#include "MusicalBand.h"
#include "MainFunctions.h"

/**
 * @brief getMenu - Методы вывода пунктов меню
 * @param menuPoint - Пункт меню, выбранный в предыдущий раз
 * @param menuItems - Перечень пунктов меню
 * @param menuSize - Количество пунктов меню
 */
void getMenu( int menuPoint, string menuItems[], int menuSize ){
    clrscreen();
    for( int i = 0; i != menuSize; i++ ){
        if( i == menuPoint ){
            std::cout << "\033[31m" << menuItems[i] << endl;
        }else{
            std::cout << "\033[37m" << menuItems[i] << endl;
        }
    }
}

int main()
{
    const int menuSize = 7;
    string menuItems[ menuSize ] = { "Add", "Edit", "Delete", "Print all madafaka","Open", "Save", "Exit" };
    int cursor = 0;
    vector< MusicalBand* >mbData;
    do{
        getMenu( 0, menuItems, menuSize);
        cursor = cin.get();
        cursor -= '0';
        if( cursor >= 1 && cursor <= menuSize ){
            switch(cursor){
            case 1: executeAdd( mbData ); break;
            case 2: executeEdit( mbData ); break;
            case 3: executeDelete( mbData ); break;
            case 4: executePrint( mbData ); break;
            case 5: executeOpen( mbData ); break;
            case 6: executeSave( mbData ); break;
            case 7: goExit( mbData ); break;
            }
        };
    }while( cursor != menuSize );
    return 0;
}

