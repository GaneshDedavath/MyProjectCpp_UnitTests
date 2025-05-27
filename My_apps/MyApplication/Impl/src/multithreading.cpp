#include "multithreading.h"

ThreadClass::ThreadClass(){
    cout << "[MULTI_THREADING]   ThreadClass Constructor called\n";

}
ThreadClass::~ThreadClass(){
    cout << "[MULTI_THREADING]   ThreadClass Desstructor called\n";
}

/*Define mutex object*/
mutex mtx;
void ThreadClass::print(string symbol, int &count){
    count=0;
    for(int i=0; i<100; i++){
        {  
            lock_guard<mutex> lock(mtx);
            cout << symbol;
        }
        count++;
    }
    {   
        cout << endl;
        lock_guard<mutex> lock(mtx);
        cout << "[MULTI_THREADING]  No of symbol " << symbol <<  " is: " << count << endl;
    }    
}
void MainClass::multithreading(){
    cout << "[MULTI_THREADING]  Multithreading file is invoked, Here the implementation: \n";
    ThreadClass thread_obj; //To invoke the threadclass members
    int count1=0; int count2=0;
    thread t1_plus (&ThreadClass::print,  &thread_obj, string("+ "), ref(count1));
    thread t2_minus (&ThreadClass::print,  &thread_obj, string("- "), ref(count2));
    t1_plus.join();
    t2_minus.join();
}