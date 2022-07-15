#include <iostream>
#include <unordered_map>
using namespace std;
  
int main(){
    unordered_map<string, int> umap;
  
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;
  
    umap.insert(make_pair("e", 2));
  
    //Finding a key
    key = "lambda";
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;
  
    //Printing Map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;
  
    //Printing Map using iterator
    unordered_map<string, double>:: iterator itr;
    for (itr = umap.begin(); itr != umap.end(); itr++){
        // itr works as a pointer to pair<string, double>
        // type itr->first stores the key part  and
        // itr->second stores the value part
        cout << itr->first << "  " << itr->second << endl;
     }
  
}
