#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int a[100000];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long dem = 0;
        for (int i = 0; i < n; ++i)
        {
            dem += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
        }
        cout << dem;
        cout << "\n";
    }
    return 0;
}