#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float a;
    float sum;
    for(int i=0;i<12;i++){
        cin>>a;
        sum+=a;
    }
    printf("$%.2f",sum/12);
    return 0;
}