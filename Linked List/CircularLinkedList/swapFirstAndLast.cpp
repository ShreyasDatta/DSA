#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};

void insertEnd(Node** head, int val){

    Node* temp=*head;
    Node* newNode=new Node(val);

    if(*head==NULL){
        *head=newNode;
        newNode->next=*head;
        return;
    }

    while(temp->next!=*head)
        temp=temp->next;
    temp->next=newNode;
    newNode->next=*head;
}

void printList(Node* head){
    cout<<"The linked list is: ";
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}

void enchangeFirstAndLast(Node** head){
    Node* temp=*head;
    Node *swap=*head;

    if(*head==NULL)
        return;

    if(temp->next->next==*head){
        *head=temp->next;
        temp->next->next=temp;
        temp->next=*head;
        return;
    }

    while(temp->next->next!=*head)
        temp=temp->next;
    
    temp->next->next=swap->next;
    swap->next=temp->next;
    *head=temp->next;
    temp->next=swap;
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 6);
    insertEnd(&head, 7);
    insertEnd(&head, 8);
    printList(head);
    enchangeFirstAndLast(&head);
    printList(head);
    return 0;
}