#include <iostream>

using namespace std;


int main() {
    int a[100];
    int n , m , sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++) {
        if (a[i] == m) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}