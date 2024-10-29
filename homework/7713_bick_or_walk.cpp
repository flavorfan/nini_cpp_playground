#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,w;
    cin>>a;
    w=a / 1.2;
    b=a / 3 + 27 + 23;
    if (b < w)
    {
        cout<<"Bike";
    }
    else if (b > w)
    {
        cout<<"Walk";
    }
    else{
        cout<<"All";
    }
    return 0;   
}