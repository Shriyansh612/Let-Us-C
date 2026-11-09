#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int mat[n][n];

    for (int i=0;i<n;i++){
        printf("Enter row %d: ",i);
        for (int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("Matrix: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");    
    }

    // int mat2[n][n] = mat;

    printf("Rotated Matrix: \n");

    for (int i=0;i<n;i++){
        for (int j=n-1;j>=0;j--){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}