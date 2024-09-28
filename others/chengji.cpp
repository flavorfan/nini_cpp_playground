#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float a;
    do{
        cout<<"请输入成绩: ";
        cin>>a;
        if(a<0||a>100){
            cout<<"输入有误 ";
        }
    }
    while(a<0||a>100);
    cout<<"成绩是: "<<a;
}
