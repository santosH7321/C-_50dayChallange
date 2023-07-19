#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int row =0 ; row<n; row=row+1){
        //space
        for(int col=0; col<(n-row-1); col++){
            cout<<" ";
       }
       //stars
       for(int col=0; col<row+1; col++){
        cout<<"* "; 
       }
       cout<<endl;
    }
}