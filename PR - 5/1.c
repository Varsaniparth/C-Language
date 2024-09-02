#include <stdio.h>

int main() {
    int big;

    printf("Enter the array big: ");
    scanf("%d", &big);

    
    if (big <= 0) {
        printf("Array big must be a positive integer.\n");
    }

    int array[big];

    
    printf("Enter array's elements:\n");
    for (int i = 0; i < big; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    
    int negative = 0; 

    printf("Negative elements from an Array: ");
    
    for (int i = 0; i < big; i++) {
        if (array[i] < 0) {
            if (negative) {
                
            }
            printf("%d", array[i]);
            negative = 1;
        }
    }

    
    if (!negative) {
        printf("Nathi");
    }

    printf("\n");

  
}

