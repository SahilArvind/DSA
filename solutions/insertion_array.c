#include<stdio.h>

void displayArray(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void indInsertion(int arr[], int size, int index, int element) {
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1];

    printf("Enter %d elements into the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array you created is: ");
    displayArray(arr, size);

    int index;
    printf("Enter the index at which you want to insert an element: ");
    scanf("%d", &index);

    if (index < 0 || index > size) {
        printf("Error: Invalid index. Please enter an index between 0 and %d.\n", size);
        return 1;
    }

    int element;
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    indInsertion(arr, size, index, element);

    printf("The array after inserting the new element: ");
    displayArray(arr, size + 1);

    return 0;
}