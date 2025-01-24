#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n , total_coins = 0;
    cin >> n;

    int coins_per_day = 1;
    int days_with_same_coins = 0;

    for ( int day = 1 ; day <= n ; day++ ) {
        total_coins += coins_per_day;
        days_with_same_coins += 1;

        if ( days_with_same_coins == coins_per_day ) {
            coins_per_day += 1;
            days_with_same_coins = 0;
        }
    }
    cout << total_coins;
    return 0;
} 