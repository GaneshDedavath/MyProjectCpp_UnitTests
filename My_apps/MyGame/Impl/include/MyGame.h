#ifndef MY_APP_H  // Prevents multiple inclusions
#define MY_APP_H

#include "iostream"
using namespace std;

/*
Global flag for graceful exit
*/ 
extern bool exitRequested;

//MainApp class declaration
class MyGame{
    private:

    public:
    /*
    Constructor and Destructor Declaration
    */
    MyGame();
    ~MyGame();

    /* Run Function that invokes the starting point of the Game*/
    void Run();   
    /* will be added in Future*/
    };

#endif //MY_APP_H