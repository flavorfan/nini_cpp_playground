#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;


int main() 
{
    int n,a,b,c;
    cin>>n;
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    cout<<c<<b<<a<<endl;
    return 0;
}