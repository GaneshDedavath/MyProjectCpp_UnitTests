#include <Arithemetics.h>

AritheMeticClass::AritheMeticClass(){
    cout << "[ARITHEMETIC & OPS]   AritheMeticClass Constructor called\n";
}
AritheMeticClass::~AritheMeticClass(){
    cout << "[ARITHEMETIC & OPS]   AritheMeticClass Desstructor called\n";
}
//Define all the arithemetic functions

void AritheMeticClass::addition(int x, int y){
    cout <<"[ARITHEMETIC & OPS]  Addition is: " << x+y << endl;
}

void AritheMeticClass::subtraction(int x, int y){
    cout << "[ARITHEMETIC & OPS]  Subtraction is: " << x-y << endl;
}

void AritheMeticClass::multiplication(int x, int y){
    cout << "[ARITHEMETIC & OPS]  Multiplication is: " << x*y << endl;

}

void AritheMeticClass::division(int x, int y){
    cout << "[ARITHEMETIC & OPS]  Division is: " << x/y << endl;
}

//Operator Overloading
Complex::Complex(){
    cout << "[ARITHEMETIC & OPS]  Operator overloading Default Constructor called:\n";
    real=0; imag=0;
}   
Complex::Complex(int x, int y){
    cout << "[ARITHEMETIC & OPS]  Operator overloading Constructor called:\n";
    real=x; imag=y;
}
Complex::~Complex(){
    cout << "[ARITHEMETIC & OPS]  Operator overloading Destructor called:\n";
}
//operator overloading
Complex Complex::operator +(Complex c){
    Complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
void Complex::Print(){
   cout << "[ARITHEMETIC & OPS]  The Sum of Objects is: " <<real<<"+ i"<<imag<<".\n";

}

void MainClass::Arithemetics(int x, int y){
    AritheMeticClass arith;
    arith.addition(x, y);
    arith.subtraction(x, y);
    arith.multiplication(x, y);
    arith.division(x, y);

    //Operator Overloading
    
    Complex c1(5, 6);
    Complex c2(10,12);
    Complex c3(45,50);
    Complex c0;
    c0=c1+c2;
    c0.Print();
    Complex c4;
    c4=c1+c2+c3;
    c4.Print();

}



