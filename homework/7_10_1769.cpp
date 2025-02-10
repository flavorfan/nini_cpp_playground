#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[ 201 ] ;
    cin.getline ( a , 200 ) ;
    int len = strlen ( a ) ;
    for ( int i = 0 ; i < len ; i ++ ) {    
        if ( isupper(a[ i ]) ) {
            if ( a[ i ] <= 'E' && a[ i ] >= 'A' ) {
                a[ i ] = a[ i ] + 21 ;
            } else {
                a[ i ] = a[ i ] - 5 ;
            }
        }
    }
    for ( int i = 0 ; i < len ; i ++ ){
        cout << a[ i ] ;
    }
    return 0;
}