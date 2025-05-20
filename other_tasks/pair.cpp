#include<iostream>

using namespace std;

template <typename T1 ,typename T2>
class Pair{
    private:
    T1 first ;
    T2 second ;
    public:
    Pair(T1 f, T2 S) : first(f) , second(S) {};
    ~Pair(){cout << "pair removed"<< endl; }

    virtual void display ()
    {
            cout <<"first : "<< first << " , second: "<< second << endl;
    }

};

int main (){

    Pair<int , string> p1(1,"apple");
    p1.display();

}

