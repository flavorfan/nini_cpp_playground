#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main()
{

    int n;
    cin >> n;

    int i=2, prime_cnt = 0;

    while (true)
    {
        if (isPrime(i))
        {
            prime_cnt++;
            if (prime_cnt == n)
            {
                cout << i;
                return 0;
            }
        }
        i++;    
    }

    return 0;
}