#include<stdio.h>

void printArray(int A[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");
}

void bubbleSort(int A[], int n) 
{
    int temp;
     for(int i = 0; i < n - 1; i++) // For number of passes
     {
        for(int j = 0; j < n - 1 - i; j++) // For comparisons in each pass
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
     }
}

int main() {
    int A[] = {45, 123, 543, 876, 23, 112, 468};
    int n = 7;
    
    printf("Original array:\n");
    printArray(A, 7);

    bubbleSort(A, 7);
    printf("Sorted array:\n");
    printArray(A, 7);

    return 0;
}