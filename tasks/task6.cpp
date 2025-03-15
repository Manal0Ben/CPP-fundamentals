#include<iostream>

using namespace std ;

class student {
    private:
    string Name;
    int Age , Mark;

    public:

    void setName (string name){
        cout <<"enter the name : \n";
        cin >> name ;
        Name = name;
    }
    void setAge (int age){
        cout << "enter the age : \n";
        cin >> age;
        Age = age;
    }
    void setMark (int mark){
        cout << "enter the mark : \n";
        cin >> mark ;
        if(mark <= 20){ // here to make sure the mark is less of equal to 20
        
            Mark = mark;
        }
        else cout<<"mark is inccorect";
    }

    string getName(){
        return Name ;
    }
    int getAge(){
        return Age ;
    }
    int getMark(){
        return Mark;
    }

    void displayInfos(){
        cout << "name : "<<Name<< ", age: "<<Age<<" , mark : "<<Mark<<"/20" ;
    }
};

int main (){
    string name ; 
    int age , mark ;
    student S1;

    S1.setName(name);
    S1.setAge(age);
    S1.setMark(mark);

    S1.displayInfos();

    return 0;
}

