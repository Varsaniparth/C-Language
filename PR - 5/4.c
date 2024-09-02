#include <stdio.h>

int main() {
    int row, col;
    

    printf("Enter the array row size: ");
    scanf("%d", &row);
    printf("Enter the array column size: ");
    scanf("%d", &col);

    int array[row][col];

  
    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++)
	 {
        for (int j = 0; j < col; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    int rowm;
    printf("Enter row number: ");
    scanf("%d", &rowm);


    if (rowm < 0 || rowm >= row) {
        printf("Invalid row number.\n");
        return 1;
    }

    
    int rowsum = 0;
    printf("Elements of row %d: ", rowsum);
    for (int j = 0; j < col; j++) 
	{
        printf("%d", array[rowm][j]);
        rowm += array[rowm][j];
        if (j < col - 1) 
		{
            printf(", ");
        }
    }
    printf("\nThe sum of row %d: %d\n", rowm, rowm);


    int coln;
    printf("Enter column number: ");
    scanf("%d", &coln);

    
    if (coln < 0 || coln >= col) {
        printf("Invalid column number.\n");
        return 1;
    }

    
    int colSum = 0;
    printf("Elements of column %d: ", coln);
    for (int i = 0; i < row; i++) 
	{
        printf("%d", array[i][coln]);
        colSum += array[i][coln];
        if (i < row - 1) {
            printf(", ");
        }
    }
    printf("\nThe sum of column %d: %d\n", coln, colSum);

    
}

