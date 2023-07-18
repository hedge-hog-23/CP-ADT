// Given a string s, return true if a permutation of the string could form a palindrome and false otherwise.

// Example 1:

// Input:

// s = "code"

// Output:

// false

// Example 2:

// Input:

// s = "aab"

// Output:

// true

// Example 3:

// Input: s ="carerac"

// Output:

// true

// Constraints:

// 1 <= s.length <= 5000

// s consists of only lowercase English letters.


// For example:

// Input	Result
// code
// false
// aab
// true
// carerac
// true


#include<stdio.h>
#include<string.h>
int main() {
    char s[5001];
    scanf("%s",s); //input stirng
    int a[27]={};
    for(int i=0;i<strlen(s);i++) {
        int t=s[i]-96; //storing freq count in a[]
        a[t]++;
    }
    int f=0;
    for(int i=1;i<=26;i++){
        if(a[i]%2==1)  //logic - 2 unique character with frequencies should not be odd. <= for a palindrome
            f++;       //like fggghhhf - fails 
        if(f>1) {
            printf("false");
            return 0;
        }
    }
    printf("true");
}
