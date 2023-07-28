#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int a[MAX], n;
bool chuaxet[MAX];
void Init(){
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // cin >> a[i];
        chuaxet[i]=true;
    }
    
}
void output(){
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void Try(int i){
    for (int j = 0; j <= n; j++)
    {
        if (chuaxet[j])
        {
            a[i]=j;
            chuaxet[j]=false;
            if(i==n) output();
            else Try(i+1);
            chuaxet[j]=true;    
        }
        
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
    Init();
    Try(1);
    cout  << "\n";}
    
    return 0;
}