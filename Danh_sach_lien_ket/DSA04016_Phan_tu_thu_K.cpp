#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >>n >>m >>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        // for (int i = 0; i < a.size(); i++)
        // {
        //     cout << a[i] << " ";
        // }
        
        cout << a[k-1] << "\n";
    }
}