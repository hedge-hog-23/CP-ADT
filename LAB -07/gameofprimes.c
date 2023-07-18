// In a global Mathematics contest, the contestants are told to invent some special numbers which can be built by adding the squares of its digits. Doing this perpetually, the numbers will end up to 1 or 4. 

// If a positive integer ends with 1, then it is called the Number of Game.

// An example from above is:

// 13 = 1^2 + 3^2 = 1+9 = 10 (Step:1)

// 10 = 1^2 + 0^2 = 1+0 = 1 (Step:2), iteration ends in Step 2 since number ends with 1

// Then in next round, the contestants are asked to combine their newly invented number, i.e. Number of Game with prime number.

// Now, being a smart programmer, write a program to help the contestants to find out the Nth combined number within any given range, where N can be any integer.

// Input Format:

// Input consists of 3 integers X, Y, N, one on each line. X and Y are upper and lower limits of the range. The range is inclusive of both X and Y. Find Nth number in range [X,Y].

// Line 1: X, where X is the upper limit of the range

// Line 2: Y, where Y is the lower limit of the range

// Line 3: N, where Nth element of the series is required

// Constraints

// X <= Y

// X > 0

// N > 0

// Output Format:

// Output will show the Nth element of the combined series lying in the range between X and Y.

// Line 1

// For Valid Input, print

// U, where U is the Nth element of the combined number series lying in the range between X and Y.

// Or

// No number is present at this index

// For Invalid Input, print

// Invalid Input

// Sample Input / Output

// Input

// 1

// 30

// 3

// Output

// 19

// Input

// 12

// 33

// 5

// Output

// No number is present at this index

// Input

// -5

// @

// 4

// Output

// Invalid Input





#include<stdio.h>
#include<math.h>
int ishappy(int n) {
    while (1) {
        int sum = 0;
        while (n != 0) {
            int rem = n % 10;
            sum += rem * rem;
            n = n / 10;
        }

        if (sum == 1)
            return 1;
        else if (sum == 4)
            return 0;
        else
            n = sum;
    }
}
int isprime(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    
    for (int i = 2; i*i<=(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}
int main() {
    int small;
    scanf("%d",&small);
    int n;

    int pr[100];
    int x = 0;

    scanf("%d", &n);
    int ans;
    scanf("%d",&ans);
    if(small<1 || ans<1 || n<1 || small>n){
        printf("Invalid Input");
        return 0;}
        
    for (int i = small; i <= n; i++) {
        if (isprime(i)&&ishappy(i)) {
            
            pr[x] = i;
            //printf("%d ",i);
            x++;
        }
    }
    if(ans>(x-1))
        printf("No number is present at this index");
    else
        printf("%d",pr[ans-1]);
    return 0;
}


