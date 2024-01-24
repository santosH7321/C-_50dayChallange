#include<iostream>
using namespace std;

int fib(int n){
    //Base Case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    //Recursive relation

    int ans  = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    cout<<fib(7)<<endl;
    //FibonacciSeries -> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    return 0;
}