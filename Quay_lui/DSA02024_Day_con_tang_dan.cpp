#include <bits/stdc++.h>
using namespace std;
vector<int> a, b;
int n;
vector<int> c;
vector<int> d;
vector<string> st;
int check()
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            dem++;
        }
    }
    if (dem < 2)
    {
        return 0;
    }
    else
    {
        c.clear();
        d.clear();
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == 1)
            {
                c.push_back(a[i]);
                d.push_back(a[i]);
            }
        }
        sort(c.begin(), c.end());
        if (c == d)
        {
            return 1;
        }
        else
            return 0;
    }
}
void print()
{
    sort(st.begin(), st.end());
    for (int e = 0; e < st.size(); e++)
    {
        cout << st[e]  << "\n";
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
        {
            if (check() == 1){
                string ss;
                for (int k = 1; k <= n; k++)
                {
                    if(b[k]==1){
                        ss += to_string(a[k]);
                        ss += " ";
                        // cout << a[k] << " ";
                    }
                }
                ss.pop_back();
                st.push_back(ss);
                // cout << ss << "\n";                
            }
        }
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    // c.clear();
    // d.clear();
    st.clear();
    // s = "";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        b[i] = 0;
    }
    Try(1);
    print();
    return 0;
}