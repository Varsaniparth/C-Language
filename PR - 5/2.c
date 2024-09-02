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

  
    int larg = array[0][0]; 

    for (int i = 0; i < row; i++) 
	{
        for (int j = 0; j < col; j++) 
		{
            if (array[i][j] > larg) 
			{
                larg = array[i][j];
            }
        }
    }

   
    printf("The larg element is: %d\n", larg);

  
}

