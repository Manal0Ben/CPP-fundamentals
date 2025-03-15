#include <iostream>

int main(){
    //! using this will allow us use the "std" thingy without rewiting it every single time

    using namespace std;

    //*what is next is how to print a sentence

    cout << "hello world\n"; 
    //? all this is a statement

    //*types of ver in CPP are the same in C (ig?)
    int a = 1, b= 2 ; double pi = 3.14 ; float c = 12345678 ;
 
    //* in CPP this is how to declare a constant
    const char you[] = "IK who are u" ;
    

    //* mathematical expressions (like : + - * / % )
    a = a + b ;
    std :: cout << a ;

    //! watchout in this case:
    int X = 10;
    int Y = X++ ; //* here X=11 but Y = 10 

    //* but if we do this :
    int W = ++X;
    Y = W ; //* here Y = 11

    //* now to print multi vars in the terminal we can do :

    cout << "\nY = " << Y <<" , "<< "W = " << W;
    return 0 ;
}
 