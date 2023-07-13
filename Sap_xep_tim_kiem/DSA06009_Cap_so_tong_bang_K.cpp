#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, k;
		scanf("%d %d",&n,&k);
		int a[n];
		for(int i=0; i<n;i++){
			scanf("%d",&a[i]);
		}
		int dem=0;
		for(int i =0; i<n-1; i++){
			for(int j=1+i; j<n; j++){
				if(a[i]+a[j] == k){
					dem++;
				}
			}
		}
		printf("%d\n",dem);
	}
}
