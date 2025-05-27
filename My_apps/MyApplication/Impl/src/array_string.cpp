#include"array_string.h"

ArrayStringClass::ArrayStringClass(){
    cout << "[ARRAYS & STRINGS]   ArrayStringClass Constructor called\n";
}
ArrayStringClass::~ArrayStringClass(){
    cout << "[ARRAYS & STRINGS]   ArrayStringClass Desstructor called\n";
}

/*
Function Definitions
*/
string ArrayStringClass::Reverse_string(string s){
    string rev_string;
    int l=s.length()-1;

    while(l >=0){
        rev_string += s[l];
        l--;
    }
    return rev_string; 
}
bool ArrayStringClass::Palindrome_string2(string s){
    if (s.length() == 1) return true;
    int start= 0; int stop = s.length()-1;
    while(start <= stop){
        if (s[start]!=s[stop]) return false;
        start++;
        stop--;
    }

    return true; 
}


void MainClass::array_string_fun(){
    /* Define an object of ArrayString Class*/
    ArrayStringClass ASObj;
    /*array Operations*/
    cout << "[ARRAYS & OPS]   The array elements passed are: ";
    for (int i : ASObj.arr){
        cout << i << " ";
    }
    cout << "\n";
    cout << "[ARRAYS & OPS]   increment array elements: ";
    for (int i : ASObj.arr){
        cout << i << " ";
    }
    cout << "\n";
    cout << "[ARRAYS & OPS]   The array elements after increment using copy are: " ;
    for(int i : ASObj.arr){
        cout << i << " ";
    }
    cout << "\n";
    /*Modifying array elements using References*/
    cout << "[ARRAYS & OPS]   increment using references are: ";
    for (int &i : ASObj.arr){
        i+=20;
    }
    cout << "\n";
    cout << "[ARRAYS & OPS]   The array elements after increment using references are: ";
    for(int i : ASObj.arr){
        cout << i << " ";
    }
    cout << "\n";

    /* String Operations*/
    for (string x : ASObj.str_arr){
        cout << "[STRINGS & OPS]  Given Input String is: " << x << endl;
        cout << "[STRINGS & OPS]  The Reversed String is: " << ASObj.Reverse_string(x) << endl;
    }
    for (string x : ASObj.str_arr){
        if(ASObj.Palindrome_string2(x)){
            cout << "[STRINGS & OPS]  the given string " << x << " is Palindrome\n";
        }
        else{
            cout << "[STRINGS & OPS]  the given string " << x << " is Not Palindrome\n";
        }
    }
}