#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int m , k , a = 0 ;
    cin >> m >> k;
    if ( m % 19 == 0 ){
        while ( m > 0 ) {
            int n;
            n = m % 10;
            m /= 10;
            if ( n == 3 ){
                a++;
            }
        }
        if ( a == k ){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
return 0;
}