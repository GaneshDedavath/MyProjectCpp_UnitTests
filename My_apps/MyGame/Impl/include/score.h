#ifndef SERVER_H  // Prevents multiple inclusions
#define SERVER_H

#include "iostream"
#include "MainApp.h"

using namespace std;

namespace Server_App {

    class ServerApp{
        private:
        int x;
        int y;
        int a;
        int size;
    
        public:
     
        //Constructor
        ServerApp();
        
        //Destructor
        ~ServerApp();
    
        void Run_Server(int);   // Method that simulates the running of the application
          
        };
    
    //function declarations
    } //namspace Server_App
#endif  // MY_APP_H
