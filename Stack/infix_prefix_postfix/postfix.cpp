//the operator appears in between the operands in the expression
//first to dekhte hai isko
//<operand><operand><oppeartor>

/*starting se values ko stack m push karna shuru karo, jab operand aa jaye ruk jao 
push kiye hue values ko pop karo and us operator k saath chalao and result wapas push kardo stack m*/

#include<bits/stdc++.h>
using namespace std;

int prefixEvaluation(string s){
    stack <int> st;
    int x, y;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        else{
            y=st.top();
            st.pop();
            x=st.top();
            st.pop();

            switch (s[i]){
            case '+':
                st.push(x+y);
                break;
            
            case '-':
            st.push(x-y);
                break;

            case '*':
            st.push(x*y);
                break;

            case '/':
            st.push(x/y);
                break;
            }
        }
    }

    return st.top();
}

int main(){
    cout<<"Postfix Evaluatoion is: "<<prefixEvaluation("46+2/5*7+");
    return 0;
}