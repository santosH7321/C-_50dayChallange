#include <iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"Enter the input "<<endl;
    /// taking input

    for(int i=0; i<=10; i++){
        cin>>arr[i];
    }
    // Printing 

    cout<<"Printing the values in arrays "<<endl;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}