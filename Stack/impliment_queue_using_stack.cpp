#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1, q2;
    int size;
    
    public:
    Stack(){
        //to maitain the size of the queue
        size=0;
    }

    //push method expensive
    /*void pushElement(int x){
        size++;
        //pushing new element to queue2
        q2.push(x);

        //shifting all values from queue1 to queue2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        //Swapping names of two queues
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    void popElement(){
        if(q1.empty()){
            cout<<"No element to pop"<<endl;
            return;
        } 
        q1.pop();
        size--;

    int topElement(){
        if(q1.empty())
            return -1;
        return q1.front();
    }
    }*/

    //pop function expensive
    void pushElement(int x){
        q1.push(x);
        size++;
    }

    void popElement(){
        if(q1.empty())
            return;

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
    
        q1.pop();
        size--;

        //Swapping names of two queues
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    int topElement(){
        if (q1.empty())
            return -1;
  
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
  
        // last pushed element
        int temp = q1.front();
  
        // to empty the auxiliary queue after
        // last operation
        q1.pop();
  
        // push last element to q2
        q2.push(temp);
  
        // swap the two queues names
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
    }
};

int main()
{
    Stack s;
    s.pushElement(1);
    s.pushElement(2);
    s.pushElement(3);
    cout<<"Top element is: "<<s.topElement()<<endl;
    s.popElement();
    s.popElement();
    cout<<"Top element is: "<<s.topElement()<<endl;

    return 0;
}