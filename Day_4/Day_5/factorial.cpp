#include<iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"Enter Number: ";
    cin>> n;

    for(int i = n; n>=1; n--){
        fact = fact * n;
        
    }
    cout<<fact;
}