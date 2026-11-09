// 7. Rotate Matrix by 90 Degrees
// Rotate a square matrix clockwise by 90 degrees.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter order of matrix: ");
    scanf("%d",&n);

    int arr[n][n];
    printf("Enter elements of matrix rowvise: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int result[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            result[i][j] = arr[n-j-1][i];
        }
    }

    printf("Result: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}