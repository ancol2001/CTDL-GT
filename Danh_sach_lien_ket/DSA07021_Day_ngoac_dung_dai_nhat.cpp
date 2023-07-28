#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')' && !st.empty() && s[st.top()] =='(')
            {
                st.pop();
            }else st.push(i);
            
        }
        if (st.empty())
        {
            cout << s.length();
        }
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        sort(v.begin(), v.end());
        if (v.front() != 0)
        {
            v.insert(v.begin(),-1);
        }
        if (v.back() != s.length()-1)
        {
            v.insert(v.end(), s.length());
        }
        int res = 0;
        for (int  i = 1; i < v.size(); i++)
        {
            res = max(res, v[i] - v[i-1]-1);
        }
        cout << res << "\n";   
    }
    return 0;
}