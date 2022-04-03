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
    Node* temp1=*head;
    Node* temp2=temp1;
    Node* toDelete;

    while(temp1->next!=NULL){
        while(temp2->next!=NULL){
            if(temp1->data==temp2->next->data){
                toDelete=temp2->next;
                temp2->next=temp2->next->next;
                if(temp2->next->next!=NULL)
                    temp2->next->prev=temp2;
                free(toDelete);
            }
            else   
                temp2=temp2->next;
        }
        temp1=temp1->next;
        temp2=temp1;
    } 
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 2);
    insertEnd(&head, 9);
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