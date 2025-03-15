//!  destructors: just delete or clean the the class once we dont need it 

//ChatGBT's code

#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Constructor (runs when object is created)
    Car(string carBrand) {  
        brand = carBrand;
        cout << brand << " car created!" << endl;
    }

    // Destructor (runs when object is deleted)
    ~Car() {  
        cout << brand << " car destroyed!" << endl;
    }
};

int main() {
    Car car1("Toyota");  // Constructor is called

    {
        Car car2("BMW");  // Constructor is called for BMW
    } //BMW is destroyed here (Destructor is called)

    return 0;  
} //Toyota is destroyed here (Destructor is called)
