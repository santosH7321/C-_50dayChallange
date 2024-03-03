#include<stdio.h>

union santosh{
    int age;
    float weight;
}sky;
int main(){
    sky.age;
    sky.weight;
    printf("%d", sizeof(santosh));
}