#include <bits/stdc++.h>
#define MAX 100
using namespace std;
int X[MAX], A[MAX], C[MAX], F[MAX][MAX], n, V;
void Init(void)
{ // khởi tạo dữ liệu
    cin >> n >> V;// đọc số lượng đồ vật và trọng lượng túi
    for (int i = 1; i <= n; i++) // đọc vector trọng lượng và giá trị sử dụng
        cin >> A[i];
    for (int i = 1; i <= n; i++) // đọc vector trọng lượng và giá trị sử dụng
        cin >> C[i];
    for (int i = 1; i <= n; i++) // khởi đầu bảng phương án
        for (int i = 0; i <= V; i++)
            F[0][i] = 0;
}
void Optimization(void)
{ // thuật toán qui hoạch động
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= V; j++)
        {
            F[i][j] = F[i - 1][j];
            if (j >= A[i] && F[i][j] < F[i - 1][j - A[i]] + C[i])
                F[i][j] = F[i - 1][j - A[i]] + C[i];
        }
    }
}
void Trace(void)
{ // lần vết
    cout << "\n Giá trị tối ưu:" << F[n][V];
    cout << "\n Phương án tối ưu:";
    while (n != 0)
    {
        if (F[n][V] != F[n - 1][V])
        {
            cout << n << " ";
            V = V - A[n];
        }
        n--;
    }
}
int main(void)
{
    Init();
    Optimization();
    Trace();
}