#ifndef ARITHEMETICS_H
#define ARITHEMETICS_H

#include <My_App.h>
class AritheMeticClass : public MainClass{

    public:
     //Function Declarations
     int addition(int x, int y);

     int subtraction(int x, int y);
     
     int multiplication(int x, int y);
     
     int division(int x, int y);

     AritheMeticClass();
     ~AritheMeticClass();


};
class Complex{
    private:
    int real, imag;
    public:
    void Print();
    Complex();
    Complex(int x, int y);
    ~Complex();
    Complex operator +(Complex c);
};
   
#endif





