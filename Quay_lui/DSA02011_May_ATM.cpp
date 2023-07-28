#include <bits/stdc++.h>
using namespace std;

int n, S, ans;
vector<int> a;

void Try(int i, int sum, int dem) {
    if (i == n || sum >= S || dem >= ans) {
        if (sum == S) ans = min(ans, dem);
        return;
    }
    Try(i + 1, sum, dem);
    Try(i + 1, sum + a[i], dem + 1);
}

void test() {
    cin >> n >> S;
    ans = n+1;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0, 0, 0);
    cout << (ans != n+1 ? ans : -1);
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        test();
        cout << "\n";
    }
    return 0;
}