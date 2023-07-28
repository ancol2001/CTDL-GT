#include <bits/stdc++.h>
using namespace std;
char c;
int k;
string s;
void Try(char i){
    for (char j = i; j <= c; j++)
    {
        s.push_back(j);
        if (s.length() == k)
        {
            cout << s << "\n";
        }else Try(j);
        s.pop_back();
    }
    
}

int main() {
    cin >> c >> k;
    Try('A');
    cout << "\n";
    return 0;
}
