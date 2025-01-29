#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a[201] = {0}, b[201] = {0};
    int n[201] = {0};
    string input;

    // 读取第一个数
    getline(cin, input);
    int len_a = input.length();
    for (int i = 0; i < len_a; ++i) {
        if (isdigit(input[len_a - 1 - i])) {
            a[i] = input[len_a - 1 - i] - '0';
        }
    }

    // 读取第二个数
    getline(cin, input);
    int len_b = input.length();
    for (int i = 0; i < len_b; ++i) {
        if (isdigit(input[len_b - 1 - i])) {
            b[i] = input[len_b - 1 - i] - '0';
        }
    }

    // 计算差
    int max_len = max(len_a, len_b);
    for (int i = 0; i < max_len; ++i) {
        n[i] += a[i] - b[i];
        if (n[i] < 0) {
            n[i] += 10;
            a[i + 1] -= 1;
        }
    }

    // 输出结果，去掉前导零
    bool flag = false;
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