#include<iostream>
using namespace std;

class QNode{
    public:
        int data;
        QNode* next;
    
    QNode(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    public:
    QNode *front;
    QNode *rear;

    Queue(){
        front=rear=NULL;
    }
    
    bool isEmpty(){
        return(rear==NULL);
    }

    void enQueue(int val){
        QNode* queue = new QNode(val);
        if(isEmpty()){
            front=queue;
            rear=queue;
            return;
        }
        rear->next = queue;
        rear=queue;
    }

    void deQueue(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }

        QNode* toFree = front;
        front=front->next;
        free(toFree);
        if(front==NULL)
            rear=NULL;
    }

    void printElements(){
        if(isEmpty()){
            cout<<"Queue empty"<<endl;
            return;
        }
        cout<<"Queue elements are: ";
        QNode* temp=front;
        while(temp!=rear->next){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.printElements();

    q.deQueue();
    q.deQueue();
    q.printElements();
    return 0;

}