#include "My_App.h"

using namespace std;

namespace fun_temp {
class Fun_TempClass : public MainClass{

    private:

    public:
    //Function Template Declaration
    template<typename T>
    T mymax(T x, T y);
    
    template <typename AR,  size_t N>
    AR arr_max(AR (&arr)[N]);

    Fun_TempClass();
    ~Fun_TempClass();
};
}
namespace class_temp {
    template<class T>
    class Cls_TempClass : public MainClass{
        private:
        T no_people;
        T budget;
        T demand;
        public:
        void Init_Values(T x, T y, T z);
        
        void Updated_Values();
    
        Cls_TempClass(T x, T y, T z);
        ~Cls_TempClass();
    };
    }