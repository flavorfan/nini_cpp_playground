#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a ,n ,sum=1 ;
    cin >> a >> n;
    for (int i = 0;i < n;i++){
        sum = sum * a;
    }
    cout << sum;
    return 0;
}
