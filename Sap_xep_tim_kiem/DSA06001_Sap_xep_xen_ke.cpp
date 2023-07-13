#include<stdio.h>
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

void printArray(int a[], int n) {
    int dem = 0, check = 0;
		for(int i=0; i<n/2; i++){
			printf("%d ",a[n-1-i]);
			printf("%d ",a[i]);
		}
		if(n%2!=0){
			printf("%d",a[(n-1)/2]);
		}
    printf("\n");
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[1005] ;
		for(int i=0; i<n;i++){
			scanf("%d",&a[i]);
		}
	    quickSort(a, 0, n - 1);
    	printArray(a, n);
	}

    return 0;
}
