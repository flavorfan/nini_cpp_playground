#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int ji,tu;
    for(ji=1;ji<35;ji++){
        for(tu=1;tu<35;tu++){
            if(ji+tu==35&&ji*2+tu*4==94){
                cout<<"鸡有"<<ji<<endl;
                cout<<"兔有"<<tu<<endl;
            }
        }
    }
}