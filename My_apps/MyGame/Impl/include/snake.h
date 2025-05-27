#include "MyGame.h"
#ifndef SNAKECLASS_H
#define SNAKECLASS_H

#include <vector>
#include <conio.h>  // For _kbhit() & _getch()
#include <utility>  // For std::pair

class SnakeClass {
private:
    std::vector<std::pair<int, int>> body; // Snake's body (x, y)
    char direction; // Current movement direction

public:
    SnakeClass(int startX, int startY);
    void Move();
    void ChangeDirection(char newDirection);
    bool CheckCollision(int width, int height);
    void Draw() const;
};

#endif
