#include<iostream>
using namespace std;
int remTwoNum(int Num1, int Num2){
        
        return Num1 % Num2;
    }
int main(){
    int Num1, Num2;
    cout<<"Enter two Number: ";
    cin >> Num1 >> Num2;
    int rem = remTwoNum(Num1, Num2);
    cout<< rem;
}