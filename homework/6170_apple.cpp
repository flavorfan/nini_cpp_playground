#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;


int main() 
{
    int n,x,y;
    cin >> n>> x>> y;
    cout<<n-ceil((float)y/x);
    return 0;
}
