#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // vector<long long> a;
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n-1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int check = -1;
        for (int i = 0; i < n-1; i++)
        {
            int x; cin >> x;
            if (x != a[i] && check == -1)
            {
                check = i+1;
            }    
        }
        cout << check << "\n";
    }
    return 0;
}