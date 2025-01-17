#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n , sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 7 != 0 && i % 10 != 7 && ( i - i % 10) /10 != 7) {
            sum += i * i ;
        }
    }
    cout << sum;
    return 0;
}