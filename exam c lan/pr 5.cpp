#include <stdio.h>

int main() {
    int i, j;

    // Loop through each row
    for (i = 0; i < 5; i++) {
        // Print the starting numbers in decreasing order for each row
        for (j = 10 - i; j <= 10; j++) {
            printf("%d", j);
        }

        // Move to the next line after printing the row
        printf("\n");
    }

}

