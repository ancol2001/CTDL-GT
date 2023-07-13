#include <bits/stdc++.h>
using namespace std;

int main() {

    int T = 1;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &i : a) cin >> i;

        // bubble sort
        for (int i = 1; i < n; ++i) {
            bool is_sorted = true;
            for (int j = 0; j < n - i; ++j) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    is_sorted = false;
                }
            }
            if (is_sorted) break;
        
            cout << "Buoc " + to_string(i) + ": ";
            for (int j = 0; j < n; ++j) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
        cout << "\n";
    }
    return 0;
}