#include<iostream>
using namespace std;

class Animal {
    // State or properties
        private:
        int weight;
    public:
    int getWeight(){
        return weight;
    }
    int setWeight(int w){
        weight = w;
        
    }
};
int main() {
    // Objects

    //Static
    Animal Santosh;
    Santosh.setWeight(101);
    cout<<"Weight: "<<Santosh.getWeight()<<endl;
   
}