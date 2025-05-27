#include "snake.h"

using namespace std;

// Constructor: Initialize snake with a default direction
SnakeClass::SnakeClass(int startX, int startY) {
    body.push_back({startX, startY});
    direction = 'R'; // Default direction (Right)
}

void SnakeClass::Move() {
    pair<int, int> newHead = body.front();

    switch (direction) {
        case 'U': newHead.second--; break;  // Move Up
        case 'D': newHead.second++; break;  // Move Down
        case 'L': newHead.first--;  break;  // Move Left
        case 'R': newHead.first++;  break;  // Move Right
    }

    body.insert(body.begin(), newHead); // Move forward
    body.pop_back(); // Remove tail (unless growing)
}

void SnakeClass::ChangeDirection(char key) {
    
        key = _getch(); // Get the actual arrow key code

        switch (key) {
            case 72: if (direction != 'D') direction = 'U'; break; // Up Arrow
            case 80: if (direction != 'U') direction = 'D'; break; // Down Arrow
            case 75: if (direction != 'R') direction = 'L'; break; // Left Arrow
            case 77: if (direction != 'L') direction = 'R'; break; // Right Arrow
            default: break; // Ignore other keys
        }
    
}


bool SnakeClass::CheckCollision(int width, int height) {
    auto head = body.front();
    return (head.first <= 0 || head.first >= width - 1 || 
            head.second <= 0 || head.second >= height - 1);
}

void SnakeClass::Draw() const {
    for (const auto& segment : body) {
        cout << "\033[" << segment.second + 1 << ";" << segment.first + 1 << "H@"; // ANSI escape code for positioning
    }
}
