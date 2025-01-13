#include<iostream>
using namespace std;

class A{
    public:
    void sayhello() {
        cout<<"hello is called"<<endl;
    }
    int sayhello(char name){
        cout<<"again calling hello"<<endl;
        return 1;
    }
    void sayhello(string name){
        cout<<"Hello "<<name<<endl;
    }
};
class B{
    public:
    int a,b;

    public:
    int add() {
        return a+b;
    }
    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output "<<value2 - value1 << endl;

    }
};

class Animal {
    public:
    void speak() {
        cout<<"speaking "<<endl;
    }
};
class Dog : public Animal {
    public:
    void speak() {
        cout<<" barking "<<endl;
    }
};
int main(){

A obj;
obj.sayhello();

B obj1, obj2;
obj1.a = 4;
obj2.a = 7;

obj1 + obj2;

Dog obj3;
obj3.speak();

return 0;
}