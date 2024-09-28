#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[5],n;
    for(int i;i<5;i++)
    {
        cout<<i+1<<"号成绩"<<endl;
        cin>>a[i];
    }
    cout<<"输入学号1~5: ";
    cin>>n;
    if(n>=1&&n<=5){
        cout<<a[n-1];
    }
    else{
        cout<<"输入错误";
    }
    return 0;
}