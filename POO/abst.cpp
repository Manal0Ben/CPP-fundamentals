//! abstraction : we use it When you want to hide complex logic from the user or When you need a common interface for multiple related classes

//* using the prev class

#include<iostream>
using namespace std ;

class abstractEmployee{
    virtual void askForPromotion() = 0; // this abstraction have one rule which is this virtual func right here
};

class Employee : abstractEmployee{
    private:
    //? the infos here are private and cant be accessed outside the class

    string name ;
    string company ;
    int age ;

    public: 
    //? what is under "public" it can be accessed outside the class


    //* now lets make a function to print the content of our class
    void intrduceME(){
        cout<< "Name : " << name << "\n";
        cout<< "Company : " << company << "\n";
        cout<< "Age : " << age << "\n";
    }

    //* we call this down here a constructor
    Employee(string Name , string Company , int Age){
        name = Name;
        company = Company;
        age = Age ;
    }

    void askForPromotion(){
        if (age > 35)
        cout << name << " , you have been promoted ! :D \n";
        else 
        cout << name << " , we are sorry :( no prmotion for you buddy \n";
    }
};

int main (){
    Employee emp1 = Employee("manal" , "uni of djelfa", 19);
    Employee emp2 = Employee ("larry" , "IT company", 45);

    emp1.askForPromotion();
    cout << "\n";
    emp2.askForPromotion();

    return 0 ;

    // and this code worked too , yipeee!
}