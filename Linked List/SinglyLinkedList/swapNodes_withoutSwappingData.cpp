#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
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
}

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

void swapElements(Node** head, int x, int y){
    Node* swap1=*head;
    Node* swap2=*head;
    Node* temp1=NULL;
    Node* temp2=NULL;
    
    
    if(x==y)
        return;

    while(swap1!=NULL && swap1->data!=x){
        temp1=swap1;
        swap1=swap1->next;
    }
    
    while(swap2!=NULL && swap2->data!=y){
        temp2=swap2;
        swap2=swap2->next;
    }
        
    if(swap1==NULL || swap2==NULL)
        return;
    
    if(temp1==NULL)
        *head=swap2;
    else
        temp1->next=swap2;
        
    if(temp2==NULL)
        *head==swap1;
    else    
        temp2->next=swap1;
    
    temp1=swap1->next;
    swap1->next=swap2->next;
    swap2->next=temp1;
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
    swapElements(&head, 1, 2);
    printList(head);
    return 0;
}