#include<iostream>
using namespace std;

class Santosh{
    protected:
        int age = 21;
};
class Dog:public Santosh{
    public:
    void print() {
        cout<< this->age;
    }
};
int main(){
    Dog sky;
    sky.print(); //inside the class 
    // cout<<d1.age;
    return 0;
}