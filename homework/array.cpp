#include <iostream>

using namespace std;
   

int main() {

    // int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int a[3];
    // a[0] = 10;
    // for ( int i = 0; i < 4   ; i++ ) {
    //     cout << a[i] << endl;
    // }

    // heap allocation
    int *a = new int[3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    for ( int i = 0; i < 3; i++ ) {
        cout << a[i] << endl;
    }

    delete [] a;

    return 0;
}