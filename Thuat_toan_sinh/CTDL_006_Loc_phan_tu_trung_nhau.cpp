#include<stdio.h>
int main(){
	int n;
	int a[250],b[250]={};
	scanf("%d",&n);
	for(int i=0; i < n; i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(b[a[i]]>=1){
			printf("%d ",a[i]);
			b[a[i]]=0;
			}
	}
}
