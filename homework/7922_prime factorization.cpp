#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n , t;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            t = i;
            n /= i;
        }
    }
    if (n > t) {
        t = n;
    }
    else {
        t = t;
    }
    cout << t;
    return 0;
}