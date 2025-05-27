#include "client.h"
#include "MainApp.h"
#include "server.h"
#include "chrono"
#include "thread"


//constructor Implementation
namespace Client_App{

ClientApp::ClientApp(){
    cout << "[APP CONSTRUCTOR ]  ClientApp Constructor called " << endl;

}
//Destructor Implementation
ClientApp::~ClientApp(){
    cout << "[APP DESTRUCTOR ]  ClientApp Destructor called " << endl;
}
void ClientApp::Run_Client(){
    cout << "[APP INIT]  Application Started Execution" << endl;
    //We can implement many functions in this run  function to run over
    //Arithemetics(5, 6);
    while(!exitRequested){
        Server_App::ServerApp obj3;
        obj3.Run_Server(a);
        std::this_thread::sleep_for(std::chrono::seconds(3)); 
        cout << "[APP Client ]  Event returned with value: " << a << endl;
        a++;
       
    }
}
} //namespace Client_App
//Multithreading

