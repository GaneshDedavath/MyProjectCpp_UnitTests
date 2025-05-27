#include "MainApp.h"
#include "client.h"


//constructor Implementation
MainApp::MainApp(){
    cout << "[BASE CONSTRUCTOR]  MainApp Constructor called " << endl;

}
//Destructor Implementation
MainApp::~MainApp(){
    cout << "[BASE DESTRUCTOR]  MainApp Destructor called " << endl;
}
void MainApp::Run(){
    cout << "[APP INIT]  Application Started Execution" << endl;
    //We can implement many functions in this run  function to run over
    //Arithemetics(5, 6);
    Client_App::ClientApp obj2;  // Create a ClientApp object
    obj2.Run_Client();           // Call the Run_Client method
    cout << "[RUN FUNCTION ]  Run Function executed successfully " << endl;
    std::cout << "[SIGNAL HANDLER]  Application Running... Press Ctrl+C to exit.\n";

}

//Multithreading

