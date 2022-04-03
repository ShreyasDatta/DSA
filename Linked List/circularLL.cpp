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

void insertBegning(Node** head, int val){
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
    *head=newNode;  
}

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

void insertBetween(Node** head, int pos, int val){
    Node* temp=*head;
    Node* newNode=new Node(val);

    if(pos<2){
        insertBegning(head, val);
        return;
    }

    for(int i=0;i<pos-2;i++)
        temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(Node** head, int pos){
    Node* temp=*head;
    Node* toDelete=*head;

    for(int i=0;i<pos-2;i++)
        temp=temp->next;
    
    toDelete=temp->next;
    temp->next=temp->next->next;
    free(toDelete);
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

int main(){
    Node* head=NULL;
    
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    printList(head);
    insertBegning(&head, 4);
    printList(head);
    insertBetween(&head, 2, 8);
    printList(head);
    deleteNode(&head, 3);
    printList(head);
    return 0;
}