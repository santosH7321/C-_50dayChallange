#include<iostream>
using namespace std;

class Math {
    public:
    int sum(int a, int b){
        cout<<"I am first function"<<endl;
        return a+b; 
    }
    int sum(int a, int b, int c){
        cout<<"I am second function"<<endl;
        return a+b+c;
    }
    float sum(int a, float b){
        cout<<"I am third function"<<endl;
        return a+b;
    }
};
int main(){
    Math obj;
    cout<<obj.sum(10, 15)<<endl;
    cout<<obj.sum(5, 10, 15)<<endl;
    cout<<obj.sum(10, 5.5f)<<endl;
}

// I am first function
// 25
// I am second function
// 30
// I am third function
// 15.5