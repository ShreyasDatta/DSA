#include<iostream>
using namespace std;

class Stack{
    public:
        int data;
        Stack* next;

        Stack(int x){
            data=x;
            next=NULL;
        }
};

bool isEmpty(Stack** root){
    return(*root==NULL);
}

void push(Stack** root, int val){
    Stack* newNode = new Stack(val);

    newNode->next=*root;
    *root=newNode;
}

void pop(Stack** root){
    Stack* temp=*root;
    Stack* toDelete=NULL;

    if(*root==NULL){
        cout<<"Stack empty"<<endl;
        return;
    }

   temp=*root;
   *root=(*root)->next;
   free(temp);
}

void printStack(Stack* root){
    Stack* temp=root;
    if(root==NULL){
        cout<<"Stack empty"<<endl;
        return;
    }
    cout<<"Stack elements are: ";
    while(root!=NULL){
        cout<<root->data<<" ";
        root=root->next;
    }
    cout<<endl;
}

int main(){
    Stack* root=NULL;

    push(&root, 1);
    push(&root, 2);
    push(&root, 3);
    push(&root, 4);
    printStack(root);

    pop(&root);
    pop(&root);
    printStack(root);

    push(&root, 8);
    printStack(root);
}