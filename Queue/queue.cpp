#include<iostream>
using namespace std;

#define MAX 5

class queue {
    private:
        int arr[MAX], front=-1, rear=-1;

    public:
        queue(){
            front = -1;
            rear = -1;
        }

//Full Queue
    bool isFull(){
        return(rear == MAX-1 && front == 0);
    }

//Empty Queue
    bool isEmpty(){
        return(front==-1);
    }

//Enqueue
    void enqueue(int val){
        if(isFull())
            cout<<"Queue Full\n";
        else{
            rear++;
            arr[rear] = val;
            if(front==-1)
                front = 0;
        }      
    }


//Dequeue
    void dequeue(){
        if(isEmpty())
            cout<<"Queue is empty\n";
        else{
            if(front<rear){
                arr[front]=0;
                front++;
            }
            else{
                front=-1;
                rear=-1; 
            }    
        }
    }

//Display element
    void displayQueue(){
        if(isEmpty())
            cout<<"Queue is empty\n";
        else{
            cout<<"Queue elements are: ";
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }   
    }
};

int main() {
  queue q;

  //deQueue is not possible on empty queue
  q.dequeue();

  //enQueue 5 elements
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);

  q.displayQueue();

  // 6th element can't be added to because the queue is full
  q.enqueue(6);

  //deQueue removes element entered first i.e. 1
  q.dequeue();
  //Now we have just 4 elements
  q.displayQueue();

  return 0;
}