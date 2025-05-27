#include "pointers.h"
#include "memory"

void MainClass::pointers(){
    cout << "[POINTERS]  Pointer Function is invoked\n";
    if (ptr1 == NULL){
        cout<< "[POINTERS]  NULL pointer is invoked\n";
    }

    if(ptr2){
        cout << "[Smart POINTERS]  The value of the pointer ptr2 is: " << *ptr2<< endl;
    }

}