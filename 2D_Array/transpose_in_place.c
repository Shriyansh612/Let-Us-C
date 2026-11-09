// 5. Transpose In-Place
// Given a square matrix, transpose it without creating another matrix.

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

    int temp;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i<j){
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    printf("Transpose: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}