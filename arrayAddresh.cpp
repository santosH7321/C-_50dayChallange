#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array addresh: ";
    cin>> n;
    int arr[n];
    for(int i = 0; i<n; i++){

        cout<<&arr[i]<<endl;
    }

    
}