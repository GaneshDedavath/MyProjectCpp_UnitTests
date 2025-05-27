#ifndef WALLS_H  // Prevents multiple inclusions
#define WALLS_H

#include "iostream"
#include "MyGame.h"

using namespace std;

//Wall class declaration
class BordersClass{
    private:
    int width; // Width of the game area
    int height; // Height of the game area

    public:
    //Constructor
    BordersClass(int w, int h);
    
    //Destructor
    ~BordersClass();

    void Draw() const;   // Method that simulates the running of the application


    /* will be added in Future*/
    };
// Declare GetConsoleSize before using it in walls.cpp
void GetConsoleSize(int &width, int &height);
//function declarations
#endif  // WALLS_H
