#include<bits/stdc++.h>
using namespace std;
stack<string> st;
void locphat(int n){
        while(!st.empty()){
            string s = st.top();
            st.pop();
            if(s.length()==n){
                cout << s <<" ";
            }else{
                st.push(s + "6");
                st.push(s + "8");
            }
        }
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;

        while(n>0)
        {
            st.push("6");
            st.push("8");
            locphat(n);
            n--;
        }
        cout <<"\n";
  
    }
    return 0;
}