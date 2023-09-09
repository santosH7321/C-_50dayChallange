
#include <iostream>
using namespace std;
int main(){
    int arr[500];
    int n;
    cout<<"Enter many number you want to add in arr"<<endl;
    cin>>n;
    cout<<"Enter the nubers "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Print Double

    for(int i=0; i<n; i++){
        cout<<2 * arr[i]<<" ";
    }
}