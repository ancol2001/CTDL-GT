#include<stdio.h>
#include <stdbool.h>

bool check[25]={};
int n, a[25]={};
int b[25]={};
void print(){
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",b[a[i]]);
    }printf("\n");
    
}
void sapxep(){
	for(int i = 1; i <=n-1 ; i++){
		for(int j=i+1; j<=n; j++){
			if(b[i] > b[j]){
                int tg = b[i];
                b[i] = b[j];
                b[j] = tg;        
            }
		}
	}
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
//    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
		for(int i =1; i<=n; i++){
			scanf("%d",&b[i]);
		}
		sapxep();    
        Try(1);
        printf("\n");
    }
    return 0;
}
