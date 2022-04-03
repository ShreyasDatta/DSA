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

void splitList(Node** head){
    Node* temp1=*head;
    Node* temp2=*head;
    Node* head1=*head;
    Node* head2=NULL;

    while(temp2->next!=*head && temp2->next->next!=*head){
        temp1=temp1->next;
        temp2=temp2->next->next;
    }
    if(temp2->next!=*head)
        temp2=temp2->next;

    head2=temp1->next;
    temp1->next=head1;
    temp2->next=head2;
    
    printList(head1);
    printList(head2);
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);
    insertEnd(&head, 6);
    insertEnd(&head, 7);
    insertEnd(&head, 8);
    insertEnd(&head, 9);
    insertEnd(&head, 10);
    printList(head);
    splitList(&head);
    return 0;
}