/*Inorder traversal
First, visit all the nodes in the left subtree
Then the root node
Visit all the nodes in the right subtree

Preorder traversal
Visit root node
Visit all the nodes in the left subtree
Visit all the nodes in the right subtree

Postorder traversal
Visit all the nodes in the left subtree
Visit all the nodes in the right subtree
Visit the root node*/

#include <iostream>
using namespace std;

struct Node {                                         //Defining new node
  int data;
  struct Node *left, *right;
  
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// Inorder traversal
void inorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);                        // first recur on left child
  cout << node->data << "->";                          // then print the data of node
  inorderTraversal(node->right);                       // now recur on right child
}

// Preorder traversal
void preorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  cout << node->data << "->";                         // first print data of node 
  preorderTraversal(node->left);                      // then recur on left subtree
  preorderTraversal(node->right);                     // now recur on right subtree
}

// Postorder traversal
void postorderTraversal(struct Node* node) {
  if (node == NULL)
    return;

  postorderTraversal(node->left);                      // first recur on left subtree
  postorderTraversal(node->right);                     // then recur on right subtree
  cout << node->data << "->";                          // now deal with the node
}


int main() {
  struct Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);

  cout << "Inorder traversal ";
  inorderTraversal(root);

  cout << "\nPreorder traversal ";
  preorderTraversal(root);

  cout << "\nPostorder traversal ";
  postorderTraversal(root);
  
  return 0;
}