#include<iostream>
#include<cstdio>

using namespace std;
void f(int* p,int* q){
    int t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    int a,b;
    cout<<"请输入两个数";
    cin>>a>>b;
    f(&a,&b);
    cout<<a<<","<<b;
}