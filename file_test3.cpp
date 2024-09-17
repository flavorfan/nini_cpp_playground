#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // freopen("nini.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int c=0;
    int x;
    while(true){
        cin>>x;
    if(!cin) break;
    c+=x;
    }
    cout<<c<<endl;

    return 0; 
}