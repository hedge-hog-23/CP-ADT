// Find the intersection of two sorted arrays.

// OR in other words,

// Given 2 sorted arrays, find all the elements which occur in both the arrays. 

// Input Format

// ·       The first line contains T, the number of test cases. Following T lines contain:

// 1.     Line 1 contains N1, followed by N1 integers of the first array

// 2.     Line 2 contains N2, followed by N2 integers of the second array

// Output Format

// The intersection of the arrays in a single line

// Example

// Input:

// 1

// 3 10 17 57

// 6 2 7 10 15 57 246

// Output:

// 10 57

// Input:

// 1

// 6 1 2 3 4 5 6

// 2 1 6

// Output:

// 1 6

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,m;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        int b[m];
        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i] == b[j]){
                    printf("%d ",a[i]);
                }
            }
        }
    
}}
