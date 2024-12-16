#include<stdio.h>

void displayArray(int arr[], int n) {
     printf("[ ");
      for  (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
      }
      printf("]\n");
}

void insertElement (int arr[], int index, int element, int size) {
     for (int i = size - 1; i >= index; i--) {
        arr[i+1] = arr[i];
     } 
     arr[index] = element;
}

int main() {
    int arr[100] = {1, 2, 4, 5};
    printf("Our initial array is:\n");
    displayArray(arr, 4);
    
    printf("We'll be inserting 3 at index 2 now...\n");

    insertElement(arr, 2, 3, 4);
    displayArray(arr, 5);

    return 0;
}