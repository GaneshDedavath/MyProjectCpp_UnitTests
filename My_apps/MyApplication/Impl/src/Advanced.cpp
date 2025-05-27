#include "Advanced.h"
#include"memory.h"

using namespace std;


//Demonstrate SmartPointer Class
SmartPointersClass::SmartPointersClass(){
    cout<<"[SMARTPOINTERS_CLASS]  SmartPointer Constructor is started\n";
}

SmartPointersClass::~SmartPointersClass(){
    cout<<"[SMARTPOINTERS_CLASS]  SmartPointer Destructor is started\n";
}

void SmartPointersClass::Run_SMP(){
    cout<<"[SMARTPOINTERS_CLASS]  SmartPointer Class is started\n";
}

//Raw pointer
Pointer::Pointer(int *p){
    cout<<"[POINTER_CLASS]  Pointer Class Constructor\n";
    ptr=p;
}
Pointer::~Pointer(){
    cout<<"[POINTER_CLASS]  Pointer Class Destructor\n";
    delete ptr;
}
Pointer::Pointer(int a, int b){
    cout<<"[POINTER_CLASS]  Pointer Class Parameterized Constructor\n";
    this->a=a;
    this->b=b;
}
void Pointer::Sum(){
     cout<<"[POINTER_CLASS]  Sum is: "<< a+b <<"\n";
}

void MainClass::Advanced(){
    Pointer ptr_obj(new int());
    *ptr_obj =20;
    cout<<"[POINTER_CLASS]  "<< *ptr_obj;

    Pointer *p1=new Pointer(5, 98);
    p1->Sum();

    unique_ptr<SmartPointersClass>smptr_obj(new SmartPointersClass());//Older style of creating pointer object i.e., before c++ 14
    smptr_obj->Run_SMP();
    unique_ptr<SmartPointersClass>smptr_obj2=make_unique<SmartPointersClass>();//make_unique is added in c++ 14
    smptr_obj2->Run_SMP();
    //the object or memory which is referenced by the unique_ptr will not get used by any other pointers(no sharing) But we can move the Ownership.
     //the object or memory which is referenced by the shared_ptr can be used by any other pointers( sharing)
    unique_ptr<SmartPointersClass>smptr_obj3=make_unique<SmartPointersClass>();
    smptr_obj3=move(smptr_obj2);
    smptr_obj3->Run_SMP();

    //Shared Pointer
    shared_ptr<SmartPointersClass>smptr_shobj(new SmartPointersClass());
    smptr_shobj->Run_SMP();
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  no.of object counts are: "<< smptr_shobj.use_count() << "\n";
    shared_ptr<SmartPointersClass>smptr_shobj1=make_shared<SmartPointersClass>();
    smptr_shobj1=smptr_shobj;
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  no.of object counts are: "<< smptr_shobj.use_count() << "\n";
    shared_ptr<SmartPointersClass>smptr_shobj2=make_shared<SmartPointersClass>();
    smptr_shobj2=smptr_shobj1;
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  no.of object counts are: "<< smptr_shobj.use_count() << "\n";
    shared_ptr<SmartPointersClass>smptr_shobj3(new SmartPointersClass());
    smptr_shobj3=smptr_shobj2;
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  no.of object counts are: "<< smptr_shobj.use_count() << "\n";
    shared_ptr<SmartPointersClass>smptr_shobj4(new SmartPointersClass());
    smptr_shobj3=smptr_shobj;
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  no.of object counts are: "<< smptr_shobj.use_count() << "\n";
    //Weak Pointers always used with Shared pointer. They use the objectes which are owned by shared pointers
    //They will not increase the use_count
    //Purpose of Weak_ptr is to remove the cyclic dependency problem between multiple objects
    weak_ptr<SmartPointersClass>smptr_wkptr;
    smptr_wkptr=smptr_shobj1;
    weak_ptr<SmartPointersClass>smptr_wkptr1;
    smptr_wkptr1=smptr_shobj1;
    weak_ptr<SmartPointersClass>smptr_wkptr2;
    smptr_wkptr2=smptr_shobj1;
    cout<<"[SMARTPOINTERS_CLASS]  SharedPointer  after creating the weak_ptr no.of object counts are: "<< smptr_wkptr2.use_count() << "\n";
}