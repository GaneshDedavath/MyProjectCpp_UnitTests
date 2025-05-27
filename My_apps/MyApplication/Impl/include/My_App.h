#ifndef MY_APP_H  // Prevents multiple inclusions
#define MY_APP_H

#include "iostream"
#include "vector"
#include "thread"
#include "memory"
#include "mutex"

using namespace std;

// Global flag for graceful exit
extern bool exitRequested;
//class declaration
class MainClass{
    private:
        int x;
        int y;
        static int a;
        int size;
    public:
        //Constructor
        MainClass();
        
        //Destructor
        ~MainClass();

        void Run();   // Method that simulates the running of the application

        void Arithemetics(int x, int y);

        void pointers();
        
        void print_pattern();

        void multithreading();

        void oops();

        void array_string_fun();

        void my_struct();
        
        void Templates();

        void Exception();

        virtual void pattern(int size);

        void Advanced();
        void filehandling();

        int Test_sum(int a, int b);

        /* will be added in Future*/
    };

//function declarations

#endif  // MY_APP_H
