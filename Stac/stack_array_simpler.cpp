#include<iostream>
using namespace std;
#define MAX 10

class stack{
    int top;
    public:
        int array[MAX];

        stack() { top=-1; }

        bool isFull(){ return(top==MAX-1);}
        bool isEmpty(){ return(top==-1);}

        void push(int x){
            if(isFull()){
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            array[top]=x;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack empty"<<endl;
                return;
            }
            array[top]=0;
            top--;
        }

        void printStack(){
            if(isEmpty()){
                cout<<"Stack empty"<<endl;
                return;
            }
            cout<<"Stack values are: ";
            for(int i=0;i<=top;i++)
                cout<<array[i]<<", ";
            
            cout<<endl;
        }

};


int main() {
    int ch;
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.printStack();

    s.pop();
    s.pop();
    s.push(6);

    cout << "\nAfter popping out\n";
    s.printStack();

    return 0;
}