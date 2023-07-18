// Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number.

// NOTE: A solution will always exist.

// Example:

// Input:

// 4

// Output:

// 2 + 2 = 4

// If there are more than one solutions possible, return the lexicographically smaller solution.

// If [a, b] is one solution with a <= b, and [c,d] is another solution with c <= d, then

// [a, b] < [c, d]

// If a < c OR a==c AND b < d.


// For example:

// Input	Result
// 4
// 2 2


#include <stdio.h>
int checkPrime(int n);
int main() {
  int n, i, flag = 0;
  
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
  
    if (checkPrime(i) == 1) {
     
      if (checkPrime(n - i) == 1) {
        printf("%d %d\n",i, n - i);
        flag = 1;
      }
    }
  }

  if (flag == 0)
    

  return 0;
}


int checkPrime(int n) {
  int i, isPrime = 1;


  if (n == 0 || n == 1) {
    isPrime = 0;
  }
  else {
    for(i = 2; i <= n/2; ++i) {
      if(n % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  return isPrime;
}
