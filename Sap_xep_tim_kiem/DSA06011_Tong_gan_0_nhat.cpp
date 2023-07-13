#include<stdio.h>
#include<math.h>
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
    int t=1;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        int a[1005];
        scanf("%d",&n);
        int x=0,y=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[0]+a[1];
        for(int i=0; i<n-1; i++){
            for (int j = i+1; j < n; j++)
            {
                if(abs(min) > abs(a[i]+a[j])) min=a[i]+a[j];
            }
            
        }
        printf("%d\n",min);
    }
    
}