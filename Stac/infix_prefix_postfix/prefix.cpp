//operator appears in the expression before the operands.
//last to first dekhte hai isko
//<operator><operand><operand>

/*Ending se values ko stack m push karna shuru karo, jab operand aa jaye ruk jao 
push kiye hue values ko pop karo and us operator k saath chalao and result wapas push kardo stack m*/

#include<bits/stdc++.h>
using namespace std;

int prefixEvaluation(string s){
    stack <int> st;
    int x, y;

    for(int i=s.length()-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        else{
            x=st.top();
            st.pop();
            y=st.top();
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
    cout<<"Prefix Evaluatoion is: "<<prefixEvaluation("-+7*45+20");
    return 0;
}