#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

void insertEnd(Node** head, int val){
    Node* newNode=new Node(val);
    Node* temp = *head;

    if(*head==NULL){
        *head=newNode;
        return;
    }

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    newNode->prev=temp;
    
}

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

void sortedInsert(Node** head, int val){
    Node* temp=*head;
    Node* newNode=new Node(val);
    if(*head==NULL){
        *head=newNode;
        newNode->next=*head;
        return;
    }
    
    if(val<temp->data){
        newNode->next=temp;
        *head=newNode;
        temp->prev=newNode;
        return;
    }

    if(temp->next==NULL){
        temp->next=newNode;
        newNode->prev=temp;
        return;
    }

    while(temp->next->next!=NULL && temp->next->data<=val)
        temp=temp->next;

    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 5);
    insertEnd(&head, 6);
    printList(head);
    sortedInsert(&head, 0);
    printList(head);
    return 0;
}