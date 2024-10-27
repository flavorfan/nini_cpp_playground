#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;


int main() 
{
    float x1, y1, x2, y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // 输出面积
    printf("%.2f\n", area);

    return 0;
}
