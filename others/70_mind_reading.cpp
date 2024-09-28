#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int a,b[3];
    cout <<"请输入1~7中的一个数";
    cin>>a;
    if(1>a||a>7)
    {
        cout<<"输入错误";
    }
    cout<<"下面的数中有吗 有:1 没有:0"<<endl<<"1 3 5 7"<<endl;
    cin>>b[0];
    cout<<"下面的数中有吗 有:1 没有:0"<<endl<<"2 3 6 7"<<endl;
    cin>>b[1];
    cout<<"下面的数中有吗 有:1 没有:0"<<endl<<"4 5 6 7"<<endl;
    cin>>b[2]; 

    cout<<"您猜的数是"<<b[0]*1+b[1]*2+b[2]*4;
}