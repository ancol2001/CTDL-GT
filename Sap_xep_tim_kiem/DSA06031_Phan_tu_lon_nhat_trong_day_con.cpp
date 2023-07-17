#include<stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void output(int a[], int n) {
	for(int i=0; i < n; i++){
		printf("%d ",a[i]);
	}
    printf("\n");
}

//Thuat toán sắp xếp QUICK SORT
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
    while (t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int b[k];
        for (int i = 0; i <= n-k; i++)
        {
            int max=0;
            for (int j = 0; j < k; j++)
            {
                b[j]=a[j+i];
                if (b[j]>max)
                {
                    max=b[j];
                }
                
            }
            printf("%d ",max);
        }
        printf("\n");
        
    }
    
}