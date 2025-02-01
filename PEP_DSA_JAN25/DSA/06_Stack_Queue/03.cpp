#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){

    stack<string> st;

    for(int i = 0; i < s.length(); i++){
        //intil we get aspace char, we will keep adding to word

        string word = "";
        while(s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }

        st.push(word);
    }

    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    
}
 
int main()
{
 
    string str = "Hello, how are you?";

    reverseSentence(str);

}