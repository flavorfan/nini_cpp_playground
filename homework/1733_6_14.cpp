#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int n, result[100000] = {0}, carry = 0;
    cin >> n;
    int len = 1;
    result[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            result[ j ] = result[ j ] * i + carry;
            // if (result[ j ] >= 10)
            // {
            //     carry = result[ j ] / 10;
            //     result[ j ] %= 10;
            // }
            // else
            // {
            //     carry = 0;
            // }
            carry = result[j] / 10;
            result[j] %= 10;
        }
        // if (carry > 0)
        // {
        //     len ++;
        //     result[ len - 1 ] = carry;
        // }
        while (carry > 0)
        {
            result[len] = carry % 10;
            carry /= 10;
            len++;
        }
    }
    for (int i = len - 1; i >= 0; i--)
    {
        cout << result[ i ];
    }
    return 0;
}