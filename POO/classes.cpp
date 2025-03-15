#include<iostream>

using std :: string;
using namespace std ;
//* this down here is a class
class Employee{
    public: /*<<< this is a modifier access , using public will allow u to use what is inside the class outside it
    and using private means u cant use the proprties outside the class*/
    string name ;
    string company ;
    int age ;

    //* now lets make a function to print the content of our class
    void intrduceME(){
        cout<< "Name : " << name << "\n";
        cout<< "Company : " << company << "\n";
        cout<< "Age : " << age << "\n";
    }

    //todo: we call this down here a constructor!!!
    //! constructors has three rules : it has no type return , it needs to be public , and it has to be the same name as the class
    //! and fun fact : every class has a defult constructor but once u make urs u lose the defult one

    Employee(string Name , string Company , int Age){
        Name = name ;
        Company = company;
        Age = age ;
    }
};

int main (){
   Employee emp1 = Employee( "larry" , "jobless" , 35); //*here is how we use the constructor
   

   emp1.intrduceME();
   //* in general if I declare something with my class its automaticlly filled with constructor (whicis random data till modified)
      
}