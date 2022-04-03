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

void deleteOccurance(Node** head, int key){
    Node* curr=*head;
    Node* previous;
    Node* toDelete;

    while(curr->next!=NULL){
        if(curr->data==key){
            if(curr==*head){
                toDelete=curr;
                *head=curr->next;
                curr->next->prev=NULL;
                free(curr);
                curr=*head;
            }
            else{
                
            }
            toDelete=curr;
            previous=curr;

        }
    }
        
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
    deleteOccurance(&head, 1);
    printList(head);
    return 0;
}