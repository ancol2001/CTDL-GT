#include <bits/stdc++.h>
using namespace std;

int priority(char c)
{
    if (c == '^')
        return 4;
    if (c == '*' || c == '/')
        return 3;
    if (c == '+' || c == '-')
        return 2;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s,out="";
        int tmp=0;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                st.push(s[i]);
            
            else if (s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
            {
                while (!st.empty() && priority(st.top()) >= priority(s[i]))
                {
                    cout << st.top();
                    out += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    cout << st.top();
                    out += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                cout << s[i];
                out += s[i];
            }
        }
        while (!st.empty() && st.top() != '(')
        {
            cout << st.top();
            st.pop();
        }
        cout << "\n";
        for (int i = 0; i < out.length(); i++)
        {
            cout << out[i];
        }
        
        cout << "\n";
        
    }
    return 0;
}