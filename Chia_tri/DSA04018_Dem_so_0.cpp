#include <iostream>
#include <vector>
using namespace std;

int dem0(vector<int>& a, int n) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

void test() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int dem = dem0(a, n);
    cout << dem << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}
