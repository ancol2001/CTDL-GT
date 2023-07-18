#include<stdio.h>
#include <stdlib.h>
#include <time.h>
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

//Sap xep noi bot
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // output(arr,n);
}
// Sap xep chon
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    // output(arr,n);
}
// Sap xep chen
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    // output(arr,n);

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

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, mid, right, size - mid);
}

void returntime(const char* filename,int n, int check, double time) {
    FILE* file = fopen(filename, "a");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }
    fprintf(file, "\nVoi n = %d", n);
    switch (check) {
        // case 0:
        //     fprintf(file, "\nquick sort : ");
        case 1:
            fprintf(file, "\nquick sort : ");
            fprintf(file, "%fs", time);
            break;
        case 2:
            fprintf(file, "\ninsertionSort : ");
            fprintf(file, "%fs", time);
            break;
        case 3:
            fprintf(file, "\nselectionSort : ");
            fprintf(file, "%fs", time);
            break;
        case 4:
            fprintf(file, "\nbubbleSort : ");
            fprintf(file, "%fs", time);
            break;
        case 5:
            fprintf(file, "\nMergeSort : ");
            fprintf(file, "%fs", time);
            break;
    }
    // fprintf(file, "%f", time);
    fclose(file);
}
void readinput(const char* filename, int arr[], int n) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    fclose(file);
}
int main(){
    int a[90005];
    int n=7000;
    int check=1;
    clock_t start, end;
    double cpu_time_used;
    const char* filename = "output.txt";

    readinput("input.txt",a,n);

    // Bắt đầu đo thời gian
    start = clock();
    // quickSort(a,0,n-1); check = 1;
    // insertionSort(a,n); check = 2;
    // selectionSort(a,n); check = 3;
    // bubbleSort(a,n); check = 4;
    mergeSort(a,n); check =5;
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    returntime(filename, n, check, cpu_time_used);
    // output(a,n);
    printf("========\n");
    // In kết quả thời gian thực thi
    printf("Thoi gian thuc thi: %f s\n", cpu_time_used);
    return 0;
}