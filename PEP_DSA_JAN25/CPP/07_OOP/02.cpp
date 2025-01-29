//Constructor

#include<iostream>
using namespace std;

class Room{
    public:
    int height;
    int width;

    Room(){
        cout << "From defalult constructor " << endl;
    }

    Room(int h){
        cout << "From one param constructor " << endl;

    }

    Room(int height, int width){
        cout << "From two param constructor " << endl;

        this->height = height;
        this->width = width;
    }

    Room(Room &obj){
        cout << "From copy constructor " << endl;

        this->height = obj.height;
        this->width = obj.width;
    }

    ~Room(){
        cout << "This is a destructor" << endl;
    }

};
 
int main()
{
    Room r1(3,5);
    //  cout << r1.height << endl;


    // Room r2(r1);
    Room r2 = r1;

    cout << r2.height << endl;
}