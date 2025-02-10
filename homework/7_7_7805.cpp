#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[256] = {0};
    cin.getline(a, 255);
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == 'A') {
            cout << 'T';
        } else if (a[i] == 'T') {
            cout << 'A';
        } else if (a[i] == 'G') {
            cout << 'C';
        } else if (a[i] == 'C') {
            cout << 'G';
        }
    }
    cout << endl;
    return 0;
}