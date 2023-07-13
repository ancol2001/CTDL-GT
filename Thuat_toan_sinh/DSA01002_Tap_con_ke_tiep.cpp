#include<stdio.h>
#include<string.h>
#define MAX 1005

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		int a[MAX];
		scanf("%d%d",&n,&k);
		for(int i=1; i<=k; i++){
			scanf("%d",a[i]);
		}
		int tmp =k;
		while(a[tmp] == n-k+tmp) --tmp;
		if(tmp > 0){
			++a[tmp];
			for(int i=tmp+1; i<=k; i++){
				a[i]=a[i-1]+1;
			}
			for(int i=1; i<=k; i++){
				printf("%d ",a[i]);
			}
		}else{
			for(int i=1; i<=k; i++){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	return 0;
}
