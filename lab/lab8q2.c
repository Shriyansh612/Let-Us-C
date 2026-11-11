// Problem 2
//  Single Non-Repeating Element  
//  You are given an array of n integers sorted in non-decreasing order. Every element in the  array appears exactly twice, except for one element which appears exactly once. Find  and output this single element. Your algorithm must run in O(log n) time.  
 
//  Input Format  The first line contains an odd integer n.  The second line contains n space-separated integers in non-decreasing order.  
 
//  Output Format  Print one integer, the element that appears only once.  
 
//  Constraints  ●  1 <= n < 10^5 (n is odd)  ●  0 <= nums[i] <= 10^9 for 0 <= i < n  
//  Sample Input  Sample Output  9  1 1 2 3 3 4 4 8 8  2,  7  3 3 7 7 10 11 11  10,  1  42  42 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int low = 0,high = n-1,mid = (low+high)/2;

    while(low<=high){
        mid = (low+high)/2;
        if (mid%2!=0){
            if (arr[mid]==arr[mid-1]) low = mid+1;
            else if (arr[mid]==arr[mid+1]) high = mid-1;
        }
        else{
            if (arr[mid]==arr[mid-1]) high = mid;
            else if (arr[mid]==arr[mid+1]) low = mid;
            else{
                printf("%d",arr[mid]);
                break;
            }
        }
    }

    return 0;
}