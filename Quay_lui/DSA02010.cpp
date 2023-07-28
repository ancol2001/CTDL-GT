#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
bool ok;

void Try(int limit, int value, vector<int> v)
{
    if (value == x)
    {
        ok = true;
        cout << "[";
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i];
            if (i != v.size() - 1)
                cout << " ";
        }
        cout << "] ";
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= limit && value + a[i] <= x)
        {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> x;
        a.resize(n);
        ok = false;
        for (int i=0; i<n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        Try(1, 0, {});
        if (!ok)
            cout << -1;
        cout << "\n";
    }
    return 0;
}