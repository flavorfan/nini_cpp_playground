#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    bool a[10];
    int i,cishu;
    for(i=0;i<10;i++){
        a[i]=true;
    }
    i=10-1;
    a[i]=false;
    cishu=1;
    while(cishu<=1000){
        i=(i+cishu)%10;
        a[i]=false;
        cishu++;
    }
    for(i=0;i<10;i++){
        if(a[i]){
            cout<<i+1 << endl;
        }
    }
    // cout << a << endl;
    // cout << "Done!";
}