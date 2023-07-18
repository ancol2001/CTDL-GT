#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void input(const char* filename,int x) {
    FILE* file = fopen(filename, "a");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }
    fprintf(file, " %d", x);
    fclose(file);
}
void generateRandomArray(int arr[], int n) {
    srand(time(NULL)); // Khởi tạo hạt giống cho hàm rand()

    for (int i = 0; i < n; i++) {
        arr[i] = rand();
        input("input.txt",arr[i]);
    }
}
int main(){
    int a[90005];
    int n=90000;
    generateRandomArray(a, n);
    return 0;
}