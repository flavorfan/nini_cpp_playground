#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    double sn = 0;
    int k , n ;
    cin >> k;
    n=0;
    while ( sn <= k ){
        n++;
        sn += 1.0 / n;
    }
    cout << n;
return 0;
}