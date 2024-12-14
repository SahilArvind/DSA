// Q) Write a C program to insert an element into an array.

#include<stdio.h>

void displayArray(int arr[], int n){
    printf("The Array is: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int indInsertion(int arr[], int size, int index, int element) {
    for (int i = size; i >= index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;

    return 0;
}

int main () {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size+1];
    printf("Enter %d elements into the array:\n", size);
    for(int i = 0; i <= size; i++){
        scanf("%d", &arr[i]);
    }

    displayArray(arr, size);

    int index;
    printf("Enter the index at which you want to insert an element: ");
    scanf("%d", &index);

    int element;
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    indInsertion(arr, size, index, element);
    printf("The array after inserting the new element: ");
    displayArray(arr, size+1);
}