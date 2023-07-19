#include<iostream>
using namespace std;
int main(){
    int rowNum,colNum;

    cout<<"Enter The Row and Col: ";

    cin>>rowNum>>colNum;

    for(int row=0; row<rowNum; row=row+1){
        for(int col=0; col<colNum; col=col+1 ){
            cout<<"* ";
        }
        cout<<endl;
    }
}