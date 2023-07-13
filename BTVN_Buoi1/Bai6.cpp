#include<stdio.h>
#include<string.h>

#define MAX 505
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	char str[MAX];
	while(t--){
		fgets(str,sizeof(str), stdin);
		printf("%d %d\n",strlen(str),int(str[0]));
		int check=0;
		if(str[0] >= str[1]){
			for(int i=1; i < strlen(str)-2; i++){
				if(str[i] < str[i+1]){
					check=1;
					break;
				}
			}	
		}
		else if(str[0] <= str[1]){
			for(int i=1; i < strlen(str)-2; i++){
				if( str[i] > str[i+1]){
					check=1;
					break;
				}
			}		
		}
		if(!check)printf("Yes\n");
		else printf("No\n");
		
	}
	return 0;
}
