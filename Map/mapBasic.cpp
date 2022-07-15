#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  map<string, int> m;
  
  m["Sid"] = 54;
  m["Raj"] = 45;
  m["Sham"] = 78;
  
  m.insert({{"Lol", 69}, {"hi", 25}}); 
  map<string, int> :: iterator it;
  for(it=m.begin(); it!=m.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  
  return 0;
}
