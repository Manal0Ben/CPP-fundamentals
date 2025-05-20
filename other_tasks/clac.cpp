#include<iostream>
#include<unordered_map>

using namespace std;


int main(){
    unordered_map<string , int> op {
        {"+", 1} , {"-" , 2} , {"*" , 3} , {"/" , 4}
    };

    int num1 , num2;
    string input;
    //take two inputs + take the opration
     cout <<"Enter your equation (please add spaces): ";
     cin >> num1 >>input>> num2 ;
    //make the calculation
    switch (op[input]){
        case 1 :
            num1 = num1 + num2;
            cout << " = "<< num1 ;
            break ;
        case 2 :
            num1 = num1 - num2;
            cout << " = "<< num1 ; 
            break ;
        case 3 :
            num1 = num1 * num2;
            cout << " = "<< num1 ; 
            break ;
        case 4 :
        if (num2 == 0) { 
            cout << "Error: Division by zero is not allowed.\n";
            break;
        } 
        else {
            num1 = num1 / num2;
            cout << " = "<< num1 ; 
            break ;
        }
        default:
        cout<< "your equation is wrong! \n";
    }
   return 0 ;
}