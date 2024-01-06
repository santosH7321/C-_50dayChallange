#include<iostream>
using namespace std;

class Animal {
    int age; //4
    int mob; //4
    char name; // char is also take 4 byte due to padding
};
int main(){
    cout<<"Size of class is: "<<sizeof(Animal)<<endl; //12
}