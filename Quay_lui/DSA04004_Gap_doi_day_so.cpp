#include<bits/stdc++.h>
using namespace std;

vector<long long> f(55);
void init(){
    f[1]=1;
    for (int i = 2; i < f.size(); i++)
    {
        f[i] = f[i-1]*2;
    }
    
}
// 1 121 1213121 121312141213121
// i 1 2 3 4 5
// f 1 2 4 8 16
int main(){
    int t;
    cin >> t;
    init();
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        for (int i = n; i >=1; i--)
        {
            int x = f[i];
            if( k > f[i]) k -= f[i];
            else if (k == f[i])
            {
                cout << i;
                break;
            }
            
        }
        cout << "\n";
        
    }
    return 0;
}