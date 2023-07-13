#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int dem = 0;
    if(n % 2 == 0){
    	for(int i=2; i<=n; i=i+2){
    		if(n % i ==0){
//    			printf("%d ",i);
    			dem ++;
			}
		}
	}
	printf("%d",dem);
    return 0;
}
