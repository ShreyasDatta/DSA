#include<iostream>
using namespace std;

#define MAX 6

class queue {
    private:
        int arr[MAX], front, rear;

    public:
        queue(){
            front = -1;
            rear = -1;
        }

//Full Queue
    bool isFull(){
        if(rear==MAX-1 && front==0)
            return true;
        if(front==rear+1)
            return true;
        return false;
    }

//Empty Queue
    bool isEmpty(){
        if(front==-1)
            return true;
        else
            return false;
    }

//Enqueue
    void enqueue(int val){
        if(isFull())
            cout<<"Queue Full\n";
        else{
            if(front==-1)
                front = 0;
            rear=(rear+1)%MAX;
            arr[rear] = val;
        }      
    }


//Dequeue
    void dequeue(){
        if(isEmpty())
            cout<<"Queue is empty\n";
        else{
            if(front==rear){
                front=-1;
                rear=-1; 
            }
            else{
                arr[front]=0;
                front=(front+1)%MAX;
            }    
        }
    }

//Display element
    void displayQueue(){
        if(isEmpty())
            cout<<"Queue is empty\n";
        else{
            cout<<"Queue elements are: ";
            for(int i=front; i!=rear; i=(i+1)%MAX){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {

  queue q;

  // Fails because front = -1
  q.dequeue();

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);

  q.displayQueue();

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  q.enqueue(6);

  //Dequeuing Element
  q.dequeue();

  q.displayQueue();

  q.enqueue(7);

  q.displayQueue();

  // Fails to enqueue because front == rear + 1
  q.enqueue(8);

  return 0;
}