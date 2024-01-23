#include<iostream>
using namespace std;

class Dog{
    public:
    int age;
    string name;


    //behaviours
    void eat(){
        // cout<<"Eating "<<endl;
    }

    void sleep(){
        // cout<<"Sleeping "<<endl;
    }
};
int main(){

    //Static
    Dog moti;
    cout<<"Age of moti is: "<<moti.age<<endl;
    cout<<"Name of moti is: "<<moti.name<<endl;

}