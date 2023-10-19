#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int size = 6;
    int mini = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<"Minmum Number is "<<mini<<endl;


}