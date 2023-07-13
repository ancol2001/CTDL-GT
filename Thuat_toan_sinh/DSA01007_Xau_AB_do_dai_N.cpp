#include <stdio.h>

void sinh(int n, int a[], int index) {
    if (index == n) {
        for (int i = 0; i < n; i++) {
//            printf("%d", a[i]);
			if(a[i]==0){
				printf("A");
			}else printf("B");
        }
        printf(" ");
    } else {
        a[index] = 0;
        sinh(n, a, index + 1);

        a[index] = 1;
        sinh(n, a, index + 1);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    int n;
    while(t--){
    	scanf("%d",&n);
    	int a[n];
    	sinh(n,a,0);
    	printf("\n");
	}
    return 0;
}

