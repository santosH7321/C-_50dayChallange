#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter your array size "<<endl;
    cin>>n;
    cout<<"Enter the Number"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //Printing Double
    for(int i= 0; i<n; i++){
        cout<< 2 * arr[i]<<" ";
    }

}