#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{

    double a, b, c;
    double delta;
    double x1, x2;
    cin >> a >> b >> c ;


    delta = b * b - 4 * a * c;

    if (fabs(delta) < 0.00001){
        x1 = (-b )/(2*a);
        // cout << "x1=x2=" << x1;
        printf("x1=x2=%.5f", x1);
    }
    else if (delta > 0)
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        // cout << "x1=" << x1 << ";" << "x2=" << x2;
        printf("x1=%.5f;x2=%.5f", x1,x2);
    }
    else {
        x1 = -b / (2*a);
        x2 = sqrt(-delta)/(2*a);
        if (fabs(x1) < 0.00001)
            x1 = 0;
        // cout <<  "x1=" << x1 << "+" << x2 << "i" << ";" << "x2=" << x1 << "-" << x2 << "i";
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", x1, x2, x1, x2);
    }


    return 0;
}