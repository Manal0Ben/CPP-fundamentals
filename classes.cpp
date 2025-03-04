#include<iostream>

using std :: string;
using namespace std ;
//* this down here is a class
class Employee{
    public: //* this is a modifier access , using public will allow u to use what is inside the class outside it
    string name ;
    string company ;
    int age ;

    //* now lets make a function to print the content of our class
    void intrduceME(){
        cout<< "Name : " << name << "\n";
        cout<< "Company : " << company << "\n";
        cout<< "Age : " << age << "\n";
    }
};

int main (){
   Employee emp1;
   emp1.name="larry";
   emp1.company="jobless";
   emp1.age = 34;

   emp1.intrduceME();

   //* in general if I declare somthing with my class its automaticlly filled with constructor
   
   
}