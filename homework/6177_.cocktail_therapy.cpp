#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double x, y;   
    double a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i==0){
            cin >> a >>b;
            x = b/a ;
        }
        else{
            cin >> a >> b;
            y = b/a;
            if ((x-y) > 0.05){
                cout<< "worse" << endl;
            }
            else if ((y-x) > 0.05){
                cout<< "better" << endl;
            }
            else{
                cout<< "same" << endl;
            }
        }
    }
    return 0;
}