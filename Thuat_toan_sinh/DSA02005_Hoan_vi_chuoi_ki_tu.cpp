#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 1000

bool check[25]={};
int n, a[25]={};
char str[MAX]={};
void print(){
    for (int i = 1; i <= n; i++)
    {
        printf("%c",str[a[i]-1]);
    }printf(" ");
    
}

void Try(int i){
    for (int j = 1; j <= n; j++)
    {
        if(!check[j]){
            a[i]=j;
            check[j]=1;
            if (i == n)
            {
                print();
            }else Try(i+1);
            check[j]=0;
            
        }
    }
    

}
int main(){
    int t = 1;
    scanf("%d",&t);
    getchar();
//	char str[MAX];
    while(t--){
       	fgets(str,sizeof(str), stdin);
       	n = strlen(str)-1;
        Try(1);
        printf("\n");
    }
    return 0;
}
