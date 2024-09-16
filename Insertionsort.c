#include<stdio.h>
#include<stdlib.h>
void insertionSort(float* arr, int N) {
    int i, curEle;
    float tem;

    for (i = 1; i < N; i++) {
        curEle = i;
        while (curEle > 0 && arr[curEle - 1] > arr[curEle]) {
            tem = arr[curEle];
            arr[curEle] = arr[curEle - 1];
            arr[curEle - 1] = tem;
            curEle--;
        }
    }
}

int main() {
    int N, i;
    printf("Please enter number of elements in array: ");
    scanf("%d", &N);
    float* arr = (float*)malloc(N * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }
    for (i = 0; i < N; i++) {
        printf("Please enter element %d of array: ", (i + 1));
        scanf("%f", &arr[i]);
    }
    insertionSort(arr, N);
    printf("Sorted array is: [");
    for (i = 0; i < N - 1; i++) {
        printf("%f, ", arr[i]);
    }
    printf("%f]\n", arr[N - 1]);
    free(arr);
    return 0;
}
