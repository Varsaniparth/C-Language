#include <stdio.h>

int main() {
    char y_char = 'a';

    do {
        printf("%c ", y_char);
    
        y_char += 4; 
        
         if (y_char <= 'z') {
            printf(", "); 
        }
    } while (y_char <= 'z');

    printf("\n");

}

