#include "lab3.h"
#include <iostream>
#include <string>

using namespace std;

Printer::Printer(){
    color = false; //цвет
    copies = 0; //количество копий
    imageQuality = 150; //качество изображения
    doubleSidedPrinting = true; //односторонняя печать
}

Printer::Printer(bool ncolor, int ncopies, int nimageQuality, bool ndoubleSidedPrinting)
        :color(ncolor)
        ,copies(ncopies)
        ,imageQuality(nimageQuality)
        ,doubleSidedPrinting(ndoubleSidedPrinting)
{}

Printer::~Printer(){

}

void Printer::Print()
{
    if (getNumberOfCopies()==0)
    {
        cout<<"Печать не может быть выполнена. Задайте количество копий и/или другие свойства."<<endl;
    }
    else
    {
        cout<<"Печать выполнена!"<<endl;
        cout<<getNumberOfCopies()<<endl;
    }
}

void Printer::Show()
{
    cout<<"Текущие настройки"<<endl;
    cout<<"Цвет печати: "<<getColor()<<endl;
    cout<<"Качество изображения: "<<getImageQuality()<<endl;
    cout<<"Формат печати: "<<getDoubleSidedPrinting()<<endl;
    cout<<"Количество копий: "<<getNumberOfCopies()<<endl;
}

void Printer::ChangeDoubleSidedPrinting()
{
  int cc;
  do{
      cout<<"\nТекущеий формат печати: "<<getDoubleSidedPrinting()<<endl;
      cout << "Выберите 0 - для двусторонней или 1 - для односторонней, чтобы выйти нажмите 9: ";
      cin >> cc;
      switch (cc) {
        case 0:
            setDoubleSidedPrinting(0);
            break;
        case 1:
            setDoubleSidedPrinting(1);
            break;
        }
  } while (cc != 9);
}

void Printer::ChangeColor()
{
  int cc;
  do{
      cout<<"\nТекущеий цвет печати: "<<getColor()<<endl;
      cout << "Выберите 0 - для цветной или 1 - для черно-белой, чтобы выйти нажмите 9: ";
      cin >> cc;
      switch (cc) {
        case 0:
            setColor(0);
            break;
        case 1:
            setColor(1);
            break;
        }
  } while (cc != 9);
}

void Printer::ChangeQuality()
{
  char iq;
  do{
      cout<<"\nТекущее качество "<<getImageQuality()<<"dpi"<<endl;
      cout << "Выберите +(увеличить) или -(уменьшить), чтобы выйти нажмите 9: ";
      cin >> iq;
      switch (iq) {
        case '+':
            imageQuality+=50;
            break;
        case '-':
            imageQuality-=50;
            break;
        }
  } while (iq != '9');
}

void Printer::setDoubleSidedPrinting(bool doubleSidedPrinting)
{
    this -> doubleSidedPrinting = doubleSidedPrinting;
}

string Printer::getDoubleSidedPrinting()
{
    if(doubleSidedPrinting==1) return "односторонняя";
    else return "двусторонняя";
}

void Printer::setImageQuality(int imageQuality)
{
    this -> imageQuality = imageQuality;
}

int Printer::getImageQuality()
{
    return imageQuality;
}

void Printer::setColor(bool color)
{
  this -> color = color;
}

string Printer::getColor()
{
    if(color==1) return "ч/б";
    else return "цветная";

}

void Printer::setNumberOfCopies(int copies)
{
  this -> copies = copies;
}

int Printer::getNumberOfCopies()
{
    return copies;
}




