#include<stdio.h>

void displayArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void deleteElement(int arr[], int index, int size) {
    for (int i = index; i <= size - 1; i++) {
        arr[i] = arr[i+1];
    }
}

int main() {
    int arr[100] = {1, 2, 6, 3, 4};
    printf("Our initial array is:\n");
    displayArray(arr, 5);

    printf("We'll be deleting 6 from index 2 now...\n");

    deleteElement(arr, 2, 5);
    displayArray(arr, 4);

    return 0;
}