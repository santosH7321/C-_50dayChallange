#include<iostream>
using namespace std;

class Dog{
    private:
        int age;
        int weight;
    
    public:
        int getAge(){
            return age;
        }
        int setAge(int age){
            this->age = age;
        }
        int getWeight(){
            return weight;
        }
        int setWeight(int weight){
            this->weight = weight;
        }
};

int main(){
    Dog moti;
    moti.setAge(10);
    moti.setWeight(20);
    cout<<"Age of moti: "<<moti.getAge()<<endl;
    cout<<"Weight of moti: "<<moti.getWeight()<<endl;

}