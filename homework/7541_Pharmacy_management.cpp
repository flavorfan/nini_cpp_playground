#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int m , n , d , p , surplus=0 , t = 0 ;
    cin >> m >> n;
    surplus = m ;
    for ( int i = 0 ; i < n ; i++ ){
        cin >> p;
        if ( surplus < p ){
            t = t + 1;
            
        }
        else{
            surplus = surplus - p;
            
        }
    }
    cout << t << endl;
    return 0;
}