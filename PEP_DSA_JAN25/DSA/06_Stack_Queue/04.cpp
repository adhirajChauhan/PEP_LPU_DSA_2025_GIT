#include<iostream>
#include<stack>
using namespace std;
 
bool isValid(string s){
    stack<char> st;

    bool ans = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }

        else if(s[i] == ')'){
            if(st.top() == '(' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '{' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }

        else if(s[i] == ']'){
            if(st.top() == '[' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    return ans;
} 
int main()
{
    string str = "";
    if(isValid(str)){
        cout << "Valid" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
}