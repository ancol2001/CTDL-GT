#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int a[1005];
		int dem[100006]={};
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
			dem[a[i]]++;
		}
		if(dem[k]>0){
			printf("%d\n",dem[k]);
		}else printf("-1");
		printf("\n");
	}
	return 0;
}
