#include <stdio.h>

// 比较函数：升序
int ascending(int a, int b) {
    return a - b;
}

// 比较函数：降序
int descending(int a, int b) {
    return b - a;
}

// 通用排序函数，接受一个函数指针作为比较器
void sort(int arr[], int n, int (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (cmp(arr[j], arr[j+1]) > 0) {   // 调用回调函数
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(void) {
    int a[] = {5, 2, 8, 1, 9};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, n, ascending);    // 传入升序比较函数
    for (int i = 0; i < n; i++) printf("%d ", a[i]);   // 1 2 5 8 9
    printf("\n");

    sort(a, n, descending);   // 传入降序比较函数
    for (int i = 0; i < n; i++) printf("%d ", a[i]);   // 9 8 5 2 1
    printf("\n");

    return 0;
}