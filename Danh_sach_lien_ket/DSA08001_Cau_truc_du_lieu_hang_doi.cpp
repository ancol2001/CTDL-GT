#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int x;
        queue<int> q;
        while (n--)
        {
            cin >> x;
            if (x == 1)
            {
                cout << q.size() << "\n";
            }
            else if(x==2){
                if (q.empty())
                {
                    cout << "YES\n";
                }else cout << "NO\n";    
            }else if (x==3){
                cin >> x;
                q.push(x);
            }else if (x == 4)
            {
                if (!q.empty())
                {
                    q.pop();
                }   
            }
            
            else if (x == 5)
            {
                if (q.empty())
                {
                    cout << "-1\n";
                }else cout << q.front() << "\n";   
            }else if (x == 6)
            {
                if (q.empty())
                {
                    cout << "-1\n";
                }else cout << q.back() << "\n";   
            }   
        }  
        cout << "\n";
    }
    return 0;   
}