#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter Your Number a is:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;

         temp=a;
        a=b;
        b=temp;

    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of b is:"<<b<<endl;
}