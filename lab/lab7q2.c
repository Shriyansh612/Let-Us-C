#include <stdio.h>

int main()
{
    int rows,columns;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&columns);

    int arr[rows][columns];

    for (int i=0;i<rows;i++){
        printf("Enter row %d: ",i);
        for (int j=0;j<columns;j++)
            scanf("%d",&arr[i][j]);
    }

    int rsum=0,csum=0;

    printf("Row Sums: \n");
    for (int i=0;i<rows;i++){
        rsum = 0;
        for (int j=0;j<columns;j++)
            rsum+=arr[i][j];
        printf("Row %d: %d\n",i,rsum);            
    }

    printf("Column Sums: \n");
    for (int j=0;j<columns;j++){
        csum = 0;
        for (int i=0;i<rows;i++)
            csum+=arr[i][j];
        printf("Column %d: %d\n",j,csum);                       
    }

    return 0;
}