#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;


int main() 
{
    float x1, y1, x2, y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    return 0;
}
