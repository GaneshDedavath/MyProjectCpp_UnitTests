#include <windows.h>
#include "walls.h"
#include <iostream>

#undef byte

// Constructor implementation
BordersClass::BordersClass(int w, int h) : width(w), height(h) {
    std::cout << "[GAME WALLS] Constructor of walls" << std::endl;
    
    GetConsoleSize(width, height);
}

// Destructor
BordersClass::~BordersClass() {
    std::cout << "[GAME WALLS] Destructor of walls" << std::endl;
}

// Function to get console width and height dynamically
void GetConsoleSize(int &width, int &height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
}

// Function to draw the game walls
void BordersClass::Draw() const {
    system("cls"); // Clear screen (Windows)
    
    // Draw the top border
    for (int i = 0; i < width; i++)
        std::cout << "#";
    std::cout << std::endl;

    // Draw the side borders
    for (int i = 0; i < height - 2; i++) {  // -2 to exclude top and bottom
        std::cout << "#"; // Left border
        for (int j = 1; j < width - 1; j++)
            std::cout << " "; // Empty space
        std::cout << "#" << std::endl; // Right border
    }

    // Draw the bottom border
    for (int i = 0; i < width; i++)
        std::cout << "#";
    std::cout << std::endl;
}