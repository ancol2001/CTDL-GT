#include <bits/stdc++.h>
using namespace std;
void kiemtra(){
        stack<char> st;
        string s;
        cin >> s;
        // cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ')')
            {
                st.push(s[i]);
            }else{
                bool check=false;
                while (!st.empty())
                {
                    char c = st.top();st.pop();
                    if (c == '+' || c =='-' || c=='/' || c=='*')
                    {
                        check =true;
                    }
                    if (c == '(')
                    {
                        break;
                    }  
                }  
                if (!check)
                {
                    cout << "Yes";
                    return;
                }               
            }
        }
        cout << "No";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        kiemtra();
        cout << "\n";
    }
    return 0;
}
