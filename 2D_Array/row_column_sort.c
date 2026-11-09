// 4. Sort Rows Independently
// Sort every row of a matrix in ascending order without changing the positions of the rows.

// Then sort every column independently in ascending order.

// Bonus: Can you perform both operations without using another matrix?

#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);

    int arr[m][n];
    printf("Enter elements of array rowwise:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    for (int i=0;i<m;i++){
        int temp;
        for (int j=0;j<n-1;j++){
            for (int k=0;k<n-j-1;k++){
                if (arr[i][k]>arr[i][k+1]){
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                }
            }
        }
    }

    for (int i=0;i<n;i++){
        int temp;
        for (int j=0;j<n-1;j++){
            for (int k=0;k<n-j-1;k++){
                if (arr[k][i]>arr[k+1][i]){
                    temp = arr[k][i];
                    arr[k][i] = arr[k+1][i];
                    arr[k+1][i] = temp;
                }
            }
        }
    }


    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");            
    }

    return 0;
}