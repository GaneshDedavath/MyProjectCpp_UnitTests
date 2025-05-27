#include "My_App.h"
/* Derived class Declaration*/
class BaseClass : public MainClass{
     protected://Not accessible outside class excep inherited Classes
        int pro_height;
        int pro_weight;
        int pro_age;
        string pro_name;
        string pro_ID;
        int param1;
        int param2;
        void base_protected_fun(int x, int y);
        int protected_var = 20;
     private://Not accessible outside class
        string Name;
        int height;
        int weight;
        int age;
        string ID;
        void private_fun();
        int private_var = 10;
     public://Accessible outside the class
        void pattern(int size) override; //Function Overriding
        //function Declarations for Compiletime Polymorphism(Function Overloading)
        void fun();
        void fun(int x, int y);
        void fun(int z);
        //To initialize or accessing the private members of BaseClass
        int Get_height(int x);
        int Get_weight(int x);
        int Get_age(int x);
        string Get_ID(string x);
        string Get_Name(string x);

        void protected_ops();
        void public_fun();
        int public_var = 30;
        
        /*constructor Declaration*/
        BaseClass();
        /*constructor Declaration*/
        BaseClass(int x, int y);
        /*constructor Declaration*/
        BaseClass(int x, int y, int z, string a);
        /*Destructor DEclaration*/
        ~BaseClass();
         // Declare FriendClass as a friend
        friend class FriendClass;  //Define the Friend Class 

};

/*
Encapsulation: We've binded the Data members and Member functions.
Abstraction: The internal implementation is hidden and don't have access to private members.
Polymorphism: created the functions with same name with different parameters is Compiletime polymorphism(function overloading).
              Created the Functions with same name but different functionalities in Both Base and Derived classes is Runtime Polymorphism(function overriding)
Inheritance: In below class we're inheritting the Data members and Member functions showing the implementation of Inheritance.
        Private members of Baseclass will not get inherited at all in the Derivedclasses
        Inheritance Levels:
                Public:   Members can be accessed anywhere i.e., inside or ouside of the class.
                Private:  Members can only accessed inside the class, not even accessible inside Derived Classes. but Can be accessed as a parameter to a public function.
                Protected: Members can be accessed inside the class as well as inside the DerivedClass but not outside the class.
                Public: All Members of BaseClass will be inherited as they defined in BaseClass
                        i.e., Public -> Public
                              Private -> Private
                              Protected -> Protected
                Private: BaseClass Public and Protected members will inherited as Private members in ChildClass.
                        i.e., Public -> Private
                              Protected -> Private
                              Private -> NA(Not inherited)
                Protected: BaseClass Public and Protected members will inherited as Protected members in ChildClass.
                        i.e., Public -> Protected
                              Protected -> Protected
                              Private ->  NA(Not inherited)               

*/
class PublicClass : public BaseClass{
        private:
        
        public:
        void Derived_Func(int x, int y,int z, string a,string e);
        PublicClass();
        ~PublicClass();
};
class PrivateClass : private BaseClass{
        private:
        public:
        void Derived_Func(int a, int b,int c, string d, string e);
        void Private_Fun();
        PrivateClass();
        ~PrivateClass();
};

class ProtectedClass : protected BaseClass{
        private:
        public:
        void Derived_Func(int a, int b,int c, string d, string e);
        void Protected_Fun();
        ProtectedClass();
        ~ProtectedClass();
};
class FriendClass{
        private:

        public:
        void Access_Fd_Funs(BaseClass& obj);
        FriendClass();
        friend void Frnd_Fun(BaseClass& obj2);
        ~FriendClass();

};