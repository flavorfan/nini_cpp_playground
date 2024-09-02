#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"请输入两个数";
    cin>>a>>b;
    for(int i=max(a,b);i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            cout<<"最小公倍数为"<<i<<endl;
            break;
        }
    }
    return 0;
}


