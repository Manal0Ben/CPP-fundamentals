//! SOLUTION OF THE TASK 3 AND 4

//? copied from the prevs task and only added the destructors  
//? could be implemented easily with the "car" example that was given only by changing the names of variables

#include <iostream>

using namespace std ;

class book{
    private:
        string Name ;
        string Author;
        int YearPub;
    public:
       book(){
        cout << "book created \n"; //* to show that the book is created 
       }

       book (string name , string author , int year){
        Name = name ;
        Author = author;
        YearPub = year ;
        cout << "the book ("<< Name<< ") is written by " << Author << " in " << YearPub << "\n"; //* so we can see the edit that happened
       } 
       book (string name , string author ){
        Name = name ;
        Author = author;
        cout << "the book ("<< Name<< ") is written by " << Author << " in " << YearPub << "\n";
       }

     ~book (){
        cout << "book deleted \n";
     }

};

int main (){
    { book b1 ;} 
    book b3 = book ("C++ fundamentals" , "L.Halterman" , 2018);
    book b4 = book ("C++ fundamentals" , "L.Halterman");
    return 0;
   }