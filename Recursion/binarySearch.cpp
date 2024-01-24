#include<iostream>
using namespace std;

int binSearch(int arr[], int s, int e, int target){
    //Base case

    if(s > e){
        // Element not found
        return -1;
    }

    int mid = s + (e - s)/2;
    if(arr[mid] == target){
        return mid;
    }

    //remening part on recursion doing
    if(arr[mid] < target){
        // right me jaao
        s = mid + 1;

        bool aageKaAns = binSearch(arr, s, e, target);
        return aageKaAns;
    } 
    else  {
        //left me jaao
        e = mid - 1;
        bool aageKaAns = binSearch(arr, s, e, target);
        return aageKaAns;
    }
}
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int target = 80;

    int foundIndex = binSearch(arr, start, end, target);
    if(foundIndex != -1){
        cout<<"Target found at: "<<foundIndex <<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
}