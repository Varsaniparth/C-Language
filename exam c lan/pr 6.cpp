#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    FILE *file;

    // Input the number of fruits
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    // Allocate memory for fruit names and colors
    char **fruits = malloc(n * sizeof(char *));
    char **colors = malloc(n * sizeof(char *));
    
    if (fruits == NULL || colors == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fruits[i] = malloc(50 * sizeof(char)); // Allocate memory for each fruit name
        colors[i] = malloc(50 * sizeof(char)); // Allocate memory for each color name
        
        if (fruits[i] == NULL || colors[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter the name of fruit %d: ", i + 1);
        scanf(" %[^\n]%*c", fruits[i]); // Read string with spaces

        printf("Enter the color of %s: ", fruits[i]);
        scanf(" %[^\n]%*c", colors[i]); // Read string with spaces
    }

    // Open the file for writing
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write fruits and their colors to the file
    for (int i = 0; i < n; i++) {
        fprintf(file, "Fruit: %s, Color: %s\n", fruits[i], colors[i]);
    }

    // Close the file
    fclose(file);

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(fruits[i]);
        free(colors[i]);
    }
    free(fruits);
    free(colors);

    printf("Data has been written to data.txt successfully.\n");

   
}

