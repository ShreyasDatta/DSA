#include<bits/stdc++.h>
using namespace std;

stack <int> st;

void insertAtBegning(int s){
    if(st.empty() || s>st.top()){
        st.push(s);
    }
    else{
        int a=st.top();
        st.pop();
        insertAtBegning(s);

        st.push(a);
    }
}

void sort(){
    if(st.empty())
        return;
    int s = st.top();
    st.pop();
    sort();
    insertAtBegning(s);
}

int main(){ 
    // push elements into the stack
    st.push(7);
    st.push(5);
    st.push(3);
    st.push(8);
    st.push(2);
    cout<<"Original TOP: "<<st.top()<<endl;
     
    // function to sort the stack
    sort();
    cout<<"Stack Sorted"<<endl;
    cout<<"Sorted TOP: "<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}