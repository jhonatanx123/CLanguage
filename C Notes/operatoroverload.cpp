#include <iostream> 

class MySum {
    public:
        int var;
        MySum(){};
        MySum(int a ) : var(a) {}

        MySum operator + (MySum &obj) {
            MySum reobj;
            reobj.var = this
        }
        
}