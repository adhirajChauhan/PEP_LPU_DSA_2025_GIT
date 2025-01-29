#include<iostream>
using namespace std;

bool isValid(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
        return true;
    }
    return false;
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome(char arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        if(arr[start] != arr[end]) return false;
        else{
            start++;
            end--;
        }
    }
    return true;
}
 
int main()
{
 
}