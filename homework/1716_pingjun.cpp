#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n;
	float sum=0;
    float a=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a;
		sum=sum+a;
	}
	printf("%.2f",sum/n);
}