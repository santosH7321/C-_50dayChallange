#include<iostream>
using namespace std;
int subTwoNum(int Num1, int Num2){
        
        return Num1 - Num2;
    }
int main(){
    int Num1, Num2;
    cout<<"Enter two Number: ";
    cin >> Num1 >> Num2;
    int sub = subTwoNum(Num1, Num2);
    cout<< sub;
}