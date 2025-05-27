#include"struct_union.h"

StructUnionClass::StructUnionClass(){
    cout << "[STRUCTURE & UNION]   StructUnionClass Constructor called\n";
}
StructUnionClass::~StructUnionClass(){
    cout << "[STRUCTURE & UNION]   StructUnionClass Desstructor called\n";
}
void StructUnionClass::struct_op(){
    //Structure Construction i.e., Assigning values to the structure members by creating an object obj1
    My_struct obj1;
    obj1.x =10;
    obj1.y =20;
    obj1.z ="Ganesh";

    //Call the structure members
    obj1.print();

    //Print the structure member values using the object
    cout <<"[STRUCT* & UNION]  " << obj1.z << " Have the Marks of: " << obj1.y << " So the Rank Assigned is: " << obj1.x << endl;
}

int StructUnionClass::struct_area(string x){
    area_calc A;
    A.length= 5;
    A.radius= 10;
    A.side = 25;
    A.width =20;

    if(x== "Circle")
        return (3.14*A.radius *A.radius);
    else if(x== "Square")
        return (A.side *A.side);
    else if(x== "Rectangle")            
            return (A.length *A.width);

    return -1;

}

void StructUnionClass::my_union_fun(){
    cout << "[STRUCT & UNION*]  My Union implementation is started\n";
    my_union obj_A;
    obj_A.x=10;
    
    cout << "[STRUCT & UNION*]  The vlue of obj_A.x is " << obj_A.x << endl;
    obj_A.y=15;
    cout << "[STRUCT & UNION*]  The vlue of obj_A.y is " << obj_A.y << endl;
    obj_A.z=obj_A.x/obj_A.y;
    cout << "[STRUCT & UNION*]  The vlue of obj_A.z i.e., x/y  is" << static_cast<double>(10/15) << endl;

    cout << "[STRUCT & UNION*]  The size of the Union is: " << sizeof(my_union) << " bytes"  <<" i.e., size of largest element in the union\n";

}
void MainClass::my_struct(){
    cout << "[STRUCT* & UNION]  Here the structure and Union operations started\n";
    StructUnionClass struct_obj;
    struct_obj.struct_op();
    for(string  x : struct_obj.shapes_arr){
        cout << "[STRUCT* & UNION]  The Area of **" << x << "** is: " << struct_obj.struct_area(x) <<   endl;
    }

    struct_obj.my_union_fun();

}