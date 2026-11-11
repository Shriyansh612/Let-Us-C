// Problem 1
// Minimum Boats

// You are given an array of n integers representing the weights of individuals and an integer  limit representing the maximum weight capacity of a rescue boat. Each boat can carry at  most two people at the same time, provided the sum of their weights does not exceed  limit. Find the minimum number of boats required to carry everyone.  

// Input Format  The first line contains two space-separated integers, n and limit.  The second line contains n space-separated integers representing the weights of the  individuals.  

// Output Format  Print one integer, the minimum number of boats required.  

// Constraints  ●  1 <= n <= 10^5  ●  1 <= weights[i] <= limit <= 10^9 for 0 <= i < n  

// Sample Input  Sample Output  4 3  3 2 2 1  3,  4 5  3 5 3 4  4,  2 3  1 2  1 


// 4 6   1 2 4 5   2  ?
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of persons: ");
    scanf("%d",&n);

    int limit;
    printf("Enter weight limit: ");
    scanf("%d",&limit);

    int weights[n];
    printf("Enter weights of individual persons: ");
    for (int i=0;i<n;i++) scanf("%d",&weights[i]);

    int temp, boats = 0;

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (weights[j]>weights[j+1]){
                temp = weights[j];
                weights[j] = weights[j+1];
                weights[j+1] = temp;
            }
        }
    }

    int left = 0,right = n-1;

    while(left<=right){
        if (left==right){
            boats++;
            break;
        }
        if (weights[right]==limit){
            boats++;
            right--;
        }
        else if (weights[right]<limit){
            if ((weights[left]+weights[right])<=limit){
                boats++;
                left++;
                right--;
            }
            else{
                boats++;
                right--;
            }
        }
    }

    printf("Minimum number of boats required: %d",boats);

    return 0;
}