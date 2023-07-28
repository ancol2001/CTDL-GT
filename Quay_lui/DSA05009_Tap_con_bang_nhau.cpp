#include <bits/stdc++.h>
using namespace std;

int n, sum;
int a[105];
bool check;

void Try(int i, int s) {
    if (i == n || s == sum / 2) {
        if (s == sum / 2) check = true;
        return;
    }
    if (s + a[i] <= sum / 2) {
        Try(i + 1, s + a[i]);
    }
    Try(i + 1, s);
}

void test() {
    cin >> n;
    sum = 0;
    check = false;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0) {
        Try(0, 0);
    }
    cout << (check ? "YES" : "NO");
}

int main() {

    int t; 
    cin >> t;
    while (t--) {
        test();
        cout << "\n";
    }
    return 0;
}