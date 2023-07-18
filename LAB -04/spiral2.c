// Example 1:



// Input:

// n = 3

// Output:

// [[1,2,3],[8,9,4],[7,6,5]]

// Example 2:

// Input:

// n = 1

// Output:

// [[1]]

// Constraints:

// 1 <= n <= 20


// For example:

// Input	Result
// 3
// 1 2 3
// 8 9 4
// 7 6 5
// 1
// 1



#include <stdio.h>

void spiral(int n) {
    int matrix[n][n];
    int num = 1;
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    int direction = 0;

    while (top <= bottom && left <= right) {
        if (direction == 0) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = num;
                num++;
            }
            top++;
        } else if (direction == 1) {
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = num;
                num++;
            }
            right--;
        } else if (direction == 2) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num;
                num++;
            }
            bottom--;
        } else if (direction == 3) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num;
                num++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    spiral(n);
    return 0;
}

