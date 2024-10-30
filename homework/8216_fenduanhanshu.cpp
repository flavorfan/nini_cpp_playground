#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
//     float n,y;
//     cin>>n;

//     if( 0<=n && n<5){
//         y=-n + 2.5;
//     }
//     else if( 5<=n && n<=10){
//         y=2 - 1.5 * (n - 3) * (n - 3);
//    }
//     else if( 10<n && n<20 ){
//         y=n / 2 - 1.5;
//     }
 
//     // if (n<=5) y=- n + 2.5;
//     // else if (n<10) y=2 - 1.5 * (n - 3) * (n - 3);
//     // else y=n / 2 - 1.5;
//     // printf ("%.3f",y);
//     return 0;

    float x, y;
    cin >> x;
    if ( x >= 0 && x < 5 )
        y = -x + 2.5;
    else if ( x >= 5 && x < 10 )
        y = 2 - 1.5 * (x-3) * (x-3);
    else if ( x >= 10 && x < 20)
        y = x / 2 - 1.5;
    printf("%.3f", y);
    return 0;
}
