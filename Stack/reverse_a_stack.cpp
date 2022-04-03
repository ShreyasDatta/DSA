// C++ code to reverse a stack using recursion
#include<bits/stdc++.h>
using namespace std;
 
stack<char> st;
 
// recursive function that inserts an element at the bottom of a stack.
void insert_at_bottom(char x){
    if(st.size() == 0)
        st.push(x);
    else{ 
        char a = st.top();                                  // All items are held in Function Call Stack until we reach end of the stack
        st.pop();                                           // When the stack becomes empty, the st.size() becomes 0, the above if
        insert_at_bottom(x);                                // part is executed and the item is inserted at the bottom

        st.push(a);                                         // push all the items held in Function Call Stack
    }                                                       // once the item is inserted at the bottom
}
 
// reverses the given stack using insert_at_bottom()
void reverse(){
    if(st.size()>0){
        char x = st.top();                                  // Hold all items in Function Call Stack until we reach end of the stack
        st.pop();
        reverse();
                                                            // Insert all the items held in Function Call Stack one by one 
        insert_at_bottom(x);                                //from the bottom to top. Every item is inserted at the bottom
    }
}
 
int main(){ 
    // push elements into the stack
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
     
    cout<<"Original Stack"<<endl;
    cout<<"Original TOP: "<<st.top()<<endl;
     
    // print the elements of original stack
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl;
     
    // function to reverse the stack
    reverse();
    cout<<"Reversed Stack"<<endl;

    cout<<"Reversed TOP: "<<st.top()<<endl;
     
    // for testing
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}