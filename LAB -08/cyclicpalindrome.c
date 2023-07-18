// A string is said to be palindrome, if it reads the same from both the ends. Given a string S, you are allowed to perform cyclic shifts. More formally, you can pick any one character from any end (head or tail) and you can append that character at the other end. For example, if the string is abc, then if we do a shift using the character at head position then the string becomes bca. Similarly, if we do the shift using the character at the tail then the input string becomes cab. Your task is to find out the minimum number of shifts needed to make the given string, a palindrome.

// In case, we can’t convert the string to palindrome then print -1.

// Input Format

// First line starts with T i.e. number of test cases, and then T lines will follow each containing a string S.

// Output Format

// Print the minimum number of cyclic shifts for each string if it can be made a palindrome, else -1.

// Constraints

// 1<=T<=100

// 1<=|S|<=300, S will contains only lower case alphabets a-z.

// Sample Input and Output

// Input

// 4

// abbb

// aaabb

// aabb

// abc

// Output

// -1

// 1

// 1

// -1

// Explanation:

// For Test Case 2 (aaabb):

// Shift the character at the tail to the head and the result will be baaab, which is a palindrome. This is an operation which requires minimum number of shifts to make the given string a palindrome.

// For Test Case 3 (aabb):

// One way to convert the given string to palindrome is, shift the character at the head to the tail, and the result will be abba, which is a palindrome. Another way is to shift the character at the tail to the head, and the result will be baab, which is also a palindrome. Both require only one shift.


// For example:

// Input	Result
// 4
// abbb
// aaabb
// aabb
// abc
// -1
// 1
// 1
// -1
// 8
// xyyyxy
// xyyy
// xxxyyxxxy
// xxxyy
// xxyyxxy
// xxyy
// xyzzyxy
// xyz
// -1
// -1
// 4
// 1
// 3
// 1
// 3
// -1
#include <stdio.h>
#include <string.h>

void shiftLeft(char *s) {
    int length = strlen(s);
    char temp = s[0];
   
    for (int i = 1; i < length; i++) {
        s[i - 1] = s[i];
    }
   
    s[length - 1] = temp;
}

void shiftRight(char *s) {
    int length = strlen(s);
    char temp = s[length - 1];
   
    for (int i = length - 2; i >= 0; i--) {
        s[i + 1] = s[i];
    }
   
    s[0] = temp;
}

int isPalindrome(char *s) {
    int length = strlen(s);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
   
    while (t--) {
        char s[100];
        scanf("%s", s);
       
        int n = strlen(s);
        int flag = 0;
        int shift = 0;  // output variable
        char s1[100];
        char s2[100];
        strcpy(s1,s);
        strcpy(s2,s);
        for (int i = 0; i <= n / 2; i++) {
            if (isPalindrome(s1) || isPalindrome(s2)) {
                flag = 1;
                break;
            }
           
            shiftLeft(s1);
            shiftRight(s2);
            shift++;
        }
       
        if (flag == 1) {
            printf("%d\n", shift);
        } else {
            printf("-1\n");  // Not possible to form a palindrome
        }
    }
   
    return 0;
}
