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

void reverseList(Node** head){
    if(*head!=NULL){
        Node* current = *head;
        Node* nxt=NULL;
        Node* prev=NULL;
        while(current!=NULL){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        *head=prev;
    }
}

void insertEnd(Node** head, int value){                            
    Node* newNode = new Node(value);
    Node* temp = *head;                                         
    
    if(*head==NULL){
        *head=newNode;                                        
        return;
    }
    
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    return;
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
    insertEnd(&head, 5);
    insertEnd(&head, 4);
    insertEnd(&head, 6);
    insertEnd(&head, 2);
    printList(head);
    reverseList(&head);
    printList(head);
    return 0;
}