#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int a[5][5], b[5];
    int m, n;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m >> n;

    m -= 1;
    n -= 1;

    for (int i = 0; i < 5; i++) {
        b[i] = a[m][i];
        a[m][i] = a[n][i];
        a[n][i] = b[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}