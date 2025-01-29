#include<iostream>
using namespace std;

void test(int &num){
    ++num;
    cout << "num value in test : " << num << endl;
}
 
int main()
{
    int num;
    cin >> num;

    test(num);

    cout << "Final output : " << num << endl;
}