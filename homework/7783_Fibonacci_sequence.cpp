#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k;
    int a = 1, b = 0, c;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}