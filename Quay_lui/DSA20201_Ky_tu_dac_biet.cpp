#include <bits/stdc++.h>
using namespace std;

void test() {
    long long n, len, a[100], idx;
    string s;
    cin >> s >> n;
    len = s.length();
    s = ' ' + s;
    a[1] = len;
    for (int i = 2; i < 100; i++) {
        if (a[i - 1] * 2 >= n) {
            idx = i - 1;
            break;
        }
        a[i] = a[i - 1] * 2;
    }
    while (n > len) {
        if (a[idx] < n) {
            long long x = n - a[idx];
            if (x == 1)
                n = a[idx - 1];
            else
                n = x - 1;
        }
        idx--;
    }
    cout << s[n];
}

int main() {

    int t = 1; cin >> t;
    while (t--) {
        test();
        cout << "\n";
    }
    return 0;
}