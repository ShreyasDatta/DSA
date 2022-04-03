#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next=NULL;
        }
};

void insertElement(Node** head, int value, int pos){
    Node* temp=*head;
    Node* newNode = new Node(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

int main(){
    Node* head=NULL;
    insertElement(&head, 5, 2);
    printList(head);
    return 0;
}