#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n  , notation = 1;
    cin >> n ;
    double sum = 0  ;
    for ( int i = 1 ; i <= n; i++ ) {
        sum += (double) notation *1.0 / i;
        notation *= -1 ;

    }
    printf ( "%.4f" , sum ) ;
    return 0 ;
}