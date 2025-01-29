//Encapsulation
#include<iostream>
using namespace std;

//it is defined as binding together the data members and member functions.

//we cannot access anu data or function from the class directly.
//this will increase the security of the data.
//this will also help to control the modification of our data memebers

class Encapsulation{

    private:
    int salary;

    public:
    Encapsulation(int val){
        salary = val;
    }

    // getter
    int getSalary(){
        return salary;
    }

    //setter
    void setSalary(int amount){
        salary = amount;
    }

};
 
int main()
{
    Encapsulation e1(1000);

    cout << e1.getSalary() << endl;

    e1.setSalary(2000);

    cout << e1.getSalary() << endl;
}