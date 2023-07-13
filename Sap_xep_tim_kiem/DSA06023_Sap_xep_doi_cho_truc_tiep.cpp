#include <bits/stdc++.h>
using namespace std;

void testCase() {

}

int main() {
    
    int T = 1;
    while (T--) {
        int n; cin >> n;
        int a[105];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (a[j] < a[i])
                    swap(a[i], a[j]);
            }
        
            cout << "Buoc " + to_string(i + 1) + ": ";
            for (int j = 0; j < n; ++j) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
        cout << "\n";
    }
    return 0;
}