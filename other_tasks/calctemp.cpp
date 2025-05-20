#include<iostream>

using namespace std;

template<typename T>
class calc{

    public:
    T add(T a , T b){return a+b;}
    T sub(T a , T b){return a-b;}
    T mult(T a , T b){return a*b;}
};

int main (){

    calc<int> intcalc;
    cout<<"int ADD : "<< intcalc.add(5,6)<< endl;

    calc<float> flcalc;
    cout<<"float mult : "<< flcalc.mult (5.6 , 4.4)<< endl;
}
