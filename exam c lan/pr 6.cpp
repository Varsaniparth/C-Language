#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    FILE *file;

    
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    
    char **fruits = malloc(n * sizeof(char *));
    char **colors = malloc(n * sizeof(char *));
    
    if (fruits == NULL || colors == NULL) {
        printf("Memory allocation failed.\n");
    }

    for (int i = 0; i < n; i++) {
        fruits[i] = malloc(50 * sizeof(char)); 
        colors[i] = malloc(50 * sizeof(char)); 
        
        if (fruits[i] == NULL || colors[i] == NULL) {
            printf("Memory allocation failed.\n");
            
        }

        printf("Enter the name of fruit %d: ", i + 1);
        scanf(" %[^\n]%*c", fruits[i]);

        printf("Enter the color of %s: ", fruits[i]);
        scanf(" %[^\n]%*c", colors[i]); 
    }

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Fruit: %s, Color: %s\n", fruits[i], colors[i]);
    }

    
    fclose(file);


    for (int i = 0; i < n; i++) {
        free(fruits[i]);
        free(colors[i]);
    }
    free(fruits);
    free(colors);

    printf("Data has been written to data.txt successfully.\n");

   
}

