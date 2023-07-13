#include<stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
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

void quickSort(int arr[], int l, int r) {
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
        int n;
        scanf("%d",&n);
        int a[1005];
        int dem[100005]={};
        int b[1005];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            dem[a[i]]++;
        }
        int tmp=0;
        for(int i=0; i<n; i++){
            if (dem[a[i]]>0)
            {
                b[tmp]=a[i];
                tmp++;
                dem[a[i]]=0;
            }
            
        }
        quickSort(b,0,tmp-1);
        printf("%d\n",b[tmp-1]-b[0]-tmp+1);
        
    }
}