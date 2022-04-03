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

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

//Method 1: Shift odd to last
/*void segregateOddEven(Node** head){            //Code not working for last node
    Node* curr=*head;                            //last value is not swapping
    Node* previous=NULL;
    Node* last=*head;
    Node* end=NULL;

    if(*head==NULL)
        return;

    while(last->next!=NULL)
        last=last->next;
    end=last;
    
    while(curr!=end){
        if(curr->data%2==0){
            previous=curr;
            curr=curr->next;
        }
        else{
            if(curr==*head){
                previous=curr->next;
                last->next=curr;
                curr=previous;
                *head=curr;
                previous=NULL;
                last=last->next;
                last->next=NULL;
            }
            else{
                last->next=curr;
                curr=curr->next;
                previous->next=curr;
                last=last->next;
                last->next=NULL;
            }
        }
    }
}*/

//Method 2: make a seperate list for odd
/*void segregateOddEven(Node** head){                  //Code not working for last node
    Node* curr=*head;                                //last value is not swapping
    Node* previous=NULL;
    Node* odd=NULL;
    Node* oddHead=NULL;

    if(*head==NULL)
        return;

    while(curr->next!=NULL){
        if(curr->data%2==0){
            previous=curr;
            curr=curr->next;
        }
        else{
            if(oddHead==NULL){
                odd=curr;
                if(curr==*head){
                    curr=curr->next;
                    *head=curr;
                }
                else{
                    previous->next=curr->next;
                    curr=previous->next;
                }
                odd->next=NULL;
                oddHead=odd;
            }
            else{
                odd->next=curr;
                previous->next=curr->next;
                curr=previous->next;
                odd=odd->next;
                odd->next=NULL;
            }
        }
    }
    curr->next=oddHead;
}*/

//Method 3: make seperate list for odd eve both later combine
void segregateOddEven(Node** head){             //Working fine
    Node* odd=NULL;
    Node* oddHead=NULL;
    Node* even=NULL;
    Node* evenHead=NULL;
    Node* curr=*head;

    if(*head==NULL)
        return;
    
    while(curr!=NULL){
        if(curr->data%2==0){
            if(evenHead==NULL){
                even=curr;
                curr=curr->next;
                evenHead=even;
            }
            else{
                even->next=curr;
                curr=curr->next;
                even=even->next;
                even->next=NULL;
            }
        }
        else{
            if(oddHead==NULL){
                odd=curr;
                curr=curr->next;
                oddHead=odd;
            }
            else{
                odd->next=curr;
                curr=curr->next;
                odd=odd->next;
                odd->next=NULL;
            }
        }
    }

    *head=evenHead;
    even->next=oddHead;
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
    insertEnd(&head, 17);
    printList(head);
    segregateOddEven(&head);
    printList(head);
    
    return 0;
}