#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int N , M;
    bool light=1;
    cin >> N >> M;
    cout << "1";
    for ( int i = 2 ; i <= N ; i++ ){
        light =true;
        for ( int j = 1 ; j <= M ; j++ ){
            if ( i % j == 0 ){
                light = !light;
            }
        } 
        if ( light == false){
            cout << "," << i;
        }
    }
return 0;
}