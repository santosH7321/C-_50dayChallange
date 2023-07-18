#include<iostream>
using namespace std;
int main(){
    float si,p,r,t;
    cout<<"Eter Your Principal:";
    cin>>p;
    cout<<"Enter your Rate:";
    cin>>r;
    cout<<"Enter your time:";
    cin>>t;

    si=(p*r*t)/100;
    cout<< "Your Simple Intrest is: "<<si<<endl;

}