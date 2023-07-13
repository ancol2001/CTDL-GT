#include<stdio.h>
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int a[105];
		int n;
		scanf("%d",&n);
		for(int i=0; i <n; i++){
			scanf("%d",&a[i]);
		}
		int check = 0;
		for(int i=0; i<n/2; i++){
			if(a[i]!=a[n-i-1]){
				printf("NO\n");
				check = 1;
				break;
			}
		}
		if(!check) printf("YES\n");
	}
}
