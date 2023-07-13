#include <stdio.h>
#define MAX 1005
int main() {
	
    int t = 1, n, idx;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[MAX];
        int dem = 0;
        
        for (int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
            
        for (int i = 0; i < n; ++i) {
            idx = i;
            for (int j = i + 1; j < n; ++j)
                if (a[idx] > a[j])
                    idx = j;
            if(idx!=i) dem ++;
            int temp = a[i];
            a[i] = a[idx];
            a[idx] = temp;
        }
        printf("%d\n", dem);
    }
    return 0;
}

#include <stdio.h>
//
//int sapxepchen(int arr[], int n) {
//    int count = 0;
//
//    for (int i = 0; i < n-1; i++) {
//        for (int j = i+1; j < n; j++) {
//            if (arr[i] > arr[j]) {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//                count++;
//            }
//        }
//    }
//
//    return count;
//}
//int sxnoibot(int arr[], int n) {
//	int dem=0;
//    for (int i = 0; i < n-1; i++) {
//        for (int j = 0; j < n-i-1; j++) {
//            if (arr[j] > arr[j+1]) {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                dem++;
//            }
//        }
//    }
//    return dem;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//
//        int arr[n];
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &arr[i]);
//        }
//
//        int cnt = sxnoibot(arr, n);
//        printf("%d\n", cnt);
//    }
//
//    return 0;
//}

