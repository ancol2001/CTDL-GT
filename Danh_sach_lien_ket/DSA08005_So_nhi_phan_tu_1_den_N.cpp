#include<bits/stdc++.h>
using namespace std;
int dem;
void locphat(stack<string> &st, int tmp, int n){
        while(!st.empty()&& dem<=n-1){
            string s = st.top();
            st.pop();
            if(s.length()==tmp){
                cout << s <<" ";
                dem++;
            }else{
                st.push(s + "1");
                st.push(s + "0");
            }
        }
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        stack<string> st;
        int n; cin >> n;
        int tmp=0;
        dem=0;
        while(tmp<=n-1)
        {
            tmp++;
            st.push("1");
            locphat(st,tmp,n);
        }
        cout <<"\n";
    }
    return 0;
}