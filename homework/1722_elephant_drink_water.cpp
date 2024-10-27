#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;


int main() 
{
    int r,h;
    double pi = 3.14159;
    cin >> h>> r;
    double v = pi * r * r * h;
    cout<<ceil(20000/v);
    return 0;
}
