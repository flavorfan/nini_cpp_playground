#include <iostream>
#include <stdio.h>
using namespace std;    

int main() {
    float a, b;
    cin>>a>>b;
    printf("%.3f%%",(b/a)*100);
    return 0;
}