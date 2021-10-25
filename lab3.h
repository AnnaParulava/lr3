#pragma once
#include <string>
using namespace std;

class Printer{
public:
    Printer();
    Printer(bool, int, int, bool);
    ~Printer();

    string getColor();
    void setColor(bool);

    int getNumberOfCopies();
    void setNumberOfCopies(int);

    int getImageQuality();
    void setImageQuality(int);

    string getDoubleSidedPrinting();
    void setDoubleSidedPrinting(bool);

    void Print();
    void Show();
    void StartPrint();
    void ChangeQuality();
    void ChangeColor();
    void ChangeDoubleSidedPrinting();

private:
    bool color;                //цвет
    int copies;                //количество копий
    int imageQuality;          //качество изображения
    bool doubleSidedPrinting;  //двустороняя печать

};
