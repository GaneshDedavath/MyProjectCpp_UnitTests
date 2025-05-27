#include "iostream"
#include "templates.h"
using namespace std;

namespace fun_temp {

Fun_TempClass::Fun_TempClass(){
    cout<< "[FUN TEMPLATE CONSTRUCTOR]  Constructor called\n";
}
Fun_TempClass::~Fun_TempClass(){
    cout<< "[FUN TEMPLATE DESTRUCTOR]  Destructor called\n";
}

//Function Template Definition
template<typename T>
T Fun_TempClass::mymax(T x, T y) {
    return max(x, y);
}

//Funtion Template Implementation
template<typename AR,  size_t N>
AR Fun_TempClass::arr_max(AR (&arr)[N]){
    AR max_parameter=arr[0];
    for(size_t  i =1; i<N; i++){
        if(arr[i]>max_parameter){
            max_parameter = arr[i];
        }
    }
    return max_parameter;
}
} //Closing namespace
namespace class_temp {
    //Constructor Implementation
    template<class T>
    Cls_TempClass<T>::Cls_TempClass(T x, T y, T z){
        cout<< "[CLASS TEMPLATE CONSTRUCTOR]  Constructor called\n";
        no_people=x;
        budget=y;
        demand=z;
        cout<< "[CLASS TEMPLATE] intial no_of_people Value is Set to: " << no_people <<"\n";
        cout<< "[CLASS TEMPLATE] intial demand Value is Set to: " << budget <<"\n";
        cout<< "[CLASS TEMPLATE] intial Budget Value is Set to: " << demand <<"\n";
    }
    //Destructorimplementation
    template<class T>
    Cls_TempClass<T>::~Cls_TempClass(){
        cout<< "[CLASS TEMPLATE DESTRUCTOR]  Destructor called\n";
    }
    template<class T>
    void Cls_TempClass<T>::Init_Values(T x, T y, T z){
        no_people=x;
        budget=y;
        demand=z;
        cout << "[CLASS TEMPLATE] Updating the values with Set Function: "<<"\n";
    }
    template<class T>
    void Cls_TempClass<T>::Updated_Values(){
        cout << "[CLASS TEMPLATE] The updated value are: "<<"\n";
        cout<< "[CLASS TEMPLATE] intial no_of_people Value is Set to: " << no_people <<"\n";
        cout<< "[CLASS TEMPLATE] intial demand Value is Set to: " << budget <<"\n";
        cout<< "[CLASS TEMPLATE] intial Budget Value is Set to: " << demand <<"\n";
    }
}//namespace close
void MainClass::Templates(){
    //Funtio Template Operations
    fun_temp::Fun_TempClass obj;
    
    int arr1[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char arr2[]={'A', 'Z', 'a', 'c', 'y'};
    string arr3[] = {"apple", "banana", "orange", "grape", "pineapple"};
    float arr4[]={10.5,11.5,22.5,64654.3,55565,5454211};

    cout << "[FUNCTION TEMPLATE]  Max number is " << obj.mymax<int>(3,4)<< endl;
    cout << "[FUNCTION TEMPLATE]  Biggest Character is " << obj.mymax<char>('A', 'B')<< endl;
    cout << "[FUNCTION TEMPLATE]  Max number in the array is: " << obj.arr_max<int>(arr1) <<"\n";
    cout << "[FUNCTION TEMPLATE]  Max Char in the array is: " << obj.arr_max<char>(arr2)<<"\n";
    cout << "[FUNCTION TEMPLATE]  Max String in the array is: " << obj.arr_max<string>(arr3)<<"\n";
    cout << "[FUNCTION TEMPLATE]  Max Float Number in the array is: " << obj.arr_max<float>(arr4)<<"\n";

    //Class Template Operations
    class_temp::Cls_TempClass obj1(10, 1588, 65467);
    obj1.Init_Values(122, 546545, 6546543);
    obj1.Updated_Values();
}
// End of funtion templates