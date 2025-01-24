#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float prices[10] = {28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};
    int quantities[10];
    float total_cost = 0.0;

    for (int i = 0; i < 10; i++) {
        cin >> quantities[i];
        total_cost += prices[i] * quantities[i];
    }

    cout << fixed << setprecision(1) << total_cost << endl;
    return 0;
}