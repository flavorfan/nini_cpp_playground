#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n;
	long sum=0;
	double avg=0;
    int a;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a;
		sum=sum+a;
	}
	avg=double(sum) / n;

	printf("%d %.5f",sum,avg);
}