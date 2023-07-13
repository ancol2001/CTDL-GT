#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int dem;
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            printf("%d(%d) ", i, dem);
        }
    }
    
}
