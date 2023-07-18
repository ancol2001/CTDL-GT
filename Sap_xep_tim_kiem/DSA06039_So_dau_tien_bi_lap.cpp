#include <stdio.h>
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
void tuyentinh(int a[], int n)
{
    int idx = -1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                idx = i;
                i = n - 1;
                break;
            }
        }
    }
    if (idx >= 0)
        printf("%d\n", a[idx]);
    else
        printf("NO\n");
}

//tim kiem nhi phan
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n]={};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i]=a[i];
        }
        tuyentinh(a, n);
        // insertionSort(a,n);
        // for (int i = 0; i < n; i++)
        // {
        //     if(binarySearch(a,0,n-1,a[i]) != -1){
        //         printf("%d\n",b[i]);
        //         break;
        //     }else{ printf("NO\n"); break;}
        // }
        
    }
    return 0;
}