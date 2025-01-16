#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    double n , x , sum = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        sum += pow ( x , i );
    }
    printf ( "%.2f" , sum ) ;
    return 0 ;
}            