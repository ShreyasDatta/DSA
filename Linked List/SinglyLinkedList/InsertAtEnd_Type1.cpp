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

/*head is a pointer of Node type pointing to a pointer head
So here this head is actually pointing to our linkedlist head
to access out linked list head we will write *head everywhere 
as *head contains value of head i.e. address of linked list*/

void append(Node** head, int value){                            
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

void insertElement(Node** head, int value, int pos){
    Node* temp=*head;
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }
    Node* newNode = new Node(value);
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
    append(&head, 5);
    append(&head, 4);
    append(&head, 6);
    append(&head, 2);
    printList(head);
    insertElement(&head, 9, 0);
    printList(head);
    return 0;
}