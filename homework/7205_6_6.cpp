#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    bool k [ 10001 ] ;
    int l , m , a , b , sum = 0 ;
    cin >> l >> m ;
    for ( int i = 0 ; i <= l ; i ++ ) {
        k[ i ] = true ;
    }
    for ( int i = 0 ; i < m ; i ++ ) {;
        cin >> a >> b ;
        for ( int j = a ; j <= b ; j ++ ) {
            k[ j ] = false ;
        }
    }
    for ( int i = 0 ; i <= l ; i ++ ) {
        if ( k[ i ] == true ) {
            sum ++;
        }
    }
    cout << sum ;
    return 0;
}