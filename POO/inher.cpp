//! Inheritance: parent class and child classes

#include<iostream>
using namespace std ;

class abstractEmployee{
    virtual void askForPromotion() = 0; // this abstraction have one rule which is this virtual func right here
};

//* this down here is a class
class Employee{
    private:
    //? the infos here are private and cant be accessed outside the class

    string company ;
    int age ;
    
    protected:
    string name ; //! here this propretie can be accessed directly in the child classes
    public: 
    //? what is under "public" it can be accessed outside the class

   //* this is a setter
    void setName ( string NAME){
        name = NAME;
    } 
    //* this is a gette
    string getName ( ){
        return name ;
    } 

    void setAge ( int AGE){ //! in setters also we can do conditions to accept the proprtie or not
        if(AGE >= 18) age = AGE;
    }
    int getAge (){
        return age ;
    }
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

class Developer : public Employee{ //* here the class "developer" is the sub/child of "Employee" class where its the parent class
   //! and adding the public modifier next to our parent class "Employee" , that will allow us using the abstructions that we used b4 in the parent class (in this case is the "askForPromotion" abst)

    public:
    string devLanguage;
    //* and here we creat a constructor since the parent class has it own constructor
    Developer (string Name , string Company , int Age , string lang): Employee( Name , Company , Age){
        devLanguage = lang ;
    }

    void madeProject (){
        cout << name << " made a project using "<< devLanguage<<"\n" ; // here the " name" is accessed directly
    }
};

int main (){
    Developer D1 = Developer("james" , "google" , 34 , "java");
    D1.madeProject();
    D1.askForPromotion();

    return 0 ;
    // this code is working just fine too !
}

//!!!!! if I use the modefire "protected" for a propretie in the class "Employee" -for exmple-,
//!that "protected" propretie will be accessed directly in the child classes as well