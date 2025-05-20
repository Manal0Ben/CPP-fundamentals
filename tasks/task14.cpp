#include<iostream>

using namespace std ;

class animal {
    protected:
    string Name ;
    int Age ;

    public:
    animal(string name , int age){
        Name = name ; ; Age = age;
        cout << "animal have been added !\n";
    }
    ~animal(){
        cout <<"animal have been deleted\n ";
    }

    virtual void display(){
        cout <<"name : "<<Name << " ,age : "<< Age<< "\n";
    } 

    virtual void makeSound (){
        cout << "-animal made a sound-";
    }

};

class dog : public animal{
   public:
   dog (string name , int age ):animal( name ,age){
    cout << "dog have been created :3 \n";
   }
   ~dog ( ){
    cout << "-dog have been deleted\n";
   }

   void display(){
     cout <<"name : "<<Name << " ,age : "<< Age << "\n";
} 
    void makeSound (){
    cout << "BARK-BARK!\n";
}
   
};

class cat : public animal{
    public:
    cat (string name , int age ):animal( name ,age){
     cout << "cat have been created :3 \n";
    }
    ~cat ( ){
     cout << "-cat have been deleted\n";
    }
 
    void display(){
      cout <<"name : "<<Name << " ,age : "<< Age << "\n";
 } 
 void makeSound (){
     cout << "meow meow !\n";
 }
    
 };

int main(){
    animal* a;
    dog doggy = dog ("max" , 2);
    cat kitty = cat ("lily", 1);

    a = &doggy ;
    a->display();
    a->makeSound();

    a = &kitty;
    a->display();
    a->makeSound();

    delete a ;
    return 0 ; 
}