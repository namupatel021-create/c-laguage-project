#include <stdio.h>
int main()
{
    int row, col;
    printf("enter the number of rows = ");
    scanf("%d", &row);
    printf("enter the number of columns = ");
    scanf("%d", &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter arr [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("your transpose of an array : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j] * arr[i][j] * arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}