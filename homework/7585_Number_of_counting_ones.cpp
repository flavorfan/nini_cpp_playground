#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                sum++;
            }
            num /= 10;
        }
    }
    cout << sum;
    return 0;
}