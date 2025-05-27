#include "My_App.h"
#include"thread"
#include"mutex"

class ThreadClass : public MainClass{

    public:

    ThreadClass();
    ~ThreadClass();

    void print(string symbol, int &count);


};
