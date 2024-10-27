#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;


int main() 
{
    int a1,a2,n;
    cin >> a1 >> a2 >> n;
    int a=a2-a1;
    int an=a1+(n-1)*a;
    cout<<an;
    return 0;
}
