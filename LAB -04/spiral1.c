// Given an n x n matrix, return all elements of the matrix in spiral order.

// Example 1:



// Input:

// matrix = [[1,2,3],[4,5,6],[7,8,9]]

// Output:

// [1,2,3,6,9,8,7,4,5]

// Constraints:

// n == matrix.length

// n == matrix[i].length

// 1 <= n <= 10

// -100 <= matrix[i][j] <= 100
// For example:

// Input	Result
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 1 2 3 6 9 8 7 4 5


#include<stdio.h>
void spiral(int m,int n,int a[m][n]){
    int i,k=0,l=0;
    m=m-1;
    n=n-1;
    while(k<=m && l<=n){
        for(i=l;i<=n;i++){
            printf("%d ",a[k][i]);
        }
        k++;
        for(i=k;i<=m;i++){
            printf("%d ",a[i][n]);
        }
        n--;
        if(m>=k){
            for(i=n;i>=l;i--){
                printf("%d ",a[m][i]);
            }
            m--;
        }
        for(i=m;i>=k;i--){
            printf("%d ",a[i][l]);
    }
    l++;
}
printf("\n");
}
int main(){
    int r;
    scanf("%d",&r);
    int a[r][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    spiral(r,r,a);
    return 0;
}
