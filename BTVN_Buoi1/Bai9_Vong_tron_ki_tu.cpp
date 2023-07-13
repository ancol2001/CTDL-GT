#include<stdio.h>
#include<string.h>

#define MAX 505
int main(){
	char str[MAX];
//	getchar();
	fgets(str,sizeof(str), stdin);
//	printf("%s",str);
	int dem = 0;
	for(int i=0; i < strlen(str)-2; i++){
		for(int j = i+1 ; j < strlen(str)-1; j++){
			if(str[i]==str[j] && (j>i+1)){
				dem ++;
				break;
			}
		}
	}
	printf("%d",(dem*(dem-1))/2);
}
