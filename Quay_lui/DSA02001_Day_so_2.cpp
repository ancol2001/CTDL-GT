#include <bits/stdc++.h>
using namespace std;
void output(int a[], int n, string s, stack<string>& st)
{
    s += '[';
    for (int i = 0; i < n; i++)
    {
        s += to_string(a[i]);
        if (i == n - 1)
        {
            s += "] ";
        }
        else
            s += ' ';
    }
    st.push(s);
}
void test(int a[], int n, string s, stack<string>& st)
{
    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + a[i + 1];
    }
    a[n] = 0;
    output(a, n, s, st);
    if (n > 1)
    {
        test(a, n, s, st);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        stack<string> st;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        if (n == 1)
        {
            output(a, n, s, st);
            while (st.size())
            {
                cout << st.top();
                st.pop();
            }
        }
        else
        {
            output(b,n,s,st);
            test(a, n, s, st);
            while (st.size())
            {
                cout << st.top();
                st.pop();
            }

        }
        cout  << "\n";
    }
    return 0;
}