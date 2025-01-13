#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    void print(){
        cout<< level <<endl;
    }
    int gethealth() {
        return health;
    }
    char getlevel() {
        return level;
    }
    void sethealth(int h){
    health =h;
    }
    void setlevel(char ch) {
        level = ch;
    }
};

int main(){

// static allocation
hero a;
a.sethealth(80);
a.setlevel('B');
cout<<"level is "<<a.level <<endl;
cout<< "health is "<<a.gethealth() <<endl;

//dynamic allocation
hero *b = new hero;
b->setlevel('A');
b->sethealth(70);
cout<<"level is "<<(*b).level <<endl;
cout<<"health is "<<(*b).gethealth() <<endl;

cout<<"b level is "<<b->level<<endl;
cout<<"b health is "<<b->gethealth()<<endl;

return 0;
}