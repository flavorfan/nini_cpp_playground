#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y ;

    if ( x <= 1 && x >= -1 && y <= 1 && y >= -1)
        cout << "yes";
    else
        cout << "no";

    return 0;
}