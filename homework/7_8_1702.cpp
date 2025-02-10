#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[ 31 ] ;
    char b , c ;
    cin >> a >> b >> c ;

    int len = strlen ( a ) ;
    for ( int i = 0 ; i < len ; i ++ ) {
        if ( a[ i ] == b ) {
            a[ i ] = c ;
        }
    }
    for ( int i = 0 ; i < len ; i ++ ) {
        cout << a[ i ] ;
    }
    return 0;
}