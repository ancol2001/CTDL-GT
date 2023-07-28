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
                string fi = st.top(); st.pop();
                string se = st.top(); st.pop();
                string tmp = "("+fi+ s[i] + se +")";
                st.push(tmp);
            }else st.push(string(1,s[i]));
        }
        cout  << st.top() << "\n";
    }
    return 0;
}