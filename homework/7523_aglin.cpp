#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    printf("%8d %8d %8d\n",a,b,c);
    printf("%-8d %-8d %-8d",a,b,c);
    return 0;
}