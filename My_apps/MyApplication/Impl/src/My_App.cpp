#include "My_App.h"
#include "chrono"
#include"oops.h"

//constructor Implementation
MainClass::MainClass(){
    cout << "[BASE CONSTRUCTOR]  MainClass Constructor called \n";

}
//Destructor Implementation
MainClass::~MainClass(){
    cout << "[BASE DESTRUCTOR]  MainClass Destructor called \n";
}
void ex_fun(){
    cout <<"[FUNCTION POINTER}  Example Function\n";
}
void ex_fun1(int a, int b){
    cout <<"[FUNCTION POINTER}  Sum of elements is "<< a+b <<"\n";
}
void ex_fun2(int a, int b){
    cout <<"[FUNCTION POINTER}  Ascending the characters "<< a+b<< "\n";

}
int mul(int a, int b){
    return a*b;
}
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

 int compute(int x, int y, int (*fun_ptr)(int, int)){
        return fun_ptr( x,y);
 }

 int MainClass::Test_sum(int a, int b){
        
        return a + b;
    }
void MainClass::Run(){
    cout << "[APP INIT]  Application Started Execution\n";
    //We can implement many functions in this run  function to run over
    //Arithemetics(5, 6);
    pointers();
    while(!exitRequested){
        /*prints pattern*/
        pattern(6);

        print_pattern();

        /* Multithreading*/
        multithreading();

        /* Basic arithemetic operations*/
        Arithemetics(5, 6);

        /* Perform Array operations*/
        array_string_fun();

        /* Structures and unions*/
        my_struct();

        /*Demonstrate OOPS concepts*/
        oops();

        Exception();

        Templates();

        Advanced();

        filehandling();

        cout<<"****************************************************************************************"<< Test_sum(5, 6)<< endl;

        //Function pointers Examples Added below
        void (*fun_ptr)()=ex_fun;
        fun_ptr();
        auto fun_ptr1=ex_fun1;
        fun_ptr1(2, 6);
        auto fun_ptr2=ex_fun2;
        fun_ptr2('A', 'B');
        cout <<"[FUNCTION POINTER}  The Multiplication Fun Pointer value is "<< compute(52,7676, mul)<<"\n";
        cout <<"[FUNCTION POINTER}  The Addition Fun Pointer value is "<< compute(452,7676, add)<<"\n";
        cout <<"[FUNCTION POINTER}  The Subtraction Fun Pointer value is "<< compute(5552,7676, sub)<<"\n";
        cout << "[RUN FUNCTION]  Run Function executed successfully \n";
        std::cout << "[SIGNAL HANDLER]  Application Running... Press Ctrl+C to exit.\n";
    }
}

//Multithreading

