#include<iostream>
using namespace std;

int score = 15;

void a(int i) {
    cout<< score << " in a "<<endl;
    char ch = 'a';
    cout<<i<<endl;
    //b(i);
}
void b(int i){
    cout<< score <<" in b"<<endl;
    cout<<i<<endl;
}

int main(){
cout<<"Score in main "<<score<<endl;
int i =5;
a(i);
b(i);
return 0;
}