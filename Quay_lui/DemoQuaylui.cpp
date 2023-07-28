#include <bits/stdc++.h>
using namespace std;
#define MAX 200
int a[MAX], n, k;

void Init()
{
    cout << "n k :\n";
    cin >> n >> k;
}
void output()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {                   
        a[i] = j;       
        if (i == k)     
            output();  
        else           
            Try(i + 1);
    }
}
int main()
{
    Init();
    a[0]=0;
    Try(1);
    return 0;
}