#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double R, M, Y;
    cin >> R >> M >> Y;
    R= R / 100;
    for (int i = 0;i < Y;i++)
    {
        M = M * ( 1 + R );
    }
    cout<<(int)M;
    return 0;
}