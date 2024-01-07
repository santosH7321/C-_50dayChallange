#include<iostream>
using namespace std;

class Santosh {
    protected:
        int age;
};

class Dog:private Santosh{
    public:
        void print(){
            cout<<"I am inside Accessable";
        }
};
int main(){
    Dog obj;
    obj.print();
}