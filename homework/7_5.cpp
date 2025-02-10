#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[101], s2[101];
    int len = 0;
    cin.getline(s1, 101);
    len = strlen(s1);
    for (int i = 0; i < len - 1; i++) {
        s2[i] = s1[i] + s1[i + 1];
    }
    s2[len - 1] = s1[len - 1] + s1[0];
    s2[len] = '\0';
    cout << s2 << endl;
    return 0;
}