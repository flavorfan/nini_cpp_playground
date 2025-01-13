#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int n , s , d , time = 0 , t = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> d;

        if( s >= 90 && s <= 140 && d >= 60 && d <= 90 ) {
            t++;
            if (t > time){
            time = t;
        }
        }

        else{
            t = 0;
        }
    }
    cout << time;
    return 0;
}