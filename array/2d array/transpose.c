#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);

    int arr[m][n];

    printf("Enter elements of matrix:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    int transpose[n][m];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            transpose[i][j] = arr[j][i];
        }
    }

    printf("\nTranspose: \n");

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            printf("%d ",transpose[i][j]);
        printf("\n");            
    }

    return 0;
}