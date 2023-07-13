#include<stdio.h>
#include<string.h>
#define MAX 1005

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	char str[MAX];
	while(t--){
		int k;
		fgets(str,sizeof(str), stdin);	
//		printf("%s", str);
		k = strlen(str)-2;
//		printf("%d\n", k);
//		printf("%c\n", str[k-1]);
		while(str[k]=='1'){
			str[k]='0';
			--k;
		}
		if(k >= 0) str[k]='1';
		printf("%s", str);
	}
	return 0;
}
