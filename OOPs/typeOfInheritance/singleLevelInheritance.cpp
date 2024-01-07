#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    int weight;
    int age;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
    void breakMarro(){
        cout<<"break marro"<<endl;
    }
};

class Scorpio:public Car {
    
};
int main(){
    Scorpio Santoshwala;
    Santoshwala.speedUp();
    return 0;
}