#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    //Base case
    if(index >= size){
        return true;
    }

    //processing
    if(arr[index] > arr[index-1]){
        bool aageKaAns = checkSorted(arr, size, index+1);
        return aageKaAns;
    } else{
        //Sorted nahi h
        return false;
    }
}
int main(){
    int arr[] = {10,20,40,30,80,50};
    int size = 6;
    int index = 1;
    bool isSorted = checkSorted(arr, size, index);
    
    if(isSorted){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}