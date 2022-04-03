#include<bits/stdc++.h>
using namespace std;

bool isOperator(char x) {
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
    return true;
  }
  return false;
}

string prefixToInfix(string s){
    string str;
    stack<char> st;
    char x;

    for(int i=s.length()-1; i>=0; i--){
        if(isOperator(s[i])){
            x=st.top();
            st.pop();
            st.push(s[i]);
            st.push(x);
        }   
        else
            st.push(s[i]);
    }
    while(!st.empty()){
        str+=st.top();
        st.pop();
    }
    return str;
}

int main(){

    cout<<"*+AB-CD";

    return 0;
}