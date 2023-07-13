//#include<stdio.h>
//
//int main(){
//	int t;
//	scanf("%d",&t);
//	while(t--){
//		int n,m;
//		scanf("%d %d",&n,&m);
//		int a[100005],b[100005],c[100005]={};
//
//		for(int i=0; i<n; i++){
//			scanf("%d",&a[i]);
//			c[a[i]]++;
//		}
//		for(int i=0; i<m; i++){
//			scanf("%d",&b[i]);
//			a[i+n]=b[i];
//			c[a[i+n]]++;
//		}
//		int tmp=0;
//		for(int i=0; i<n+m; i++){
//			if(c[a[i]]>1){
////				printf("%d ",a[i]);
//				b[tmp]=a[i];
//				tmp++;
//				c[a[i]]=1;}
//		}
////		
//		for(int i=0; i<n+m; i++){
//			if(c[a[i]]>0){
//				printf("%d ",a[i]);
//				c[a[i]]=0;
//			}
//		}
//		printf("\n");
//		for(int i=0; i<tmp; i++){
//			printf("%d ",b[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


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
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		vector<int> M(m), N(n);
		set<int> S, X, Y;
		for (int i = 0; i < m; i++) {
			cin >> M[i];
			S.insert(M[i]);
			X.insert(M[i]);
		}
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			S.insert(N[i]);
			Y.insert(N[i]);
		}
		for (auto x : S)cout << x << " ";
		cout << endl;
		for (auto x : X)if (Y.count(x) != 0)cout << x << " ";
		cout << endl;
	}
}
