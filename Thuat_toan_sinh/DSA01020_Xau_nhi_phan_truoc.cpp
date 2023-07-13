#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 205

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		int tmp = 1;
		char a[MAX];
		fgets(a,sizeof(a), stdin);
//		printf("%c\n",a[strlen(a)-2]);
		for(int i=strlen(a)-2; i>=0; i--){
			if(a[i]=='0'){
				if(tmp =1){
					a[i]='1';tmp=1;
				}else {
					a[i]='0';tmp=0;
					}
			}else
				if(tmp=1){
					a[i]='0';
				}else a[i]='1';
				tmp=0;
		}
		printf("%s",a);
	}
}
