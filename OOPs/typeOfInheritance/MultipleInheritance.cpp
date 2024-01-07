#include<iostream>
using namespace std;

class A {
    public:
    int physics;

};
class B {
    public:
    int chemistery;
};

class C:public A, public B {
    public:
    int math;
};


int main(){
    C obj;
    cout<<obj.physics<<" "<<obj.chemistery<<" "<<obj.math<<endl;
    return 0;
}