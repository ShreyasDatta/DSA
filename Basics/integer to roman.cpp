#include <bits/stdc++.h>
using namespace std;

    int value(char c){
        if(c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        if(c=='M')
            return 1000;
        return 0;
    }
    
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.length();i++){
            if(value(s[i])<value(s[i+1])){
                num+=value(s[i+1])-value(s[i]);
                i++;
                continue;
            }
            num+=value(s[i]);
        }
        return num;
    }

int main()
{
    string str = "MCMIV";
    cout << "Integer form of Roman Numeral is "
         << romanToDecimal(str) << endl;
 
    return 0;
}
