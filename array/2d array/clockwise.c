#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);

    printf("Enter elements of array: \n");
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    int result[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            result[i][j] = arr[m-j-1][i];
    }

    printf("\nClockwise Rotation: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            printf("%d ",result[i][j]);
        printf("\n");    
    }

    return 0;
}