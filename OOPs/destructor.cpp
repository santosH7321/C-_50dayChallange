#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;
    string type;
    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }
};
int main(){
    //Static memory
    Animal a;
    a.age = 5;

    //Dynamic memory allocation
    cout<<"a obj is created "<<endl;
    Animal* b = new Animal();
    b->age = 12;


    // Manually deleted
    delete b;
}