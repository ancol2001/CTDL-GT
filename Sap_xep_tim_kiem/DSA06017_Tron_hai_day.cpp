//#include<stdio.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];
//    int i = (low - 1);
//
//    for (int j = low; j <= high - 1; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//    swap(&arr[i + 1], &arr[high]);
//    return (i + 1);
//}
//
//void quickSort(int arr[], int l, int r) {
//    if (l < r) {
//        int pi = partition(arr, l, r);
//        quickSort(arr, l, pi - 1);
//        quickSort(arr, pi + 1, r);
//    }
//}
//
//int main(){
//	int t;
//	scanf("%d",&t);
//	int n,m;
//	int a[100005], dem[100005]={};
//	int b[100005];
//	while(t--){
//		scanf("%d%d",&n,&m);
//		for(int i=0; i<n; i++){
//			scanf("%d",&a[i]);
//			dem[a[i]]++;
//		}
//		for(int i=0; i<m; i++){
//			scanf("%d",&a[i+n]);
//			dem[a[i+n]]++;
//		}
//		int tmp=0;
//		for(int i=0; i<n+m; i++){
//			if(dem[a[i]]>0) {
//				b[tmp]=a[i];
//				tmp++;
//				dem[a[i]]=0;
//			}
////			printf("%d ",a[i]);
//		}
//		quickSort(b, 0, tmp - 1);
//		for(int i=0; i<tmp; i++){
//			printf("%d ",b[i]);
//		}
//		
//		printf("\n");
//	}
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<int> v;
        while(n--)
        {
            cin >> x;
            v.push_back(x);
        }
        while(m--)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0 ; i< v.size(); i++) {
			cout << v[i] << ' ';
		}
        cout << endl;
    }
    return 0;
}
