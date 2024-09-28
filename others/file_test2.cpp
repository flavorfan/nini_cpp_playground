#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("function_2.cpp");
    if(!in.is_open()) return 1;
    char buf[100];
    while(in.getline(buf,sizeof(buf))){
        cout<<buf<<endl;
    }
    return 0;
}