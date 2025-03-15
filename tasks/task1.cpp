# include<iostream>
# include<memory>

using namespace std;

class book{
private:
    string Name ;
    string Author;
    int YearPub;
public:
   book (string name , string author , int year){
    Name = name ;
    Author = author;
    YearPub = year ;
   } //creating a constructor so i can keep my vars private

   void displayInfos(){
    cout << "the book ("<< Name<< ") is written by " << Author << " in " << YearPub << "\n";
   }

 
};

int main (){
    book B1 = book("C++ fundamentals" , "L.Halterman" , 2018);
    B1.displayInfos();
}