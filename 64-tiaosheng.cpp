#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[5],b;
    cout<<"请输入5位小朋友的成绩"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i;j++){
            if(a[j]<a[j+1]){
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}
