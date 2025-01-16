#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n ;
    double num = 1 , t;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ ){
        t = 1.0;
        for ( int j = 1 ; j <= i ; j++){
            t /= j ;
        }
        num += t ;
    }
    printf ( "%.10f", num ) ;
    return 0 ;
}            