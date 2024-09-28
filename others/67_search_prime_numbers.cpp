#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    bool a[101];
    int i;
    for(i=1;i<101;i++){
        a[i]=true;
    }
    i=1;
    a[i]=false;
    do{
        i++;
        if(a[i]){
            for(int j=2;j<=100/i;j++){
                a[i*j]=false;
            }
        }
    } while(i<100);
    for(int k=1;k<101;k++){
        if(a[k]){
            cout<<k<<" ";
        }
    }
    
    
}