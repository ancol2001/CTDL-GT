#include <bits/stdc++.h>
using namespace std;

void test() {
    int n, sum = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum = max(a[i], sum + a[i]);
        ans = max(ans, sum);
    }
    cout << ans;
}

int main() {
    int t = 1; cin >> t;
    while (t--) {
        test();
        cout << "\n";
    }
    return 0;
}