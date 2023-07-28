#include<bits/stdc++.h>
using namespace std;
void count(string s){
    stack<char> st;
    int open = 0, close = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
        {
            open++;
            st.push(s[i]);
        }
        else {
            if (!st.empty() && st.top() == '(' )
            {
                open --;
                st.pop();
            }
            else{
                close++;
                st.push(s[i]);
            }
        }  
    }
    int dem = open/2 + close/2;
    dem += open%2 + close %2;
    cout << dem;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        count(s);
        cout << "\n";
    }
    return 0;
}