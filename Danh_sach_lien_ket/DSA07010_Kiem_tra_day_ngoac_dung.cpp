#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        stack<char> st;
        cin >> s;
        int check = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == '}')
            {
                if (!st.empty() && st.top() == '{')
                {
                    check = 1;
                    st.pop();
                }
                else
                {
                    check = 0;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if (!st.empty() && st.top() == '[')
                {
                    check = 1;
                    st.pop();
                }
                else
                {
                    check = 0;
                    break;
                }
            }
            else if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                    check = 1;
                    st.pop();
                }
                else
                {
                    check = 0;
                    break;
                }
            }
        }
        if (!st.empty())
        {
            check = 0;
        }
        if (check)
        {
            cout << "YES\n";
        }else cout << "NO\n";
        
        // cout << check << "\n";
    }
}
// 4 1 2 5 3
// 1 2 3 4 5