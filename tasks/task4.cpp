//solution of task 4

#include<iostream>

using namespace std;

class Car {
    private:
    string Brand; 
    string Model;
    int Year;
    
    public:

    Car(string brand ,string model ,int year){
        Brand = brand;
        Model = model;
        Year = year ;
    }
    //making setters
    void setBrand (string brand){
        Brand = brand ;
    }
    void setModel( string model){
        Model = model;
    }
    void setYear( int year){
        Year = year ;
    }

    //making getters
    string getBrand(){
        return Brand;
    }
    string getModel(){
        return Model;
    }
    int getYear(){
        return Year;
    }

    void displayInfos(){
        cout << "the car's brand ("<<Brand << ") , the model : " << Model << " , year :" << Year << "\n";
       }


};

int main(){
    Car car1 = Car( "Toyota" , "Corolla" , 1966 );
    car1.displayInfos();

    car1.setBrand("Ford");
    car1.setModel("Mustang");
    car1.setYear(1964);

    cout <<"the car (edited) : "<< car1.getBrand() << " , "<< car1.getModel() << " , "<< car1.getYear();
    return 0;
}