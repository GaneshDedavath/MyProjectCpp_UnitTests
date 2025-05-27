#include"iostream"
#include"memory"
#include"My_App.h"

class SmartPointersClass : public MainClass{
    private:

    public:
    void Run_SMP();
    SmartPointersClass();
    ~SmartPointersClass();

};
class Pointer{
    private:
    int *ptr;
    int a, b;
    public:
    void Sum();
    int &operator *(){
        return *ptr;
    }
    Pointer(int a, int b);
    Pointer(int *p=NULL);
    ~Pointer();    
};

