#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        stack<int> st2;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                int dem = 0;
                while (i < s.length() && s[i] >= '0' && s[i] <= '9')
                {
                    dem = dem * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                st2.push(dem);
            }
            else if (s[i] == ']')
            {
                string tmp = "";
                while (st.top() != "[")
                {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                string res = "";
                int num = st2.top();
                st2.pop();
                while (num--)
                {
                    res += tmp;
                }
                st.push(res);
            }
            else
            {
                st.push(string(1, s[i]));
                if (s[i] == '[' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9'))
                {
                    st2.push(1);
                }
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << "\n";
    }
}