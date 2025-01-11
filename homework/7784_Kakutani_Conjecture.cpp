#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long  a;
    cin >> a;
    while ( a!=1 ){
        if ( a % 2 == 0 )
        {
            cout << a <<"/2" << "=" << a / 2 << endl;
            a /= 2;
        }
        else
        {
            cout << a <<"*3+1" << "=" << a * 3 + 1 << endl;
            a = 3 * a + 1;
        }
    }
    cout << "End" << endl;
    return 0;                          
}