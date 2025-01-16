#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n , sum = 0 , t;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ ){
        t=1;
        for ( int j = 1 ; j <= i ; j++){
            t *= j ;
        }
        sum += t ;
    }
    cout << sum ;
    return 0 ;
}