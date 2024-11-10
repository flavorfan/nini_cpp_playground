#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n;
	int a;
	int b=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		for(int j=0;j<n;j++){
			if(a>b){
				b=a;
			}
		}
	}
	printf("%d",b);
	return 0;
}