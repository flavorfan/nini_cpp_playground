#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int a1, a2, a3, b1, b2, b3;
    for ( int i = 81 ; i <  343 ; i++ ) {

        a1 = i / 49;
        a2 = (i - a1 * 49) / 7;
        a3 = i % 7;

        b1 = i / 81;
        b2 = (i - b1 * 81) / 9;
        b3 = i % 9;

        if ( a1 == b3 && a2 == b2 && a3 == b1 ) {
            cout << i << endl;
            cout << a1 << a2 << a3 << endl;
            cout << b1  << b2 << b3;
        }


    }
    return 0;
}