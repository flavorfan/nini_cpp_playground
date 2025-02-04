

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[100001];
    cin.getline(a, 100001);

    int len = strlen(a);
    int freq[256] = {0}; // Frequency array for all ASCII characters

    // Count the frequency of each character
    for (int i = 0; i < len ; i++) {
        freq[(unsigned char)a[i]]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; i < len; i++) {
        if (freq[(unsigned char)a[i]] == 1) {
            cout << a[i] << " ";
            return 0;
        }
    }

    cout << "no";
    return 0;
}