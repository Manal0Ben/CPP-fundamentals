#include<iostream>

using namespace std ;

class employee {
    protected:
    string Name ;
    int ID ;
    int Salary;

    public:
    employee(string name , int id , int salary){
        Name = name ; ID = id ; Salary = salary;
        cout << "employee have been added !\n";
    }
    ~employee(){
        cout <<"employee have been deleted\n ";
    }

    virtual void display(){
        cout <<"name : "<<Name << " , ID : "<< ID <<" , salary: "<< Salary << "$ per month\n";
    } 

};

class manager : public employee{
   private:
   int TeamSize ;

   public:
   manager (string name , int id , int salary , int teamSize )
   :employee( name , id , salary){
    TeamSize = teamSize;
    cout << "manager have been created\n";
   }
   ~manager ( ){
    cout << " manager have been deleted\n";
   }

   void display(){
    cout <<"name : "<<Name << " , ID : "<< ID <<" , salary: "<< Salary << "$ per month , team size :" <<TeamSize<< "\n";
} 
   
};

int main(){

    employee* e = new employee("larry", 123 , 300);
    manager* m = new manager("maria" , 321 , 1000 , 6);

    e->display();
    m->display();

    delete e ;
    delete m ;

    return 0 ; 
}