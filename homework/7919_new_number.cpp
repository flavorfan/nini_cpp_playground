#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int a = 0 , n;
    cin >> n;
    if (n==0){
        cout << n << endl;
    }
    else if ( n < 0){
        cout << "-" ;
        n = -n;
    } 
    for (int i = n ; i > 0 ; i/=10){
        a = a * 10 + i % 10 ;
        if (i < 0){
            break;
        }
    }
    cout << a ;
return 0;
}