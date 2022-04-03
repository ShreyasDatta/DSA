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

void insertBegning(Node** head, int value){
    Node* temp=*head;
    Node* newNode=new Node(value);
    
    if(*head==NULL){
        *head=newNode;
        return;
    }

    newNode->next=*head;
    *head=newNode;
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

//insert in between
void insertBetween(Node** head, int pos, int value){
    Node* temp=*head;
    Node* newNode = new Node(value);

    if(pos<2){
        insertBegning(head, value);
        return;
    }

    for(int i=0; i<pos-2; i++)
        temp=temp->next;
    
    newNode->next=temp->next;
    temp->next=newNode;
}

//delete a node
void deleteNode(Node** head, int pos){
    Node* temp=*head;
    Node* ptr;
    if(*head==NULL)
        return;

    if(pos<2){
        ptr=*head;
        *head=temp->next;
        free(ptr);
        return;
    }

    for(int i=0; i<pos-2; i++)
        temp=temp->next;
    ptr=temp->next;
    temp->next=temp->next->next;
    free(ptr);
    return;
}

//reverse list
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

//print list
void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

//Print Middle element
void printMiddle(Node** head){
    Node* temp1=*head;
    Node* temp2=*head;
   
   while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp2->next!=NULL)
            temp2=temp2->next;
   }
    cout<<"Middle element is: "<<temp1->data<<endl;
}

//Move last element to fornt
void moveLastToFront(Node** head){
    Node* temp=*head;

    if(*head==NULL || temp->next==NULL)
        return;
    
    while(temp->next->next!=NULL)
        temp=temp->next;
    
    temp->next->next=*head;
    *head=temp->next;
    temp->next=NULL;
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);
    printList(head);
    detectLoop(&head);
    
    return 0;
}