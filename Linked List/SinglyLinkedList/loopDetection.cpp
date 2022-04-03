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

//detect loop
void detectLoop(Node** head)
{
    Node *slow_p = *head, *fast_p = *head;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            cout<<"Loop detected"<<endl;
        }
    }
     cout<<"Loop not detected"<<endl;
}

//remove loop
void removeLoop(Node** head)
{
    Node *slow_p = *head, *fast_p = *head;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            cout<<"Loop detected"<<endl;
        }
    }
     cout<<"Loop not detected"<<endl;

     fast_p=*head;
     while(fast_p->next!=slow_p->next){
         fast_p=fast_p->next;
         slow_p=slow_p->next;
     }
     slow_p->next=NULL;
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