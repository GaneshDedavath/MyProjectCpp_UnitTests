#include "pattern.h"

PatternClass::PatternClass(){
    cout << "[PATTERN PRINTING]   PatternClass Constructor called\n";
}
PatternClass::~PatternClass(){
    cout << "[PATTERN PRINTING]   PatternClass Desstructor called\n";
}

void MainClass::pattern(int size) {
    //incremental pattern
    cout << "[FUNCTION_OVERRIDE]  function from MainClass is called"<< endl;
    cout << "[PATTERNS_INCREMENT]  The incremental pattern is: "  << endl;

    for(int i=0; i<size; i++){
        for(int j=0; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    //Decremental pattern
    cout << "[FUNCTION_OVERRIDE]  function from MainClass is called"<< endl;
    cout << "[PATTERNS_DECREMENT]  The decremental pattern is: "  << endl;
    for(int i=size; i>0; i--){
        for(int j=0; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void PatternClass::square(){
    cout << "[PATTERN PRINTING]  Print Square Pattern\n";
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            cout << " + ";
        }
        cout << endl;
    }
}
void PatternClass::triangle(){
    cout << "[PATTERN PRINTING]  Print triangle Pattern\n";
    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            cout << " - ";
        }
        cout << endl;
    }
}

void MainClass::print_pattern(){
    PatternClass patternobj;
    patternobj.square();
    patternobj.triangle();
}