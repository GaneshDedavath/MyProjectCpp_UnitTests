#include "My_App.h"
class ArrayStringClass : public MainClass{

    public:
    std::vector<int> arr={10,20,30,45,78,45,50};

    std::vector<string> str_arr = {"Geeks For Geeks", "madam", "Vinod", "kadak"};

    string Reverse_string(string s);
    bool Palindrome_string2(string s);
    ArrayStringClass();
    ~ArrayStringClass();

};