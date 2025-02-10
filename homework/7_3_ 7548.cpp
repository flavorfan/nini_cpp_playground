#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    char a [ 501 ] = { 0 } , b [ 501 ] = { 0 },  c [ 501 ] = { 0 } ;
    float n , sum = 0 ;
    // cin >> n;
    cin.getline ( c , 500 );
    cin.getline ( a , 500 );
    cin.getline ( b , 500 );

    n = atof ( c );
    // cout << "---------------\n" << n << endl <<  a << endl << b << endl;

    float len = strlen ( a );
    for ( int i = 0 ; i < len ; i ++ ) {
    if ( a [ i ] == b [ i ] ){
        sum ++ ;
    }
    }
    if ( sum / len >= n ){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}