#include<bits/stdc++.h>
using namespace std;

int to_5(string s){
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '6')
        {
            s[i] = '5';
        }
        n = n * 10 + (s[i] - '0');
    }
    return n;
}
int to_6(string s){
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '5')
        {
            s[i] = '6';
        }
        n = n * 10 + (s[i] - '0');
    }
    return n;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << to_5(a) + to_5(b) << " " << to_6(a) + to_6(b);
    // cout << a << " " << b;
    return 0;
}