#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;                            //Initializig vector
    vector<int> v2 (3, 50;)

    v.push_back(1);                           //Pushing values to vector
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){              //Traversing Vector
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end(); it++){      //Traversing Vector
        cout<<*it<<endl;
    }

    for(auto element:v){                      //Traversing Vector
        cout<<element<<endl;
    }

    v.pop_back();                             //Pop element at back

    swap(v,v2);                               //Swap elements of both vector

    sort(v.begin(), v.end());
}