#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a;
    cout<<"请输入一个数";
    cin>>a;
    cout<<a;
    while (a!=1)
    {
        cout<<"--->";
        if (a%2==0)
        {
            a=a/2;
        }
        else
        {
            a=a*3+1;
        }
        cout<<a;
    }
    
    return 0;
}