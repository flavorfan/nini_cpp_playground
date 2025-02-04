#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main()
{
    int sum = 0;
    // char a[ 257 ];
    string str;
    getline( cin , str );

    for ( int i = 0 ; i < str.length() ; i++ )
    {
        if ( str[ i ] >= '0' && str[ i ] <= '9' )
        sum ++ ;
    }
    cout <<  sum ;
}