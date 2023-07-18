#include <bits/stdc++.h>
using namespace std;
//tìm kiếm nội suy
int noisuy(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        if (low == high) {
            if (arr[low] == key) {
                return low; // Trả về vị trí của giá trị tìm thấy trong mảng
            }
            return -1; // Trả về -1 nếu không tìm thấy giá trị trong mảng
        }

        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));

        if (arr[pos] == key) {
            return pos; // Trả về vị trí của giá trị tìm thấy trong mảng
        }

        if (arr[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1; // Trả về -1 nếu không tìm thấy giá trị trong mảng
}
void test() {
    int n; cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        m[x]++;
    }

    for (auto i : m) {
        if (i.second > n / 2) {
            cout << i.first;
            return;
        }
    }
    cout << "NO";
}

int main() {

    int t = 1; cin >> t;
    while (t--) {
        test();
        cout << "\n";
    }
    return 0;
}