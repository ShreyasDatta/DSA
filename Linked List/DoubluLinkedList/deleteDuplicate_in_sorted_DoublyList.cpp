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

void removeDuplicate(Node** head){
    Node* temp=*head;
    Node* toDelete;

    while(temp->next!=NULL){
        if(temp->next->data==temp->data){
            toDelete=temp->next;
            if(temp->next->next!=NULL){
                temp->next=temp->next->next;
                temp->next->prev=temp;
            }
            else{
                temp->next=NULL;
            }
            free(toDelete);
        }
        else
            temp=temp->next;
    }

    /*while(temp->next!=NULL){
        while(temp->next->data==temp->data){
            toDelete=temp->next;
            if(temp->next->next!=NULL){
                temp->next=temp->next->next;
                temp->next->prev=temp;
                free(toDelete);
            }
            else{                       //remove this else and code will run
                temp->next==NULL;
                free(toDelete);
                return;                 //why this return trigerring indfinite loop
            }
        }
        temp=temp->next;
    } */
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 2);
    insertEnd(&head, 2);
    insertEnd(&head, 2);
    insertEnd(&head, 5);
    insertEnd(&head, 5);
    insertEnd(&head, 6);
    insertEnd(&head, 6);
    printList(head);
    removeDuplicate(&head);
    printList(head);
    return 0;
}