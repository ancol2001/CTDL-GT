#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        stack<string> st;
        cin >> s;
        for (int i = s.length()-1; i >=0; i--)
        {
            if (s[i] == '+'|| s[i] == '-'|| s[i] == '^' || s[i] == '*'|| s[i] == '-'|| s[i] == '/')
            {
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                string tmp = x + y + string(1,s[i]);
                st.push(tmp);
            }else st.push(string(1,s[i]));
        }
        cout  << st.top() << "\n";
    }
    return 0;
}