#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("nini.txt");
    if(!in.is_open()) return 1;

    int x;
    while(!in.eof()){
        in>>x;
        if(!in) break;
        cout<<x<<endl;
    }
    return 0;
}