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

void append(Node* head, int value){                            
    Node* newNode = new Node(value);
    Node* temp = head;                                         
    
    if(head==NULL){
        head=newNode;                                        
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
    append(head, 5);
    append(head, 4);
    append(head, 6);
    append(head, 2);
    printList(head);
    return 0;
}