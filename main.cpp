#include "lab3.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale( LC_ALL,"Russian" );

    int option = 0;

    Printer printer;

    do{
        cout <<"\nВыберите команду для принтера "<<endl;
        cout << "1 - Печать"<<endl;
        cout << "2 - Изменить цвет печати"<<endl;
        cout << "3 - Задать количество копий"<<endl;
        cout << "4 - Показать текущие настройки"<<endl;
        cout << "5 - Изменить качество изображения"<<endl;
        cout << "6 - Изменить формат печати"<<endl;
        cout << "0 - Выход"<<endl;
        cout << endl;

        cin >> option;

        switch (option) {
            case 1:
                printer.Print();
                break;
            case 2:
                printer.ChangeColor();
                break;
            case 3:
                int pcount;
                cout<<"Введите количество страниц: "<<endl;
                cin>>pcount;
                printer.setNumberOfCopies(pcount);
                cout<<"Текущее количество страниц "<<printer.getNumberOfCopies()<<endl;
                break;
            case 4:
                printer.Show();
                break;
            case 5:
                printer.ChangeQuality();
                break;
            case 6:
                printer.ChangeDoubleSidedPrinting();
                break;

        }
    } while (option != 0);

    return 0;
}
