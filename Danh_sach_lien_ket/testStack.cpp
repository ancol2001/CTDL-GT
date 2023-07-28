#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    // cin >> t;
    t=1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<long long> tich(4);
        tich.push_back(a[0]*a[1]);
        tich.push_back(a[n-1]*a[n-2]);
        tich.push_back(a[n-1]*a[n-2]*a[n-3]);
        tich.push_back(a[0]*a[1]*a[n-1]);
        sort(tich.rbegin(), tich.rend());
        // for (int i = 0; i < 4; i++)
        // {
        //     cout << tich[i] << " ";
        // }
        
        cout << tich[0] <<"\n";
    }
}