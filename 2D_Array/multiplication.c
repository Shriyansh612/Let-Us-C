// 8. Matrix Multiplication Without Extra Space
// Multiply two matrices \(A\) and \(B\), where their dimensions are compatible.

// Implement matrix multiplication using functions.

// Bonus: Can you calculate the result one row at a time rather than storing the entire result matrix?

#include <stdio.h>

int main()
{
    int m1,n1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m1,&n1);

    int arr1[m1][n1];
    printf("Enter elements of array rowwise:\n");
    for (int i=0;i<m1;i++){
        for (int j=0;j<n1;j++)
            scanf("%d",&arr1[i][j]);
    }

    int m2,n2;
    printf("\nEnter number of rows and columns: ");
    scanf("%d %d",&m2,&n2);

    int arr2[m2][n2];
    printf("Enter elements of array rowwise:\n");
    for (int i=0;i<m2;i++){
        for (int j=0;j<n2;j++)
            scanf("%d",&arr2[i][j]);
    }

    if (n1!=m2){
        printf("Incompatible\n");
    }
    else{
        printf("Multiplication: \n");
        for (int i=0;i<m1;i++){
            for (int j=0;j<n2;j++){
                int sum=0;
                for (int k=0;k<n1;k++){
                    sum += arr1[i][k]*arr2[k][j];
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }

    return 0;
}