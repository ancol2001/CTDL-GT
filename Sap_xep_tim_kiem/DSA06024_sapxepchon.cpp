#include<stdio.h>
int main()
{
    int t = 1, n, m, x;
    //cin >> t;
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(int i=0; i <n; i++){
        	scanf("%d",&a[i]);
		}
        for(int i=0; i < n - 1; ++i)
        {
            int min_i=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[min_i])
                {
                    min_i=j;
                }
            }
            int temp=a[i];
            a[i]=a[min_i];
            a[min_i]=temp;
            printf("Buoc %d: ", i + 1);
            for(int z = 0; z < n; ++z) printf("%d ",a[z]);
            printf("\n");
        }
    }
    return 0;
}
