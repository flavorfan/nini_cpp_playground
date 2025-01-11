#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int N ,m ,sum=0;
    cin >> N >> m;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        if ( a == m ){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
