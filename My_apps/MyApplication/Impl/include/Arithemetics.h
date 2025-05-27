#ifndef ARITHEMETICS_H
#define ARITHEMETICS_H

#include <My_App.h>
class AritheMeticClass : public MainClass{

    public:
     //Function Declarations
     void addition(int x, int y);

     void subtraction(int x, int y);
     
     void multiplication(int x, int y);
     
     void division(int x, int y);

     AritheMeticClass();
     ~AritheMeticClass();


};
class Complex{
    private:
    int real, imag;
    public:
    int sum(int a, int b);
    void Print();
    Complex();
    Complex(int x, int y);
    ~Complex();
    Complex operator +(Complex c);
};
   
#endif





