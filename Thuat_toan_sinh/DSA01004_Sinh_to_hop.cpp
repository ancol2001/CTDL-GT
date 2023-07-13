#include<stdio.h>
int n,k;
int a[25];

void out(){
	for(int i = 1; i <=k ; i++){
		printf("%d",a[i]);
	}
	printf(" ");
}
void Try(int i){
	for(int j = a[i-1]+1; j <= n - k + i; j++){
		a[i]=j;
		if(i == k) out();
		else Try(i+1);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		Try(1);
		printf("\n");
	}
	return 0;
}
