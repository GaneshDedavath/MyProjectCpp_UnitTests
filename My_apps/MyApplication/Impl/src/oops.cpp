#include "oops.h"

/*Constructor Operations*/
BaseClass::BaseClass(){
    cout << "[OOPS_BASECLASS]   BaseClass Default constructor called\n";
    cout << "[OOPS_CONCEPTS]   BaseClass Parameterized constructor called\n";
    cout << "[OOPS_CONCEPTS]   Default values of height is: " << height << ", Weight is: " << weight << ", Age is: " << age << " and Identity is: "<< ID <<"\n";
    }
//Assigning valuues in constructor body
BaseClass::BaseClass(int x, int y){
        height = x;
        weight = y;
        cout << "[OOPS_CONCEPTS]   BaseClass Parameterized constructor called\n";
        cout << "[OOPS_CONCEPTS]   height value from constructor  is :" << height << "Weight is: " << weight << "\n";
        }
// Using Initializer List
BaseClass::BaseClass(int x, int y, int z, string a):height(165), weight(65), age(26), ID("DIP-15004-EC-015"){
    cout << "[OOPS_CONCEPTS]   BaseClass Parameterized constructor called\n";
    cout << "[OOPS_CONCEPTS]  values from Param. constructor Are, height is :" << height << ", Weight is: " << weight << ", Age is: " << age << " and Identity is: "<< ID <<"\n";
    }
BaseClass::~BaseClass(){
    cout << "[OOPS_BASECLASS]   BaseClass Destructor called\n";
    }
int BaseClass::Get_height(int a){
    height =a ;
    return height;
}
int BaseClass::Get_weight(int a){
    weight =a;
    return weight;
}
int BaseClass::Get_age(int a){
    age = a;
    return age;
}
string BaseClass::Get_ID(string a){
    ID = a;
    return ID;
}
string BaseClass::Get_Name(string e){
    Name=e;
    return Name;
}
/*  
CompileTime Polymorphism
*/
void BaseClass::fun(){ //Function overriding
    cout << "[FUN_OVERLOAD]  function with 0 elements is called Compiletime Polymorphism\n";
}
void BaseClass::fun(int x, int y){
    height=x;
    weight=y;
    cout << "[FUN_OVERLOAD]  function with 2 elements is called Compiletime Polymorphism, so the BMS Value of Ganesh is: " << height*weight << "\n";
}
void BaseClass::fun(int z){
    cout << "[FUN_OVERLOAD]  function with 1 elements is called Compiletime Polymorphism, so the value of the passed arg:" << z << "\n";
}// Function overriding */

void BaseClass::pattern(int size) {//Function overloading
    //incremental pattern
    cout << "[FUNCTION OVERRIDE]  function from BaseClass is called Runtime Polymorphism"<< "\n";
    cout << "[PATTERNS_INCREMENT]  The incremental pattern called with Size of: "<< size  << "\n";
    for(int i=0; i<size; i++){
        for(int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    //Decremental pattern
    cout << "[FUNCTION OVERRIDE]  function from BaseClass is called"<< "\n";
    cout << "[PATTERNS_DECREMENT]  The decremental patterncalled with Size of: "<< size  << "\n";
    for(int i=size; i>0; i--){
        for(int j=0; j<=i; j++){
            cout << "#" << " ";
        }
        cout << "\n";
    }
}// Function Overloading
/*
Define Protected Functions
*/
void BaseClass::base_protected_fun(int a, int b){
    cout <<  "[OOPS_CONCEPTS]  Trying to Access BaseClass Protected members through Public Derived and FriendClass  Class\n";
    cout <<  "[OOPS_CONCEPTS]  Protected Param1 Value: "<< a << "\n";
    cout <<  "[OOPS_CONCEPTS]  Protected Param2 Value: "<< b << "\n";
}

/* 
Public Inheritance Demonstration
*/
PublicClass::PublicClass(){
        cout << "[OOPS_PublicClass:   PublicClass(ChildClass Constructor called concepts\n";
}
PublicClass::~PublicClass(){
    cout << "[OOPS_PublicClass:   PublicClass(ChildClass Destructor called concepts\n";
}
void PublicClass::Derived_Func(int a, int b,int c, string d, string e){
    cout <<  "[OOPS_CONCEPTS]  Trying to Access Private members in Public DerivedClass. As the Private Members are Not Accessible in Derived, Trying to get through the Getter Functions Which are Public \n";
    cout <<  "[OOPS_CONCEPTS] The Details of Person "<< Get_Name(e) <<" Are, height is :" << Get_height(a) << ", Weight is: " << Get_weight(b) << ", Age is: " << Get_age(c) << " and Identity is: "<< Get_ID(d) <<"\n";
    cout << "[OOPS_CONCEPTS]   It is the Function from the Derived class\n";
}

/*
Private Inheritance Implementation
*/
PrivateClass::PrivateClass(){
    cout << "[OOPS_PrivateClass]   PrivateClass(ChildClass) Constructor called concepts\n";
}
PrivateClass::~PrivateClass(){
cout << "[OOPS_PrivateClass]   PrivateClass(ChildClass) Destructor called concepts\n";
}
void PrivateClass::Derived_Func(int a, int b,int c, string d, string e){
    cout <<  "[OOPS_CONCEPTS]  Trying to Access Private members in Private DerivedClass. As the Private Members are Not Accessible in Derived, Trying to get through the Getter Functions Which are Public \n";
    cout <<  "[OOPS_CONCEPTS] The Details of Person "<< Get_Name(e)<< " Are " << "height is :" << Get_height(a) << ", Weight is: " << Get_weight(b) << ", Age is: " << Get_age(c) << " and Identity is: "<< Get_ID(d) <<"\n";
    cout << "[OOPS_CONCEPTS]   It is the Function from the Derived class\n";
    BaseClass::pattern(4);
    cout << "[OOPS PRV.INHERITANCE]   Call Function of BaseClass from the created Derived class\n";
    BaseClass::fun(5, 6);
}
void PrivateClass::Private_Fun(){
     cout << "[OOPS PRV.INHERITANCE]   Private Function called which have controls on other private Functionsinherited BaseClass \n";
     pattern(40);
     print_pattern();
}

/* 
Protected Inheritance Demontration
*/
ProtectedClass::ProtectedClass(){
    cout << "[OOPS_PRV.INHERITANCE]   ProtectedClass(ChildClass) Constructor called concepts\n";
}
ProtectedClass::~ProtectedClass(){
cout << "[OOPS_PRV.INHERITANCE]   ProtectedClass(ChildClass) Destructor called concepts\n";
}
void ProtectedClass::Derived_Func(int a, int b,int c, string d, string e){
    pro_height=a;
    pro_weight=b;
    pro_age=c;
    pro_ID=d;
    pro_name=e;
    cout <<  "[OOPS_CONCEPTS]  Trying to Access Publicly members in ChildClass3 which is Privatly inherited\n";
    cout <<  "[OOPS_CONCEPTS] The Details of Person " << pro_name<< " Are " << "height is :" << pro_height << ", Weight is: " << pro_weight << ", Age is: " << pro_age << " and Identity is: "<< pro_ID << "\n";
    cout << "[OOPS_CONCEPTS]   It is the Function from the Derived class\n";
}
void BaseClass::protected_ops(){
    BaseClass::base_protected_fun(10, 20);
}
void ProtectedClass::Protected_Fun(){
    pattern(20);
    print_pattern();
}
/*
Friend Class Demonstration
*/
void BaseClass::public_fun(){
    cout << "[OOPS_FRIENDCLASS]   It is the public Function member of the Baseclass\n";//can be accessed here
    private_fun();
    base_protected_fun(50, 100);
    pro_height=175;
    pro_age=27;
    pro_weight=90;
}
void BaseClass::private_fun(){
        cout << "[OOPS_FRIENDCLASS]   It is the Private Function member of the Baseclass\n";//can be accessed here
}

void FriendClass::Access_Fd_Funs(BaseClass& obj){
    cout << "[OOPS_FRIENDCLASS]   It is the FriendClass Function of the Baseclass\n";
    // Accessing private and protected members
    cout << "Private Var: " << obj.private_var << "\n";
    cout << "Protected Var: " << obj.protected_var << "\n";
    obj.public_fun();
    cout << "[OOPS_FRIENDCLASS]   The Details of Friend Naman Are,\n The Height is: "<< obj.pro_height<<  "\nThe Wieght is: " << obj.pro_weight << "\nThe Age is: " << obj.pro_age<< "\n";
}
FriendClass::FriendClass(){
    cout << "[OOPS_FRIENDCLASS]   ProtectedClass(ChildClass) Constructor called concepts\n";

}
FriendClass::~FriendClass(){
    cout << "[OOPS_FRIENDCLASS]   ProtectedClass(ChildClass) Constructor called concepts\n";
}
/*
Demonstrate Friend Function
*/
void Frnd_Fun(BaseClass& obj){
    cout << "[OOPS_FRIENDFUNCTION]   FriendFunction is called \n";
    cout<< "[OOPS_CONCEPTS]   The name of the employee is"<< obj.Get_Name("Ganesh")<<"\n";
}
void MainClass::oops(){
    cout << "[OOPS_CONCEPTS]   Proceed to go with implementation of your OOPs concepts\n";
    //function overloading implementation
    BaseClass oops_obj;
    oops_obj.fun();
    oops_obj.fun(165, 65);
    oops_obj.fun(4564);

    /* waits for 2 seconds*/
    std::this_thread::sleep_for(std::chrono::seconds(3));

    /*
    Creates an object of MainClass
    and calls pattern function
    This is to demonstrate Method Overloading
    */
    MainClass::pattern(10);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    /*
    Performing the Runtime polymorphism( Method overriding)
    */

    std::unique_ptr<MainClass> smrt_ptr = std::make_unique<BaseClass>();
    smrt_ptr->pattern(10);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    BaseClass Cons_ops;
    BaseClass Cons_ops2(40, 80);
    BaseClass Cons_ops4(40, 80, 26, "15004-EC-015");
    
    /*
    Implement Public Inheritance
    */
   PublicClass Ganesh;
   Ganesh.protected_ops();
   cout << "[OOPS PUB.INHERITANCE]   Call Function from the Public Derived class\n";
   Ganesh.Derived_Func(165, 65, 26, "15004-EC-015", "Ganesh");
   cout << "[OOPS PUB.INHERITANCE]   Call Function of MainClass from the created Derived class\n";
   Ganesh.pattern(4);
   cout << "[OOPS PUB.INHERITANCE]   Call Function of BaseClass from the created Derived class\n";
   Ganesh.fun(5, 6);
   std::this_thread::sleep_for(std::chrono::seconds(2));

    /*
    Implement Private Inheritance
    */
   PrivateClass Chinna;
   cout << "[OOPS PRV.INHERITANCE]   Call Function from the Private Derived class\n";
   cout << "[OOPS PRV.INHERITANCE]   Details of Chinna:\n";
   Chinna.Derived_Func(168, 60, 22, " 15004-EC-011", "Chinna");
   Chinna.Private_Fun();
   cout << "[OOPS PRV.INHERITANCE]   Call Function of MainClass from the created Derived class\n";
   std::this_thread::sleep_for(std::chrono::seconds(2));
    /*    
    Implement Protected Inheritance
    */
   ProtectedClass Sayyad;
   cout << "[OOPS PRO.INHERITANCE]   Call Function from the Protected Derived class\n";
   cout << "[OOPS PRo.INHERITANCE]   Details of Sayyad:\n";
   Sayyad.Derived_Func(162, 55, 23, "  15004-EC-009", "Sayyad");
   Sayyad.Protected_Fun();
   cout << "[OOPS PRO.INHERITANCE]   Call Function of MainClass from the created Derived class\n";
   std::this_thread::sleep_for(std::chrono::seconds(2));

   /*
   FriendClass Demonstration
   */
  FriendClass Naman;
  cout << "[OOPS FRIENDCLASS]   Call Function from the FriendClass\n";
  cout << "[OOPS FRIENDCLASS]   Details of Naman:\n";
  BaseClass obj;
  Naman.Access_Fd_Funs(obj);
  cout << "[OOPS FRIENDCLASS]   Call Function of MainClass from the created Derived class\n";
  std::this_thread::sleep_for(std::chrono::seconds(2));
  Frnd_Fun(obj);

}