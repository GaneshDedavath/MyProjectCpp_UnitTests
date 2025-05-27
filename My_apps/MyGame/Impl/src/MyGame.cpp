// Run function - Main game loop
#include "MyGame.h"
#include "walls.h"
#include "snake.h"
#include <thread>
#include <iostream>

using namespace std;

// Constructor Implementation
MyGame::MyGame() {
    cout << "[BASE CONSTRUCTOR] MyGame Constructor called" << endl;
}

// Destructor Implementation
MyGame::~MyGame() {
    cout << "[BASE DESTRUCTOR] MyGame Destructor called" << endl;
}

// Run function - Main game loop
void MyGame::Run() {
    const int width = 60;
    const int height = 20;

    cout << "[APP INIT] Application Started Execution" << endl;

    BordersClass borders(width, height);
    SnakeClass snake(width / 2, height / 2);

    bool gameRunning = true;
    system("cls"); // Clear screen once before the loop

    // Draw static walls (they shouldn't change)
    borders.Draw();

    while (gameRunning) {
        // Capture keyboard input (before moving)
        if (_kbhit()) {
            int key = _getch(); // Get first keypress
            snake.ChangeDirection(key); // Pass key to ChangeDirection()
        }
    
        // Move the snake
        snake.Move();
    
        // Check for wall collision
        if (snake.CheckCollision(width, height)) {
            gameRunning = false;
            cout << "\nGame Over! You hit the wall.\n";
            break;
        }
    
        // Draw the snake
        snake.Draw();
    
        // Control game speed
        this_thread::sleep_for(chrono::milliseconds(150));
    }
    
    cout << "[RUN FUNCTION] Run Function executed successfully" << endl;
}
