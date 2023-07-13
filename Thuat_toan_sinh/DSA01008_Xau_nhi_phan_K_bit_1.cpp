#include <stdio.h>
#define MAX 50
int a[MAX];
int n,k;
void out(){
	for(int i = 1; i<=n; i++){
		printf("%d",a[i]);
	}printf("\n");
}
void Try(int i){
	for(int j = 0; j <=1 ; j++){
		a[i]=j;
		if(i == n){
			int dem = 0;
			for(int i=1; i<=n;i++){
				dem=dem+a[i];
			}
			if(dem==k) out();
		}else Try(i+1);
	}
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    	scanf("%d %d",&n,&k);
    	Try(1);
    	printf("\n");
	}
    return 0;
}

