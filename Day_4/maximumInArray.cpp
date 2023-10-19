#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2,4,20,40,60,70,80};
    int size = 7;
    int maxi = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximum numer is "<<maxi<<endl<<endl;
}