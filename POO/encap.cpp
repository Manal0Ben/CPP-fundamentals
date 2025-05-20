//!encapsulation in CPP : we use encapsulation so whoever wants to access my class proprety needs to go through certan rules to use them

//we will use the same class we had in (classes.cpp) file , but we are gonna edit it
#include<iostream>
using namespace std ;

//* this down here is a class
class Employee{
    private:
    //? the infos here are private and cant be accessed outside the class

    string name ;
    string company ;
    int age ;

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
};

int main(){
    Employee emp1 = Employee( "MANAL" , "uni de djelfa" , 19);

    emp1.setName("lina"); //here we changed the name using setter we made b4
    emp1.setAge(12); //for exp here , the age "12" didnt save cuz its under age
    cout <<emp1.getName() << " is " << emp1.getAge() << " years old. \n";
    
    return 0 ;
}