#ifndef MY_APP_H  // Prevents multiple inclusions
#define MY_APP_H

#include "iostream"


using namespace std;

// Global flag for graceful exit
extern bool exitRequested;
//class declaration

class MainApp{
    private:
    int x;
    int y;
    static int a;
    int size;

    public:
 
    //Constructor
    MainApp();
    
    //Destructor
    ~MainApp();

    void Run();   // Method that simulates the running of the application

    /* will be added in Future*/
    };

//function declarations
#endif //MY_APP_H