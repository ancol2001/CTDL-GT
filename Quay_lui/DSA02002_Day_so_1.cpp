#include<bits/stdc++.h>
using namespace std;

void output(int a[], int n){
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if(i==n-1) cout << a[i] << "]";
        else cout << a[i] <<" ";
    }
    cout << " ";
}
void test(int a[], int n){
    n=n-1;
    
    for (int i = 0; i < n; i++)
    {
        a[i]=a[i]+a[i+1];
    }
    a[n]=0;
    output(a,n);
    if (n>1)
    {
        test(a,n);
    }

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==1){
            output(a,n);
        }else{
            output(a,n);
            test(a,n);
        }
        cout << "\n";
    }    
    return 0;
}