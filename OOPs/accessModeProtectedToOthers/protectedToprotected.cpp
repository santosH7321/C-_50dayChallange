#include<iostream>
using namespace std;

class Sky{
    protected:
        int age = 21;

};

class Cat:protected Sky{
    public: 
        void print(){
            cout<<this->age;
        }
};
int main(){
    Cat obj;
    obj.print(); //inside access
    // cout<<obj.print(); //outside the class
}