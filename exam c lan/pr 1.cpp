#include <stdio.h>

int main() {
 
    float marks[5];
    float sum;
    float average;
    char grade;

   
    printf("Enter marks for 5:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

    
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input.\n");
    
        }

    
        sum += marks[i];
    }


    average = sum / 5;

  
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }


    printf("average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);


}

