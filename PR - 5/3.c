#include <stdio.h>

int main() {
    int row, col;


    printf("Enter the array row size: ");
    scanf("%d", &row);
    printf("Enter the array column size: ");
    scanf("%d", &col);

    int array[row][col];
    int mor[col][row];

 
    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++) 
	{
        for (int j = 0; j < col; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            mor[j][i] = array[i][j];
        }
    }

 
    printf("The mor of an array:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", mor[i][j]);
        }
        printf("\n");
    }

    
}

