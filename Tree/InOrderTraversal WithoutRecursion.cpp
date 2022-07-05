#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *left, *right;
    Node (int data){
        this->data = data;
        left = right = NULL;
    }
};
 
void inOrder(Node *root){
    stack<Node *> s;
    Node *curr = root;
 
    while (curr != NULL || s.empty() == false){                  
        while (curr !=  NULL){                                    // Reach the left most Node of the curr Node
            s.push(curr);                                         // Push curr node to stack
            curr = curr->left;
        }

        curr = s.top();                                           // Point to curr node at top in stack
        s.pop();                                                  // POP the curr
        cout << curr->data << " ";                                
        curr = curr->right;                                       // we have visited the node and its left subtree.  Now, it's right subtree's turn
 
    }
}
 
int main(){
    Node *root        = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
 
    inOrder(root);
    return 0;
}
