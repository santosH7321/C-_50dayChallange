#include<iostream>
using namespace std;

// in private with anyother not accessable inside and outSide
class Dog {
    private:
        int age;
};
class Cat:public Dog {
    public:
        void print(){
            cout<<this->age;
        }
};
int main(){
    Cat c1;
    c1.print(); //in this case inside and outside that's also not possible in private case
    cout<<c1.age; // 
    return 0;
}