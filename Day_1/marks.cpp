#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number :";
    cin >> n;
    cout<<"You obtain:"<<endl;
    if(n>=90){
        cout<<"Grade A";

    }
    else if(n>=80){
        cout<<"Grade B";
    }
    else if(n>=60){
        cout <<"Grade C";
    }
    else if (n>=40){
        cout <<"Grade D";
    }
    else{
        cout<<"Fail";
    }
}