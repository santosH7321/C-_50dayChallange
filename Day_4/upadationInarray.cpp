#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    arr[0]= 6;
    arr[1] = 7;
    arr[2] = 8;
    arr[3] = 9;
    arr[4] = 10;
    
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<endl;
    }

}