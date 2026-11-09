// Question 2. Search in a Sorted Matrix 

// You are given an m × n matrix in which the elements of every row are arranged in increasing order from left to right, and the elements of every column are arranged in increasing order from top to bottom. All elements are distinct. Given an integer x, locate it in the matrix and print its position. 

// Requirement. Your program must not examine every element of the matrix. Scanning all m × n elements one by one, with or without stopping early, is not an acceptable solution. Your search must use the fact that each row and each column is sorted; the number of elements examined must grow in proportion to m + n, not m × n. 

// Input Format The first line contains two integers m and n. Each of the next m lines contains n integers separated by spaces. The last line contains the integer x to be searched for. 

// Output Format If x is present, print its row index and column index separated by a single space, using 0-based indexing. If x is not present, print NOT FOUND. 

// Constraints 
// • 1 ≤ m, n ≤ 50 • 
// All elements are distinct integers between −1000 and 1000

#include <stdio.h>

int main()
{
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);

    int arr[m][n];
    printf("Enter elements of array rowwise: ");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }

    int target;
    printf("Enter target element: ");
    scanf("%d",&target);

    int i=0,j=n-1;
    while (i<n && j>=0){
        if (arr[i][j]==target){
            printf("%d %d",i,j);
            return 0;
        }
        
        if (arr[i][j]>target){
            j--;
        }
        if (arr[i][j]<target){
            i++;
        }
    }

    printf("NOT FOUND");

    return 1;
}