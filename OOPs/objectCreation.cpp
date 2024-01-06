#include<iostream>
using namespace std;

class Animal {
    // State or properties
    public:
    int age;
    string name;
    //behaviour 
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};
int main() {
    // Objects

    //Static
    Animal Santosh;
    Santosh.age = 21;
    Santosh.name = "Santosh";
    cout<<"Age of Santosh is: "<<Santosh.age<<endl;
    cout<<"Age of Santosh is: "<<Santosh.name<<endl;
    Santosh.eat();
    Santosh.sleep();
}