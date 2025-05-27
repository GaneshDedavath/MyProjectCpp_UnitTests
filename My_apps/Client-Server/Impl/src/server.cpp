#include "server.h"

//constructor Implementation
Server_App::ServerApp::ServerApp(){
    cout << "[Server CONSTRUCTOR]  ServerApp Constructor called " << endl;

}
//Destructor Implementation
Server_App::ServerApp::~ServerApp(){
    std::cout << "[Server DESTRUCTOR]  ServerApp Destructor called " << endl;
}
void Server_App::ServerApp::Run_Server(int a){

    cout << "[APP Server ]  The event is Sent with Value: " << a << endl;

    }

//Multithreading

