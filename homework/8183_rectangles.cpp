#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;    

int main() {
    int height, width;
    char a;
    bool b;
    cin >> height >> width >> a >> b;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (b == 1) {
                cout << a;
            } else {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << a;
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}