#include <iostream>

using namespace std ;

class book{
    private:
        string Name ;
        string Author;
        int YearPub;
    public:
       book(){
        Name = "not named yet";
        Author = "no author";
        YearPub = 0000 ;
        cout << "book created \n"; //* to show that the book is created 
       }

       book (string name , string author , int year){
        Name = name ;
        Author = author;
        YearPub = year ;
        cout << "the book ("<< Name<< ") is written by " << Author << " in " << YearPub << "\n"; //* so we can see the edit that happened
       } 

};

int main (){

    book b1 ;
    book b2 = book ("C++ fundamentals" , "L.Halterman" , 2018);

    return 0;
   }