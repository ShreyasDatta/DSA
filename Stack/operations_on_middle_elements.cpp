#include<bits/stdc++.h>
using namespace std;

//creating node for stack
class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

//this is the stack data structure
class myStack {
public:
    node* head;
    node* mid;
    int count;
};
 
/* Function to create the stack data structure */
myStack* createMyStack()
{
    myStack* ms = new myStack();
    ms->count = 0;
    return ms;
};

void push(myStack* ms, int val){
    node* newNode=new node(val);

    newNode->next=ms->head;
    ms->count += 1;
          
    if (ms->count == 1)                             //if count is 1 then set it as mid
        ms->mid = newNode;
    else{                                           //or else point 1st node's prev to new node and update head                  
        ms->head->prev=newNode;
        if (!(ms->count & 1)) 
            ms->mid = ms->mid->prev;
        /*if(ms->count%2)                             //if count is even the update mid
            ms->mid=ms->mid->prev;*/
    }

    ms->head=newNode; 
}

void pop(myStack* ms){
    if(ms->count==0){
        cout << "Stack is empty\n";
        return;
    }
    
    node* toDelete=ms->head;                         // reference to old head stored to be deleted
    ms->head=ms->head->next;                         // head become head->next

    /*If linked list doesn't become empty, update prev of new head as NULL*/
    if(ms->head!=NULL)
        ms->head->prev = NULL;

    ms->count-=1;                                    //decrement count

    if ((ms->count) & 1)
        ms->mid = ms->mid->next;
    /*if(ms->count%2==0)                               //if count is even update mid to next
        ms->mid=ms->mid->next;*/

    free(toDelete);
}

void findMiddle(myStack* ms){
    if(ms->count!=0)
        cout<<"Middle element is: "<<ms->mid->data<<endl;
    else
        cout<<"stack is empty"<<endl;
}

void deleteMiddle(myStack* ms){
    if(ms->count==0){
        cout<<"Stack empty"<<endl;
        return;
    }

    node* toDelete=ms->mid;
    ms->mid->prev->next=ms->mid->next;
    ms->mid->next->prev=ms->mid->prev;

    ms->mid=ms->mid->next;
    free(toDelete);
}

int main()
{
    /* Let us create a stack using push() operation*/
    myStack* ms = createMyStack();
    push(ms, 11);
    findMiddle(ms);
    push(ms, 22);
    findMiddle(ms);
    push(ms, 33);
    findMiddle(ms);
    push(ms, 44);
    findMiddle(ms);
    push(ms, 55);
    findMiddle(ms);
    push(ms, 66);
    findMiddle(ms);
    push(ms, 77);
    findMiddle(ms);

    cout<<"\nafter popping"<<endl;
    pop(ms);
    findMiddle(ms);
    pop(ms);
    findMiddle(ms);
    pop(ms);
    findMiddle(ms);

    push(ms, 110);
    push(ms, 111);
    push(ms, 112);
    cout<<"\nAfter deleting mid"<<endl;
    deleteMiddle(ms);
    findMiddle(ms);
    deleteMiddle(ms);
    findMiddle(ms);
    deleteMiddle(ms);
    findMiddle(ms);
    
    push(ms, 200);
    push(ms, 201);
    push(ms, 202);
    findMiddle(ms);

    return 0;
}