#include<iostream>
using namespace std;

class Car{
    int a = 5;
    int b = 10;
    char c = 'A';
};
int main(){
    cout<<"Padding is: "<<sizeof(Car)<<endl;
}