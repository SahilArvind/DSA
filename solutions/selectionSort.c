#include<stdio.h>

void printArray(int a[], int size) {
    printf("[ ");
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

void selectionSort(int a[], int size){
    int indexOfMin, temp;
    for(int i = 0; i < size - 1; i++){
        indexOfMin = i;
        for(int j = i + 1; j < size; j++){
            if(a[j] < a[indexOfMin]) {
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}

int main() {
    int a[] = {2, 43, 52, 1, 24};
    int size = 5;

    printf("Original array:\n");
    printArray(a, size);

    printf("We'll sort the array using the selection sort algorithm...\n");
    selectionSort(a, size);
    printArray(a, size);

    return 0;
}