#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int a1,a2;
    a1=1;
    a2=1;
    cout<<a1<<" "<<a2<<" ";
        for(int i=3;i<=10;i++)
    {
        int a3=a1+a2;
        cout<<a3<<" ";
        a1=a2;
        a2=a3;
    }
    return 0;
}
