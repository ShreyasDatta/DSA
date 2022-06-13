#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    int n,t,x,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }   
    cin>>x;
    cin>>a>>b;
    
    v.erase(v.begin()+(x-1));                       //Index to be deleted
    v.erase(v.begin()+(a-1), v.begin()+(b-1));      //Range to be deleted
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}


/*------INPUT-------
6                 size
1 4 6 2 8 9       vector
2                 index to be deleted
2 4               range to be deleted
