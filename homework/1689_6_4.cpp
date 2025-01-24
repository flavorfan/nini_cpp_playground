#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, age;
    cin >> n;
    int r[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        cin >> age;
        if (age >= 0 && age <= 18) {
            r[0]++;
        } else if (age >= 19 && age <= 35) {
            r[1]++;
        } else if (age >= 36 && age <= 60) {
            r[2]++;
        } else {
            r[3]++;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << fixed << setprecision(2) << (double)r[i] / n * 100 << "%" << endl;
    }
    return 0;
}