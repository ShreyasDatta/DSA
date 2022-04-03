#include<bits/stdc++.h>
using namespace std;
 
stack<int> st;

void sort(){
    stack<int> temp;
    int x;

    while(!st.empty()){
        x=st.top();
        st.pop();

        while(!temp.empty() && temp.top()>x){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }

    while(!temp.empty()){
        st.push(temp.top());
        st.pop();
    }
}

int main()
{
    stack<int> input;
    input.push(34);
    input.push(3);
    input.push(31);
    input.push(98);
    input.push(92);
    input.push(23);
    
    sort();
    cout << "Sorted numbers are:\n";
  
    while (!st.empty())
    {
        cout << st.top()<< " ";
        st.pop();
    }
}