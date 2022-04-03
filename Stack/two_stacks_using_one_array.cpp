#include<bits/stdc++.h>
using namespace std;

class twoStacks{
    int size;
    int top1, top2;
    int* arr;

    public:
        twoStacks(int n){
            size=n;
            top1=-1;
            top2=size;
            arr=new int[n];
        }
        
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
        else
            cout<<"Stack Overflow"<<endl;
        cout<<x<<" pushed in stack1"<<endl;
    }

    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
        else
            cout<<"Stack Overflow"<<endl;
        cout<<x<<" pushed in stack2"<<endl;
    }

    void pop1(){
        if(top1>=0){
            arr[top1]=0;
            top1--;
        }
        else    
            cout<<"Stack empty"<<endl;
        cout<<arr[top1]<<" popped from stack1"<<endl;
    }

    void pop2(){
        if(top2<size){
            arr[top2]=0;
            top1++;
        }
        else    
            cout<<"Stack empty"<<endl;
        cout<<arr[top2]<<" popped from stack2"<<endl;
    }
};

int main()
{
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    ts.push2(40);

    ts.pop1();
    ts.pop2();
    return 0;
}