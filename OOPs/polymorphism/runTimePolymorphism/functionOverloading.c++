#include<iostream>
using namespace std;

class Animal {
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog:public Animal{
    public:
    // override
    void speak(){
        cout<<"Banking"<<endl;
    }
};
int main(){
    Dog a;
    a.speak();
}