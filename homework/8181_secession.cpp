#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int a , n;
    cin >> a;
    while ( a > 0 ) {
        n = a % 10;
        a = a / 10;
        cout << n <<" ";
    }
return 0;
}