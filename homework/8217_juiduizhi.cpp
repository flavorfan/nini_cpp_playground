#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    cin>>a;
    if(a>0)
    {
        printf("%.2f",a);
    }
    else
    {
        printf ("%.2f",fabs(a));
    }
}