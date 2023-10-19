#include<iostream>
using namespace std;
int divisonTwoNum(int Num1, int Num2){
        
        return Num1 / Num2;
    }
int main(){
    int Num1, Num2;
    cout<<"Enter two Number: ";
    cin >> Num1 >> Num2;
    int div = divisonTwoNum(Num1, Num2);
    cout<< div;
}