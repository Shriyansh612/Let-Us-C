#include <stdio.h>

int main()
{
    //Find an element that is:
    // - the smallest in its row
    // - and simultaneously the largest in its column

    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);

    int arr[m][n];
    printf("Enter elements of array: \n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    printf("Saddle Points: \n");
    int i,j,max,min,col,c=0;

    for (i=0;i<m;i++){
        min = arr[i][0],col=0;
        for (j=0;j<n;j++){
            if (arr[i][j]<min){
                min = arr[i][j];
                col = j;
            }
        }

        max = min;
        for (j=0;j<m;j++){
            if (arr[j][col]>max)
                max = arr[j][col];
        }

        if (max == min){
            printf("Saddle Point: %d\n",min);
            c++;
        }

    }
    if (c==0) printf("No Saddle Points");

    return 0;
}