#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() 
{
    int a [ 101 ] , b [ 101 ] , win_a = 0 , win_b = 0 ;
    int n , na , nb;
    cin >> n >> na >> nb;
    for ( int i = 0 ; i < na ; i++ )
    {
        cin >> a [ i ] ;
    }
    for ( int i = 0 ; i < nb ; i++ )
    {
        cin >> b [ i ] ;
    }
    // int ai = 0 , bi = 0;
    for ( int i = 0 ; i < n ; i++ )
        {
        int ca = a [ i % na ] , cb = b [ i % nb ] ;
        if ( ca != cb ){
            if ( ca == 0 && cb ==2 || ca == 2 && cb == 5 || ca == 5 && cb == 0 )
            {
                win_a ++;  
                // printf(" a: %d b: %d, win_a: %d, win_b: %d\n", ca, cb, win_a, win_b);
            }
            else{
                win_b ++;
                // printf(" a: %d b: %d, win_a: %d, win_b: %d\n", ca, cb, win_a, win_b);
            }
            // ai = ( ai + 1 ) % na;
            // bi = ( bi + 1 ) % nb;
        }
        
    }
    if ( win_a > win_b )
        {
            cout << "A" << endl;
        }
        else if ( win_a < win_b )
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "draw" << endl;
        }
    return 0;
}