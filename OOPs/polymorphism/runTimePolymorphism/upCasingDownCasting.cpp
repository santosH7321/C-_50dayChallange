#include<iostream>
using namespace std;

class  Animal{
    public:
       virtual void speak(){
            cout<<"Speaking"<<endl;
        }
};
class Dog:public Animal{
    public:
        void speak(){
            cout<<"Banking"<<endl;
        }
};
int main(){

    // Dynamic Object Creation
    // Animal* a = new Animal();
    // a->speak();

    // Dog* b = new Dog();
    // b->speak();

    //UpCasting
    Animal* a = new Dog();
    a->speak(); 

    //DownCasting
    Dog* b = (Dog*)new Animal();
    b->speak();
}