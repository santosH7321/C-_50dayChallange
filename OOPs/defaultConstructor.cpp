#include<iostream>
using namespace std;

class Animal {
    private:
    int weight;
    public:
    int age;
    string type;
    // Default constructor 
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"Constructor Called"<<endl;
    }
    
};
int main() {
    //Dynamic 
    Animal a;
    Animal* b = new Animal();
    
   
}