#include<stdio.h>

int fib(int n){
    // base case

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    // R R

    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    printf("%d", fib(7));
}