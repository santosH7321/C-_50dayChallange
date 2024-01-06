#include<iostream>
using namespace std;

class Animal {
    // State or properties
    public:
    int age;
    string name;
    //behaviour
   
   void sleep(){
    cout<<"Sleeping"<<endl;
   }
   void eat(){
    cout<<"Eating"<<endl;
   }
};
int main() {
    // Objects

    //Dynamic- memory allocation
    Animal* suresh = new Animal;
    (*suresh).age = 15;
    
    //Alternat - dynamic
    suresh->age = 17;
    suresh->eat();

    
  
   
}