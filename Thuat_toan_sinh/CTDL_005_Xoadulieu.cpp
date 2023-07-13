#include<stdio.h>
int main(){
	int n;
	int x;
	int a[250],b[250];
	scanf("%d",&n);
	for(int i=0; i < n; i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	int j = 0;
	for(int i=0; i<n; i++){
		if(a[i]!=x){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0; i<j; i++){
		printf("%d ",b[i]);
	}
}
