// Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

// Example:

// Input:

// 3

// 1 3 5

// 4

// Output:

// 1

// Explanation:

// YES as 5 - 1 = 4

// Return 0 / 1 (0 for false, 1 for true) for this problem.


// INPUT(s):

// 10

// 1 4 6 8 12 14 15 20 21 25

// 1

// OUTPUT(s):

// 1

// INPUT(s):

// 10

// 1 2 3 5 11 14 16 24 28 29

// 0

// OUTPUT(s):

// 0

// INPUT(s):

// 10

// 0 2 3 7 13 14 15 20 24 25

// 10

// OUTPUT(s):

// 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]- a[j]) == k){
                flag = 1;
                break;
            }
        }
    }
    printf("%d",flag);
}
