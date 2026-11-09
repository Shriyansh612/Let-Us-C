// 1. Row and Column Dominance
// Given an \(N \times M\) matrix, find all elements that are:
// - The smallest element in their respective row.
// - The largest element in their respective column.
// Print all such elements along with their indices.
// Saddle Point

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
        int min = arr[i][0];
        int col=0;
        for (int j=0;j<n;j++){
            if (arr[i][j]<min){
                min = arr[i][j];
                col=j;
            }
        }
        int count=0;
        for (int j=0;j<m;j++){
            if (arr[i][col]>=arr[j][col]) count++;
        }
        if (count == m){
            printf("Saddle Point: %d %d\n",i,col);
        }

    }

    return 0;
}
