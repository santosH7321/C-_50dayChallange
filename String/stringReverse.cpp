#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string name = "Santosh";
    cout<<name<<endl;
    reverse(name.begin(), name.end());
    cout<<name<<endl;
}