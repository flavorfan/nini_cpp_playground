#include <iostream>
#include <cmath>
#include <string>

using namespace std;


void prosess_string(string& str, int a[]) {
    
    int len = str.length();

    for (int i = 0; i < len; ++i) {
        if (isdigit(str[len - 1 - i])) {
            a[i] = str[len - 1 - i] - '0';
        }
    }
}

int main()
{
    
    int a[201] = {0}, b[201] = {0};
    int n[201] = {0};
    string input;

    getline(cin, input);
    int len_a = input.length();
    // for (int i = 0; i < len_a; ++i) {
    //     if (isdigit(input[len_a - 1 - i])) {
    //         a[i] = input[len_a - 1 - i] - '0';
    //     }
    // }
    prosess_string(input, a);

    getline(cin, input);
    int len_b = input.length();
    // for (int i = 0; i < len_b ; ++i) {
        // if (isdigit(input[len_b - 1 - i])) {
        //     b[i] = input[len_b - 1 - i] - '0';
        // }
    // }
    //
    prosess_string(input, b);

    // add
    int max_len = max(len_a, len_b);
    // for (int i =0;  i <  max_len  ; i++ ) {
    //     if (i < len_a && i < len_b) {
    //         n[max_len - i] = a[len_a - 1 - i] + b[len_b - 1 - i];
    //         if (n[max_len - i] >= 10) {
    //             n[max_len - i] -= 10;
    //             n[max_len - i - 1] += 1;
    //         }
    //     } else if (i < len_a) {
    //         n[max_len - i] = a[len_a -1];
    //     } else {
    //         n[max_len - i] = b[len_b - 1];
    //     }
    // }
    for (int i = 0; i < max_len; ++i) {
        n[i] += a[i] + b[i];
        if (n[i] >= 10) {
            n[i] -= 10;
            n[i + 1] += 1;
        }
    }
    // 处理可能的进位
    if (n[max_len] != 0) {
        max_len++;
    }

    // 
    bool flag = false;
    // for (int i = 0; i < max_len + 1; i++) {
    //     if (!flag && n[i] == 0) {
    //         continue;
    //     }
    //     else {
    //         flag = true;
    //     }
    //     cout << n[i];
    // }
    for (int i = max_len - 1; i >= 0; --i) {
        if (!flag && n[i] == 0) {
            continue;
        } else {
            flag = true;
        }
        cout << n[i];
    }
    if (!flag) {
        cout << 0;
    }


    return 0;
}