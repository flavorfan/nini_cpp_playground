#include <iostream>
#include <stdio.h>
#include "63_the_eagle_catches_the_chicken.h"
using namespace std;

void printArray(int a[6])
{
    for (int k = 1; k < 6; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
}

int main() {
    int a[6];
    for(int i=1;i<6;i++){
        a[i]=i;
        // cout<<a[i]<<" ";
    }
    // cout<<endl;

    printArray(a);

    for(int j=1;j<=10;j++){
        for(int k=1;k<6;k++){
            a[k-1]=a[k];
        }
        a[5]=a[0];
        printArray(a);
    }
    return 0;
}
