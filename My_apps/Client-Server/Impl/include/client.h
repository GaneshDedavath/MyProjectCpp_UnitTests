#ifndef CLIENT_H  // Prevents multiple inclusions
#define CLIENT_H

#include "iostream"
#include "MainApp.h"

using namespace std;

//class declaration
namespace Client_App {

class ClientApp{
    private:
    int x;
    int y;
    int a=0;
    int size;

    public:
 
    //Constructor
    ClientApp();
    
    //Destructor
    ~ClientApp();

    void Run_Client();   // Method that simulates the running of the application

    /* will be added in Future*/
    };

//function declarations
} //namspace Client_App
#endif  // MY_APP_H
