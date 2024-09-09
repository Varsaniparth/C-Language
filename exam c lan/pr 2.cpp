#include <stdio.h>


void printOddElements(int arr[], int size);

int main() {
    int size;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    printOddElements(arr, size);

}


void printOddElements(int arr[], int size) {
    printf("Odd elements che ok mara dostar:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {  
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

