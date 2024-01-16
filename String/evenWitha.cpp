#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "santosh";
    cout<<str<<endl;

    for(int i = 0; str[i]!='\0'; i++){
        if(i%2==0) str[i]='a';


    }
    cout<<str<<endl;
}



