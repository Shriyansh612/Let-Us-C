#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);

    int arr[m][n];
    printf("Enter elements of array rowwise:\n ");
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

    printf("Transpose:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            printf("%d ",transpose[i][j]);
        printf("\n");
    }

    return 0;
}