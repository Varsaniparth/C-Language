#include <stdio.h>

void printEvenElements(int *arr, int size);

int main() {
    int size;

    
    printf("Enter the number of ok: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printEvenElements(arr, size);

    return 0;
}


void printEvenElements(int *arr, int size) {
    printf("a even element che bhai:\n");

    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {  
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

