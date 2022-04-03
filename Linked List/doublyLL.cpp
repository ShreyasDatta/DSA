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

void insertBegning(Node** head, int val){
    Node* newNode=new Node(val);

    newNode->next=*head;
    if(*head!=NULL)
        (*head)->prev=newNode;
    
    *head=newNode;
}

void insertbetween(Node** head, int pos, int val){
    Node* newNode=new Node(val);
    Node* temp=*head;

    if(pos<2){
        insertBegning(head, val);
        return;
    }

    for(int i=0;i<pos-2; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next->prev=newNode;
    
}

void deleteNode(Node** head, int pos){
    Node* temp=*head;
    Node* toDelete=*head;

    if(pos<2){
        toDelete=temp;
        temp=temp->next;
        temp->prev=NULL;
        *head=temp;
        free(toDelete);
        return;
    }

    for(int i=0;i<pos-2;i++)
        temp=temp->next;

    toDelete=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    free(toDelete);

}

void reverseList(Node** head){
    if(*head!=NULL){
        Node* current=*head;
        Node* nxt=NULL;
        Node* previous=NULL;

        while(current!=NULL){
            nxt=current->next;
            current->prev=nxt;
            current->next=previous;

            previous=current;
            current=nxt;
        }
        *head=previous;
    }
}

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

void printRev(Node** head){
    Node* temp=*head;
    cout<<"Reversed Linked list is: ";
    
    while(temp->next!=NULL){
        temp=temp->next;
    }

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    
    cout<<"\n";
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 5);
    insertEnd(&head, 4);
    insertEnd(&head, 3);
    insertEnd(&head, 2);
    printList(head);
    insertBegning(&head, 1);
    printList(head);
    insertbetween(&head, 3, 8);
    printList(head);
    deleteNode(&head, 3);
    printList(head);
    printRev(&head);
    reverseList(&head);
    printList(head);
    return 0;
}