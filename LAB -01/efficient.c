// Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

// INPUT(s):

// 11

// 10 9 7 6 5 1 2 3 8 4 7

// OUTPUT(s):

// 7

// INPUT(s):

// 5

// 1 2 3 4 4

// OUTPUT(s):

// 4

// INPUT(s):

// 5

// 1 1 2 3 4

// OUTPUT(s):

// 1

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int sumnum;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++){
        
        sum = sum+arr[i];
    }
    sumnum = ((n*(n-1))/2);
    printf("%d",sum-sumnum);
    
    
}
