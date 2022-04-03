/*first reverse the whole string
then traverse till end and convert the ( to ) and ) to (
if operand - print
if ( - push to stack
if ) - pop from stack and print until ( is found
if operator - pop from stack and print until an operator with less precedence is found*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int prec(char c){
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else    
        return -1;
}

string reverseString(string s){
    
    return s;
}

string infixToPostfix(string s){
    stack<char> st;
    string str;

    reverse(s.begin(),s.end());
    
    for(int i=0;i<s.length();i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            str+=s[i];
        else if(s[i]==')')
            st.push(s[i]);
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                str+=st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else{
            while(!st.empty() && prec(st.top()) > prec(s[i])){
                str+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        str+=st.top();
        st.pop();
    }

    reverse(str.begin(),str.end());
    return str;
}

int main(){

    cout<<infixToPostfix("(a-b/c)*(a/k-l)");

    return 0;
}