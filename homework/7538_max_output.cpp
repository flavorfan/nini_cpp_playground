#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;
    int max;

    cin >> a >> b >> c;

    if (a > b)
        max = a;
    else 
        max = b;
    
    if ( c > max)
        max = c;
    
    cout << max;

    return 0;
}