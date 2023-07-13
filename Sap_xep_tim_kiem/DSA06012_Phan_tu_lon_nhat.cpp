#include <stdio.h>

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

void printArray(int arr[], int size, int k) {
    for (int i = size-1; i >=size-k; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int a[1005] ;
		for(int i=0; i<n;i++){
			scanf("%d",&a[i]);
		}
	    quickSort(a, 0, n - 1);
    	printArray(a, n, k);
	}

    return 0;
}
