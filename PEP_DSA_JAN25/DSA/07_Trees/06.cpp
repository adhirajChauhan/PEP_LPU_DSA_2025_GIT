#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int key;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* minValue(Node* root){
    Node* temp  = root;
    while(temp->left != NULL){
        temp=temp->left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    if(root == NULL) return root;

    if(root->data == val){

        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }


        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child

        //either find max from LST or min form RST
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right)->data;
            //replacing the value
            root->data = mini;

            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
}


// https://www.geeksforgeeks.org/problems/check-for-bst/1
// Check for BST
// class Solution {
//   public:
  
//   bool isBST(Node* root, int min, int max){
//       if(root==NULL) return true;
      
//       if(root->data > min && root->data < max){
//           bool left = isBST(root->left, min, root->data);
//           bool right = isBST(root->right, root->data, max);
//           return left && right;
//       }
//       else return false;
//   }
//     // Function to check whether a Binary Tree is BST or not.
//     bool isBST(Node* root) {
//         return isBST(root, INT_MIN,INT_MAX);
//     }
// };


 
int main()
{

}