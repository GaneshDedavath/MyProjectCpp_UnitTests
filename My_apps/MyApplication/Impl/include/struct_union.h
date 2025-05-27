#include"My_App.h"

class StructUnionClass : public MainClass{

public:
    StructUnionClass();

    ~StructUnionClass();
    //Structure Declaration
    string shapes_arr[5]={"Circle", "Square", "Rectangle", "triangle", "pentagon"};
    struct My_struct
    {
        /* data declaration*/
        int x;
        int y;
        string z;
        //member function declaration
        void print(){
            cout <<"[STRUCT* & UNION]  " << "x: " << x << ", y: " << y << ", z: " << z << endl;
        };
    };

    //Declare a function prototype
    void struct_op();

    /* Struct to claculate Areas*/
    struct area_calc{
        int radius;
        int length;
        int width;
        int side;
    };
    

    //Declare a function prototype
    int struct_area(string x);


    /*Union Implementation*/

    union my_union
    {
        /* data */
        int x;
        int y;
        double z;
    };

    /*Function to Traverse the Union*/
    void my_union_fun();
};
