#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<"Your Number Is: ";
    if(n>0){
        cout<<"Possitive";
    }
    else if(n<0){
        cout<<"Negative";
    }
    else{
        cout<<"Not a number";
    }
    
} 
