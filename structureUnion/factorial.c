#include<stdio.h>

int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }
    //recursion relation
    // int recursionKaAns = factorial(n-1);
    // processing
    // int finalAns = n * factorial(n-1);
    // return finalAns;
    printf("%d", n);
    factorial(n-1);
}
int main(){
    printf("%d", factorial(5)); 
}