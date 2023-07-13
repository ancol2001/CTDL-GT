#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,UCLN,BCNN;
		scanf("%d%d",&a,&b);
		BCNN=a*b;
		while(a*b!=0){
			if(a>b){
				a=a%b;
			}else b=b%a;
			UCLN=a+b;
		}
		printf("%d %d\n",UCLN,BCNN/UCLN);
	}
}
