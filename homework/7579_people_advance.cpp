#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double x;
    cin >> x >> n;
    for (int i = 0;i < n;i++)
    {
        x=x*0.001+x;

    }
    printf ("%.4f",x);
    return 0;
}