#include<iostream>
using namespace std;

void print(int n){
    //Base case
    if(n==1){
        cout<<1<<" ";
        return;
    }
    //Processing
    cout<<n<<" ";
    // recursive call
    print(n-1);
}
int main(){
    print(5);
    return 0;
}