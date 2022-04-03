#include<iostream>
using namespace std;

#define MAX 10

class stack{
    public:
        int array[MAX];
        int top;
};

//Create an empty stack
void createStack(stack *s){
    s->top = -1;
}

//Check if stack is full
int isFull(stack *s){
    if(s -> top == MAX-1)
        return 1;
    else
        return 0;
}

//Check if stack is empty
int isEmpty(stack *s){
    if(s -> top == -1)
        return 1;
    else
        return 0;
}

//Add elements to the stack
void push(stack *s, int newItem){
    if(isFull(s))
        cout<<"Stack Overflow";
    else
        s->top++;
        s->array[s->top] = newItem;
}

//To remove element
void pop(stack *s){
    if(isEmpty(s))
        cout<<"Stack empty";
    else
        s->array[s->top] = 0;
        s->top--;
}

//To print stack
void printStack(stack *s){
    if(isEmpty(s))
        cout<<"Stack is Empty";
    else
        cout<<"Stack elements are: ";
        for(int i=0; i<MAX; i++)
            cout<<s->array[i]<<" ";
}

// Driver code
int main() {
  int ch;
  stack *s = new stack;

  createStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);
  pop(s);
  push(s, 6);

  cout << "\nAfter popping out\n";
  printStack(s);
  return 0;
}