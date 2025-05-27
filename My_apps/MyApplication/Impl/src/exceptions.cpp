#include "exceptions.h"


ExceptionClass::ExceptionClass(){
    int x=10; int y=5;
    cout << "[CPP_EXCEPTION HANDLING]   Exception Handler Constructor is called \n";
    cout << "[CPP_EXCEPTION HANDLING] Initialized the values x= "<< x << " and Y is= " << y << "\n";
}

ExceptionClass::~ExceptionClass(){
    cout << "[CPP_EXCEPTION HANDLING]   Exception Handler Destructor is called \n";

}

void ExceptionClass::Subtraction(int x){
    for(int i=0; i<=100; i++){
        try{
            if(i==0)
            throw i;
            if(x%i!=0 )
            throw i;
            if(x/i>=10 && x/i <=100) throw string("The Result is between 10 and 100");
            
        cout << "[CPP_EXCEPTION HANDLING]  Result of "<<x<<"/"<<i << " is " << x/i <<"\n";
        }
    
        catch(int error){
            if(error==0) 
            {cout << "[CPP_EXCEPTION HANDLING]  Devisor is "<< error <<", please pass correct Values\n";}
            else{
            cout << "[CPP_EXCEPTION HANDLING]  "<< error << " is Not a devisor of "<< x << "\n";}
        }
        catch(string error ){
            cout << "[CPP_EXCEPTION HANDLING] The Value of Deisor is "<<  i <<" and " <<error<<"\n";
        }
    }
}

void ExceptionClass::arr_average(vector<int> ex_vec){
    int sum =0;
    for(int i:ex_vec){
        try{
        sum+=i;
        if(sum==0) throw string("[CPP_EXCEPTION HANDLING] The Sum is Zero At this time\n");
        if(sum>1000 && sum<1500)throw string("[CPP_EXCEPTION HANDLING] The Sum is Greater than 1000 and less than 1500 At this time\n");
        if(sum>1500)throw i;
            
        }
       
        catch(string Notify)
        {
            cout << Notify;
            }
        catch(...){
            cout << "[CPP_EXCEPTION HANDLING] None of the Matched conditions arised So, Generic exception handlers called At this time\n";
        }
    }

}
void ExceptionClass::Exceptions(){
    cout << "[CPP_EXCEPTION HANDLING]   Exception Handler Function is called \n";

}

void MainClass::Exception(){
    ExceptionClass obj;
    obj.Exceptions();
    obj.Subtraction(obj.x);
    obj.arr_average(obj.ex_vec);
}