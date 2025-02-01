// Reversing a Queue
// https://www.naukri.com/code360/problems/reversing-a-queue_982934?leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h> 
// queue<int> reverseQueue(queue<int> q)
// {
//     //create a stack
//     stack<int> st;

//     //take out element from queue and push in stack
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         st.push(element);
//     }

//     while(!st.empty()){
//         int element = st.top();
//         st.pop();
//         q.push(element);
//     }

//     return q;
// }

#include<iostream>
#include<queue>
using namespace std;

//reverse first k elements of queue
// i/p -> 10 6 8 12 3
// o/p -> 6 10 8 12 3 (if k = 2)

queue<int> kReverseQueue(queue<int> q, int k){
    //create a stack

    //pop k element from q and push in stack

    //pop all elements from stack and push back in q again

    //run a loop for n-k elements, pop them from q and push them back in queue
}

// Delete middle element from stack
// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTabValue=PROBLEM
// #include <bits/stdc++.h> 

// void deleteFromStack(stack<int>&inputStack, int count, int size){
//    if(inputStack.empty() || count == size/2){
//       inputStack.pop();
//       return;
//    }

//    int temp = inputStack.top();
//    inputStack.pop();

//    deleteFromStack(inputStack,count + 1, size);

//    inputStack.push(temp);


// }

// void deleteMiddle(stack<int>&inputStack, int N){
// 	int count = 0;
//    deleteFromStack(inputStack, count, N);
   
   
// }
 
int main()
{
 
}