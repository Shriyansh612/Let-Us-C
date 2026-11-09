// Question 1. Latin Square Check 

// A square matrix of order n is called a Latin square if every row contains each of the integers 1, 2, …, n exactly once, and every column also contains each of the integers 1, 2, …, n exactly once. Read an n × n matrix and determine whether it is a Latin square. 

// Note that the matrix may contain values outside the range 1 to n; such a matrix is not a Latin square. 

// Input Format The first line contains a single integer n. Each of the next n lines contains n integers separated by spaces. 

// Output Format Print YES if the matrix is a Latin square, and NO otherwise. 

// Constraints

// • 1 ≤ n ≤ 10 • 

// Every element of the matrix is an integer between −100 and 100

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

    // int is_latin_square = 0;

    for (int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            int count=0;
            for (int k=0;k<n;k++){
                if (i==arr[j][k]) count++;
            }
            if (count!=1){
                printf("NO");
                return 1;
            }
        }

        for (int j=0;j<n;j++){
            int count=0;
            for (int k=0;k<n;k++){
                if (i==arr[k][j]) count++;
            }
            if (count!=1){
                printf("NO");
                return 1;
            }
        }
    }

    printf("YES");

    return 0;
}