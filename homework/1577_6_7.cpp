#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> b(n, false);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "Jolly" << endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        int diff = abs(a[i] - a[i - 1]);
        if (diff > 0 && diff < n) {
            b[diff] = true;
        }
    }

    for (int i = 1; i < n; i++) {
        if (!b[i]) {
            cout << "Not jolly" << endl;
            return 0;
        }
    }

    cout << "Jolly" << endl;
    return 0;
}