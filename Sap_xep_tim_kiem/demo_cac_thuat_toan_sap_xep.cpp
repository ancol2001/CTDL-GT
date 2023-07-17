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
// Hàm tạo mảng ngẫu nhiên gồm n phần tử
void generateRandomArray(int arr[], int n) {
    srand(time(NULL)); // Khởi tạo hạt giống cho hàm rand()

    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }
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

void returntime(const char* filename,int n, int check, double time) {
    FILE* file = fopen(filename, "a");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }
    fprintf(file, "%\nVoi n = %d", n);
    switch (check) {
        case 1:
            fprintf(file, "\nquick sort : ");
            fprintf(file, "%f", time);
            break;
        case 2:
            fprintf(file, "\ninsertionSort : ");
            fprintf(file, "%f", time);
            break;
        case 3:
            fprintf(file, "\nselectionSort : ");
            fprintf(file, "%f", time);
            break;
        case 4:
            fprintf(file, "\nbubbleSort : ");
            fprintf(file, "%f", time);
            break;
    }
    // fprintf(file, "%f", time);
    fclose(file);
}
int main(){
    int a[10005], b[10005];
    int n=60;
    int check;
    clock_t start, end;
    double cpu_time_used;

    // Bắt đầu đo thời gian
    start = clock();

    // Tạo mảng ngẫu nhiên
    generateRandomArray(a, n);
    for(int i=0; i < n; i++){
		b[i]=a[i];
	}
    output(a,n);
    // quickSort(a,0,n-1); check = 1;
    // insertionSort(a,n); check = 2;
    // selectionSort(a,n); check = 3;
    bubbleSort(a,n); check = 4;
    // output(a,n);

    // Kết thúc đo thời gian
    end = clock();

    // Tính thời gian thực thi
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    const char* filename = "output.txt";
    returntime(filename, n, check, cpu_time_used);
    // In kết quả thời gian thực thi

    printf("Thoi gian thuc thi: %f s\n", cpu_time_used);
    return 0;
}