#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[81];
    cin.getline(a, 80);
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (isupper(a[i])) {
            if (a[i] == 'Z') {
                a[i] = 'A';
            } else {
                a[i] = a[i] + 1;
            }
        } else if (islower(a[i])) {
            if (a[i] == 'z') {
                a[i] = 'a';
            } else {
                a[i] = a[i] + 1;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        cout << a[i];
    }

    return 0;
}