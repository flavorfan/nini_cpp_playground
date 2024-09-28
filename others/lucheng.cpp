#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    float lucheng,feiyong;
    int shijian;
    cout<<"请输入路程: ";
    cin>>lucheng;
    if(lucheng>10){
        feiyong=6+(10-2)*1.8+(lucheng-10)*1.8*1.5;
    }
    else if(lucheng>2){
        feiyong=6+(lucheng-2)*1.8;
    }
    else{
        feiyong=6;
    }
    cout<<"请输入时间: ";
    cin>>shijian;
    feiyong=feiyong+(shijian/3)*1;
    cout<<"feiyong is: "<< feiyong;
}