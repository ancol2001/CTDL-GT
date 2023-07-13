#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int x = n%10;
		while(n>10){
			n=n/10;
		}
		printf("%d",n);
		if (x==n)printf("YES");
		else printf("NO");
		printf("\n");
	}
}
