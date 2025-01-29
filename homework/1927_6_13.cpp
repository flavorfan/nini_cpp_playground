#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void prosess_string(string& str, int a[]) {
    
    int len = str.length();

    for (int i = 0; i < len; ++i) {
        if (isdigit(str[i])) {
            a[i] = str[i] - '0';
        }
    }
}

bool is_zhengchu(int n[],int len,  int i)
{
    int carry = 0;

    int beichushu = 0;
    for ( int j = 0 ; j < len ; j ++ )
    {
        // int carry = 0;
        beichushu = n[j] + carry *10;
        carry = beichushu % i;
        // n[j+1] += carry * 10;
    }
    return carry == 0;
}

int main()
{
    int n [ 30 ] = { 0 } ;
    string input;
    getline(cin, input);
    int len = input.length();
    prosess_string(input, n);
    
    // for ( int i = 2 ; i <= 9; i++ ){
    //     int carry = 0;
    int count = 0;
    for ( int i = 2 ; i <= 9; i++ )
    {
        if (is_zhengchu(n , len , i ))
        {
            cout << i << " ";
            count ++;
        }
        
    }
    if (count == 0)
    {
        cout << "none";
    }

    return 0;
}