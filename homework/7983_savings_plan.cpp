#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int  money = 0, save =0 , budge = 0 , t = 0;
    for ( int i = 1 ; i <= 12 ; i++ )
    {
        cin >> budge;
        if ( 300 + money >= budge ) {
            t = money + 300 - budge ;
            money = t % 100 ;
            save += t - money ;
        }
        else {
            cout << -i ;
            return 0;
        }
    }
    cout << save * 1.2 + money ;
    return 0;

}