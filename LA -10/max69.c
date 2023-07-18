// You are given a positive integer num consisting only of digits 6 and 9.

// Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

// Example 1:

// Input:

// num = 9669

// Output:

// 9969

// Explanation:

// Changing the first digit results in 6669.

// Changing the second digit results in 9969.

// Changing the third digit results in 9699.

// Changing the fourth digit results in 9666.

// The maximum number is 9969.

// Example 2:

// Input:

// num = 9996

// Output:

// 9999

// Explanation:

// Changing the last digit 6 to 9 results in the maximum number.

// Example 3:

// Input:

// num = 9999

// Output:

// 9999

// Explanation: It is better not to apply any change.

// Constraints:

// 1 <= num <= 104

// num consists of only 6 and 9 digits.


// For example:

// Input	Result
// 9996
// 9999
// 9999
// 9999


#include<stdio.h>
int main()
{
int n;
int t;
scanf("%d",&n);
t=n; //COPYING THE SAME NUMBER
int c=0;
while(t>0){
    c++;
    t=t/10; //COUNTING THYE NUMBER OF DIGITS OF NUMBER IN C
}

int a[c];int temp; 

for(int i=0;i<c;i++){ //INDIVIDUL DIGITS
    a[i]=n%10;
    n=n/10;
}

for(int i=0,j=c-1;i<j;i++,j--){ //REVERSING THE ARRAY TO MATCH THE NUMBER
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

for(int i=0;i<c;i++){
    if(a[i]==6){ //CHANGE 6 BY 9
        a[i]=9;
        break;
    }
}
int sum=0;
for(int i=0;i<c;i++){
   sum=(sum*10)+a[i]; //RETURNING THE NUMBER
}
printf("%d",sum);
}
