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

void sortedinsert(Node** head, int val){
    Node* temp=*head;
    Node* newNode=new Node(val);

    while(temp->next->data<val && temp->next!=*head)
        temp=temp->next;
    
    if(temp->next==*head){
        newNode->next=*head;
        temp->next=newNode;
        return;
    }

    if(temp==*head){
        while(temp->next!=*head)
            temp=temp->next;
        newNode->next=*head;
        *head=newNode;
        temp->next=*head;
        return;
    }

    newNode->next=temp->next;
    temp->next=newNode;
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
    sortedinsert(&head, 7);
    printList(head);
    return 0;
}