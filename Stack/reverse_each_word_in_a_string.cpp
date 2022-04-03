#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    stack<char> st;

    for(int i=0;i<s.length();i++){
        if(s[i] != ' ')
            st.push(s[i]);
        else{
            while(!st.empty()){               //we are printing in reverse
                cout<<st.top();               //if want to reverse original string then apply reverse function here
                st.pop();
            }
            cout<<" ";
        }
    }
}

int main(){
    string s="Siddhant is a good boy";
    reverse(s);
    return 0;
}