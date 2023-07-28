#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        int n;
        cin >> n;
        vector<int> a(n), check(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n-1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <=a[i])
            {
                st.pop();
            }
            if(st.empty()) check[i] = -1;
            else check[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << check[i] << " ";
        }
        
        cout << "\n";
    }
    return 0;
}