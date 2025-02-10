#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N, i,j;
    cin >> N >> i >> j;

    // row
    for (int k = 0; k < N; k++) {
        cout << "(" << i << "," << k+1 << ") ";
    }
    cout << endl;

    // column
    for (int k = 0; k < N; k++) {
        cout << "(" << k+1 << "," << j << ") ";
    }
    cout << endl;

    // diagonal
    for (int k = 0; k < N; k++) {
        int dif = i - k -1;
        int y = j - dif;
        if (y > 0 && y <= N) {
            cout << "(" << k+1 << "," << y << ") ";
        }
    }
    cout << endl;

    // reverse diagonal
    for (int k = N-1; k >= 0; k--) {
        int dif = i - k -1;
        int y = j + dif;
        if (y > 0 && y <= N) {
            cout << "(" << k+1 << "," << y << ") ";
        }
    }
    // cout << endl;
    
    return 0;
}