// Given a binary matrix containing only 0s and 1s, find the row having the maximum number of 1s.

// Assume every row is sorted in ascending order.

// Try solving it in:
// 1. \(O(NM)\)
// 2. \(O(N+M)\)

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

    int row=0;
    int i=0,j=n-1;
    while (i<m && j>=0){
        if (arr[i][j]==0) i++;
        if (arr[i][j]==1){
            j--;
            row = i;
        }
    }


    printf("Row index: %d",row);


    return 0;
}