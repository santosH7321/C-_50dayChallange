#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,0,2,0,0,0,2,};
    int size = 7;
    int numTwo = 0;
    for(int i= 0; i<size; i++){
        if(arr[i]==2){
            numTwo++;
        }
    }
    cout<<"Nuber of TWo is "<<numTwo<<endl;
}