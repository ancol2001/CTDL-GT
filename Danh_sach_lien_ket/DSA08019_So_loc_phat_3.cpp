#include <bits/stdc++.h>
using namespace std;
stack<string> st;
int dem=0;
void count(int n)
{
    while (!st.empty())
    {
        string s = st.top();
        st.pop();
        if (s.length() == n)
        {
            // cout << s << " ";
            dem++;
        }
        else
        {
            st.push(s + "8");
            st.push(s + "6");
        }
    }
}

void locphat(int n)
{ 
    while (!st.empty())
    {
        string s = st.top();
        st.pop();
        if (s.length() == n)
        {
            cout << s << " ";
        }
        else
        {
            st.push(s + "6");
            st.push(s + "8");
        }
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
        int tmp = 0;
        dem=0;
        while (tmp <= n - 1)
        {
            tmp++;
            st.push("8");
            st.push("6");
            count(tmp);
        }
        tmp = 0;
        cout << dem << "\n";
        while (n>0)
        {
            st.push("6");
            st.push("8");
            locphat(n);
            n--;
        }        
        cout << "\n";
    }
    return 0;
}