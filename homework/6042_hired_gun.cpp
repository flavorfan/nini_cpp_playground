#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int m , n , x , fs = 0 ;
    cin >> m >> n >> x;

    while ( true ) {
        // buxue
        for (  int i = 0 ; i < m ; i += n ){
            x--;
        }
        if ( x < 0 ){
            break;
        }
        fs = m ;

        // fight
        n += m / n;
        if ( n > m ){
            break;
        }

    }
    cout << n ;

    return 0;
}