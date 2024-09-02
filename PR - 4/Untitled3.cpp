#include <stdio.h>

int main() {
    int number;
    int first_d, last_d, sum;

   
    printf("Enter any number: ");
    scanf("%d", &number);

      last_d = number % 10;

     first_d = number;
     
    while (first_d >= 10) {
        first_d /= 10;
    }

    sum = first_d + last_d;

    printf("The sum of the first and the last d: %d\n", sum);


}

