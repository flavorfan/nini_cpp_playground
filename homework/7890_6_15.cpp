#include <iostream>
#include <cmath>
#include <string>

using namespace std;



int  process_jiechen(int result[], int n )
{
    int carry = 0;
    int len = 1;

    result[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < len; j++)
        {
            result[ j ] = result[ j ] * i + carry;

            carry = result[j] / 10;
            result[j] %= 10;
        }
        while (carry > 0)
        {
            result[len] = carry % 10;
            carry /= 10;
            len++;
        }
    }
    return len;
}

int add(int a[], int b[], int len_a, int len_b)
{
    int max_len = max(len_a, len_b);

    for (int i = 0; i < max_len; ++i) {
        a[i] += b[i];
        if (a[i] >= 10) {
            a[i] -= 10;
            a[i + 1] += 1;
        }
    }
    // 处理可能的进位
    if (a[max_len] != 0) {
        max_len++;
    }
    return max_len;
}


int main()
{
    int n, jiechen[1000] = {0}, result[1000] = {0}, carry = 0;
    int len, result_len = 1;
    cin >> n;

    for ( int i = 1 ; i <= n ; i++ ){
        int len = process_jiechen(jiechen, i);
        result_len = add(result, jiechen, result_len, len);
    }
    // cout << len << endl;

    // debug
    for (int i = result_len - 1; i >= 0; i--)
    {
        cout << result[ i ];
    }

    return 0;
}