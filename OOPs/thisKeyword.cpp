#include<iostream>
using namespace std;

class Animal {
        private:
        int weight;
    public:
    int getWeight(){
        return weight;
    }
    int setWeight(int weight){
        this->weight = weight;
        
    }
};
int main() {
    // Objects

    //Static
    Animal Santosh;
    Santosh.setWeight(101);
    cout<<"Weight is: "<<Santosh.getWeight()<<endl;
   
}