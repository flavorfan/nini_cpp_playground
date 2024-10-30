#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{

    int n, x, y;
    int r;
    cin >> n >> x >> y;

    r = n - ceil((float)y / x);
    if (r >= 0)
        cout << r;
    else
        cout << 0;
    return 0;
}