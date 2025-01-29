#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // input
    int n , sum[101] = {0} , carry = 0;
    cin >> n;
    int len = 1;
    sum [0] = 1;

    // calculate
    for (int i = 0; i < n; i++)
    {
        carry = 0;
        for ( int j = 0; j < len; j++)
        {
            sum [j] = sum [j] * 2 + carry;
            if ( sum [ j ] >= 10 ){
                carry = sum [ j ] / 10;
                sum [ j ] %= 10;
            }
            else{
                carry = 0;
            }
        }
        if ( carry > 0 ){
            len ++ ;
            sum[ len - 1 ] = carry;
        }

        // // debug
        // for ( int k = len - 1; k >= 0; k--)
        // {
        //     cout << sum [ k ];
        // }
        // cout << std::endl;

    }
    for ( int i = len - 1; i >= 0; i--)
    {
        cout << sum [ i ];
    }
    return 0;
}