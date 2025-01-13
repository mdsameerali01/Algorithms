#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){

// creation
//unordered_map<string, int>m;
map<string, int> m;

// insertion

// method 1
pair<string, int> p = make_pair("sameer",5);
m.insert(p);

// method 2
pair<string, int>pair2("Md", 2);

// method 3
m["mera"] = 1;

// whay will happen
m["mera"] = 2;


//search
cout<<m["mera"]<<endl;
cout<<m.at("sameer")<<endl;

cout<<m["unknownkey"]<<endl;
cout<<m.at("unknownkey")<<endl;

// size
cout<<m.size() << endl;

// to check presence
cout<<m.count("sameer") << endl;

// erase
m.erase("sameer");
cout<<m.size()<<endl;

// iterator
map<string, int> :: iterator it = m.begin();

while(it!=m.end()) {
    cout<<it->first<<" "<<it->second << endl;
    it++;
    }

return 0;
}