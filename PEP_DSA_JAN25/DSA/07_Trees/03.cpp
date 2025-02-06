#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

int sumAtK(Node* root, int k){
    if(root==NULL) return -1;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    int level = 0;
    int sum = 0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node!=NULL){
            if(level == k){
                sum+=node->data;
            }
            if(node->left) q.push(node->left);

            if(node->right) q.push(node->right);
        }

        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }

    return sum;

}

int countNodes(Node* root){
    if(root == NULL) return 0;

    // int lc = countNodes(root->left);
    // int rc = countNodes(root ->right);

    // return lc + rc + 1;

    return countNodes(root->left) + countNodes(root->right) + 1;
}


int sumOfNodes(Node* root){
    if(root==NULL) return 0;

    // int ls = sumOfNodes(root->left);
    // int rs = sumOfNodes(root->right);
    // return ls + rs + root->data;

    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}
 
int calculateHeight(Node* root){
    if(root == NULL) return 0;

    int lh = calculateHeight(root->left);
    int rh = calculateHeight(root->right);

    return max(lh,rh) + 1;
}

void rightView(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
    //we will not add null in queue, we will calculate the size of the queue and check how many modes are stored and traverse over it
    int n = q.size();
    for(int i = 0; i < n;i++){
        //creating a curr pointer that will start from the fromt of queue
        Node* curr = q.front();
        q.pop();

        //when we will reach at last node
        if(i == n-1){
            cout << curr->data << " ";
        }

        //then we will go on left and right of current node
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

    }
}

int main()
{
     Node* root = new Node(1);

    root->left =new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right =  new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->left->left = new Node(9);

    // cout << sumAtK(root, 2);

    // cout << countNodes(root);
    // cout << sumOfNodes(root);
    // cout << calculateHeight(root);
    rightView(root);
}