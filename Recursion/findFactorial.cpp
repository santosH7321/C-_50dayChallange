#include<iostream>
using namespace std;

int factorial(int n){
    //Base Case
    if(n == 1 || n == 0){
        return 1;
    }

    //Recursive relation
    int recursionKaAnswer = factorial(n-1);

    //Procesing
    int finalAns = n * recursionKaAnswer;
    return finalAns;
}
int main(){

    cout<<"Factorial of : "<<factorial(5)<<endl;
    return 0;
}