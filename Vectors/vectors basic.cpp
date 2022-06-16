#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;                                          //Initializig vector
    vector<int> v2 (3, 50;)

    v.push_back(1);                                         //Pushing values to vector
    v.push_back(2);
    v.push_back(3);
    
    v.pop_back();                                           //Pop element at back
    
    v.size();                                               //Size of Vector

    for(int i=0; i<v.size(); i++){                          //Traversing Vector 1
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end(); it++){                    //Traversing Vector 2
        cout<<*it<<endl;
    }

    for(auto element:v){                                    //Traversing Vector 3
        cout<<element<<endl;
    }
    
    reverse(v.begin(), v.end());                            //reverses the vector 

    swap(v,v2);                                             //Swap elements of both vector

    sort(v.begin(), v.end());                               //Sorting in Ascending Order
    
    sort(v.begin(), v.end(), std::greater<int> ());          // Sorting in Descending Order
    
    return 0;
    
}
