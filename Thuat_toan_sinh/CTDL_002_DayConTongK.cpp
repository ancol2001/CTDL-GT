#include<stdio.h>
#include<math.h>
int max = 0,n,K;
int a[50],b[50];
int tong(){
	int s=0;
	for(int  i = 1; i<= n; i++){
		s = s + a[i]*b[i];
	}
	return s;
}
void print(){
	for(int i =1; i <= n; i++){
		if(b[i]==1)printf("%d ",a[i]);
	}
	printf("\n");
}

void Try(int i){
	for(int j = 0; j<=1; j++){
		b[i]=j;
		if(i==n){
			if(tong()== K){
				print(); max++;
			}
		}else Try(i+1);
	}
}
int main(){
	scanf("%d %d",&n,&K);
	for(int i=1; i<=n; i++){
		scanf("%d",&a[i]);
	}
	Try(1);
	printf("%d",max);
}
