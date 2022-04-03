#include<iostream>
using namespace std;

#define MAX 5

class deque {
    private:
        int arr[MAX], front, rear;

    public:
        deque(){
            front = -1;
            rear = -1;
        }

//Full Queue
    bool isFull(){
        return((rear==MAX-1 && front==0) || front==rear+1);
    }

//Empty Queue
    bool isEmpty(){
        return(front==-1);
    }

//Insert at front
    void insertFront(int val){
        if(isFull())
            cout<<"Queue Full\n";
        else{
            if(front==-1){
                front = 0;
                rear = 0;
            }
            else if(front==0)
                front = MAX -1;
            else
                front = front-1;

            arr[front]=val;
        }
    }


//Insert at rear

    void insertRear(int val){
        if(isFull())
            cout<<"Queue Full\n";
        else{
            if(front==-1){
                front=0;
                rear=0;
            }
            else if(rear==MAX-1)
                rear=0;
            else
                rear=rear+1;

            arr[rear]=val;
        }
    }

//Delete at front

    void deleteFront(){
        if(isEmpty())
            cout<<"Queue Empty\n";
        else{
            arr[front]=0;
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else if(front=MAX-1)
                front=0;
            else
                front=front+1;
        }
    }


//Delete at rear

    void deleteRear(){
        if(isEmpty())
            cout<<"Queue Empty\n";
        else{
            arr[rear]=0;
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else if(rear=0)
                rear=MAX-1;
            else
                rear=rear-1;
        }
    } 

//Display element
    void displayQueue(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else{
            cout<<"Queue elements are: ";
            //for(int i=front; i!=rear; i=(i+1)%MAX){
            for(int i=0; i<MAX; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {

  deque q;

  q.insertRear(1);
  q.insertRear(2);
  q.insertRear(3);
  q.insertFront(8);
  q.insertFront(7);
  q.displayQueue();

  q.deleteRear();
  q.displayQueue();

  q.deleteFront();
  q.displayQueue();

  q.insertFront(10);
  q.insertRear(11);

  q.displayQueue();

  return 0;
}