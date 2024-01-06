#include<iostream>
using namespace std;

class Animal {
    public:
    int weight;
    int age;
    string type;
    // Default constructor 
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"Constructor Called"<<endl;
    }
    // Parameterise constructor
    Animal(int age){
        this->age = age;
        cout<<"Parametrised Constructor Called "<<endl;
    }
    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"Parametrised Constructor 2 Called "<<endl;
    }
    Animal(int age, int weight, string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"Parametrised Constructor 3 Called "<<endl;
    }
};
int main() {
    //Dynamic 
    Animal a(10); //parameter
    Animal* b = new Animal(100, 21); //parameter
    Animal* c = new Animal(100, 21, "Dog"); //parameter
}