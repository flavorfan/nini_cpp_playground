#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int a[1000], b[1000], n;
    int sum = 0;
    cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        for (int j = 0; j < n; j++)
        {
            sum += a[j] * b[j];
        }
    cout << sum << endl;
    return 0;
}