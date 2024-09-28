#include<iostream>
#include<cstdio>

using namespace std;
int f(int b){
    b*=2;
    return b;
}
int main()
{
    int a;
    a=100;
    a=f(a);
    cout<<a;
}