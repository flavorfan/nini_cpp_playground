#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    double x, y, p, time = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> p;
        time += sqrt(x * x + y * y) / 50  * 2 + p * 1.5;
    }
    cout << ceil(time) << endl;
    return 0;
}