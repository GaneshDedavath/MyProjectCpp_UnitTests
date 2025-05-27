#include "MyGame.h"
#include "csignal"
#include <cstdlib>

bool exitRequested = false;
// Signal handler function to handle Ctrl+C (SIGINT)
void signalHandler(int signal) {
    std::cout << "\n[SIGNAL HANDLER] Caught signal " << signal << ". Exiting the program...\n";
    exitRequested =true;  // Exit the program
}

int main(){

    // Register the signal handler for SIGINT (Ctrl+C)
    std::signal(SIGINT, signalHandler);
    // Create an instance of the MyGame class
    MyGame obj1;
    // Run the application
    obj1.Run();
    std::cout << "Application terminated successfully.\n";

    return 0;
}