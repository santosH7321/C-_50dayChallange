#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int weight;
    string type;

    // Parametrise constructor
    Animal(int age, int weight, string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"Parametrise constructor called"<<endl;
    }
    // Copy constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside copy constructor "<<endl;
    }
};
int main(){
    Animal a(21, 50, "smart"); //paramerise ctor
    Animal b = a; // copy ctor called -> first way
    Animal c(b); // copy ctor call -> second way
}