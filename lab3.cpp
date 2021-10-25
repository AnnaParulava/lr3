#include "lab3.h"
#include <iostream>
#include <string>

using namespace std;

Printer::Printer(){
    color = false; //����
    copies = 0; //���������� �����
    imageQuality = 150; //�������� �����������
    doubleSidedPrinting = true; //������������� ������
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
        cout<<"������ �� ����� ���� ���������. ������� ���������� ����� �/��� ������ ��������."<<endl;
    }
    else
    {
        cout<<"������ ���������!"<<endl;
        cout<<getNumberOfCopies()<<endl;
    }
}

void Printer::Show()
{
    cout<<"������� ���������"<<endl;
    cout<<"���� ������: "<<getColor()<<endl;
    cout<<"�������� �����������: "<<getImageQuality()<<endl;
    cout<<"������ ������: "<<getDoubleSidedPrinting()<<endl;
    cout<<"���������� �����: "<<getNumberOfCopies()<<endl;
}

void Printer::ChangeDoubleSidedPrinting()
{
  int cc;
  do{
      cout<<"\n�������� ������ ������: "<<getDoubleSidedPrinting()<<endl;
      cout << "�������� 0 - ��� ������������ ��� 1 - ��� �������������, ����� ����� ������� 9: ";
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
      cout<<"\n�������� ���� ������: "<<getColor()<<endl;
      cout << "�������� 0 - ��� ������� ��� 1 - ��� �����-�����, ����� ����� ������� 9: ";
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
      cout<<"\n������� �������� "<<getImageQuality()<<"dpi"<<endl;
      cout << "�������� +(���������) ��� -(���������), ����� ����� ������� 9: ";
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
    if(doubleSidedPrinting==1) return "�������������";
    else return "������������";
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
    if(color==1) return "�/�";
    else return "�������";

}

void Printer::setNumberOfCopies(int copies)
{
  this -> copies = copies;
}

int Printer::getNumberOfCopies()
{
    return copies;
}




