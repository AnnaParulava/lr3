#include "lab3.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale( LC_ALL,"Russian" );

    int option = 0;

    Printer printer;

    do{
        cout <<"\n�������� ������� ��� �������� "<<endl;
        cout << "1 - ������"<<endl;
        cout << "2 - �������� ���� ������"<<endl;
        cout << "3 - ������ ���������� �����"<<endl;
        cout << "4 - �������� ������� ���������"<<endl;
        cout << "5 - �������� �������� �����������"<<endl;
        cout << "6 - �������� ������ ������"<<endl;
        cout << "0 - �����"<<endl;
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
                cout<<"������� ���������� �������: "<<endl;
                cin>>pcount;
                printer.setNumberOfCopies(pcount);
                cout<<"������� ���������� ������� "<<printer.getNumberOfCopies()<<endl;
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
