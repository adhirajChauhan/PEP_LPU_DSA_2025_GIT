//Classes and objects
#include<iostream>
using namespace std;

class Car{
    //Attributes -> data members -> var
    public:
    string color;
    int speed;

    int price;


    Car(){
        cout << "This is from Constructor method" << endl;        
    }

    //Behaviours -> member functions -> func
    void boostUp(){

    }

};
 
int main()
{
    Car car1;
    car1.color = "Black";
    car1.speed = 100;

    car1.boostUp();

    // cout << car1.price <<endl;


    Car car2;
    car2.color = "Red";
    // cout << car2.color << endl;
}