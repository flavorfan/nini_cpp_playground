
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // input
    int n;
    // cout << "Enter the number of people: ";
    cin >> n;

    // result: day, n_return_day
    int day = 0;
    int n_return_day = 0;

     do {
        if (n % 3 == 1 && n_return_day == 0) {
            n_return_day = day + 1; 
        }
        
        int out = (n+2) / 3;
        // cout << "out: " << out << endl;
        n -= out;
        day++;
     } while (n > 0);

    // output
    cout << day << " "<< n_return_day << endl;
}