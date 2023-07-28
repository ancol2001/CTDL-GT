#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){ 
        int n,k;
        cin >> n >> k;
        int sum =0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        // 5 3
        // 2 4 5 8 10
        k = min(k,n-k);
        for (int i = 0; i < k; i++)
        {
            sum -= a[i]*2;
        }
        cout << sum ;
        cout << "\n";
    }
    return 0;
}