#include"My_App.h"
class ExceptionClass :public MainClass{
    private:

    public:
    /*
    Unusual conditions
   -> Devide by Zero
   -> No Heap Memory Available
   -> Accssing array elements out of the region
    the allowed index range
   -> pop from early stack
    */
   int x=200;
   int y;
   vector<int> ex_vec={0, 10, 13, 178,38,897,8,876,8768,54};
   void Exceptions();
   void Subtraction(int x);
   void arr_average(vector<int> ex_vec);
   ExceptionClass();
   ~ExceptionClass();
};