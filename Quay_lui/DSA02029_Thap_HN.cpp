/**
 *1. Di chuyển n-1 đĩa từ cột A sang cột trung gian (ví dụ cột B) 
 * bằng cột đích (cột C) làm trung gian.
 *2. Di chuyển đĩa còn lại (đĩa lớn nhất) từ cột A sang cột đích (cột C).
 *3.  Di chuyển n-1 đĩa từ cột trung gian (ví dụ cột B) sang cột đích (cột C) 
 * bằng cột ban đầu (cột A) làm trung gian.
Bước 1 và 3 có thể giải quyết bằng cách gọi đệ quy, và bước 2 là di chuyển trực tiếp.
*/
#include <bits/stdc++.h>
using namespace std;
void Try(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " -> " << c << "\n";
        return;
    }

    Try(n - 1, a, c, b);
    cout << a << " -> " << c << "\n";
    Try(n - 1, b, a, c);
}

int main() {
    int n;
    cin >> n;

    Try(n, 'A', 'B', 'C');

    return 0;
}
