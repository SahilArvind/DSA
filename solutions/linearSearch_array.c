#include<stdio.h>

void linearSearch(int arr[], int element, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element found at index %d\n", i);
        }
    }
}

void displayArray(int arr[], int n) {
     printf("[ ");
      for  (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
      }
      printf("]\n");
}

int main() {
    int arr[10] = {1, 46, 62, 11, 23, 52, 78, 36, 456, 700};
    printf("Our initial array is:\n");
    displayArray(arr, 10);

    printf("We're going to run a linear search for 78 across the array...\n");
    linearSearch(arr, 78, 10);

    return 0;
}