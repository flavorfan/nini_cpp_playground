#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double h ,m ,n;
    cin >> h;
    m = h;
    for ( int i = 1 ; i < 10 ; i++ ){
        h /= 2;
        m += h * 2;
        n = h / 2;
    }
    cout << m << endl << n;
    return 0;
}