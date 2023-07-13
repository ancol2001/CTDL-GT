#include<stdio.h>
#include<math.h>

void swap(long long* a, long long* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(long long arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(long long arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        long long a[100005],b[100005];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%lld",&b[i]);
        }
        quickSort(a,0,n-1);
        quickSort(b,0,m-1);
        printf("%lld\n",a[n-1]*b[0]);   
    }
    return 0;
}