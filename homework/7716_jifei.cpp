#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    char a;
    int b,m;
    
    cin>>b>>a;
    // if(b<=1000){
    //     m=8;
    // }
    // else {
    //     m=ceil (8+((b - 1000) / float(500)) * 4);
    // }
    // if(a=='y'){
    //     m=m+5;
    // }
    // cout<<m;

    if ( b <= 1000){
        m = 8;
    }
    else{
        m = 8 + ceil(float(b - 1000) / 500) * 4;
    }

    if ( a == 'y')
        m +=5;
    cout << m;
    return 0;
}