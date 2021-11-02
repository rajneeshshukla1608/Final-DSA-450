#include <stdio.h>

int SearchMatrix(int num, int rows, int column,int matrix[][column]){

    if (matrix == 0)
    {
       printf("Matrix not found");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < column; j++)
        {
            if (matrix[i][j] == num)
            {
                 printf("I Found");
            }

        }

    }
    return 0;
}

int main()
{
    int rows, column;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the numbet of column");
    scanf("%d", &column);
    int matrix[rows][column];
    int num;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    printf("Enter the element into the matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    SearchMatrix(num, rows, column, matrix);

    return 0;
}
