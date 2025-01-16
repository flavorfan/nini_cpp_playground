#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n  ;
    double sum = 0 , t , q = 2 , p = 1 ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ ){
        sum += q / p ;
        t = q ;
        q =q + p ;
        p = t ;
    }
    printf ("%.4f",sum) ;
    return 0;
}