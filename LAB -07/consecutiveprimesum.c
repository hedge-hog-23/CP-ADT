// ome prime numbers can be expressed as Sum of other consecutive prime numbers.

// For example

// 5 = 2 + 3

// 17 = 2 + 3 + 5 + 7

// 41 = 2 + 3 + 5 + 7 + 11 + 13

// Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

// Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

// Input Format:

// First line of input contains k - the number of inputs

// The next k lines contains a number N.

// Output Format:

// Print the total number of all such prime numbers which are less than or equal to N.

// Example:

// Input:

// k = 2

// N = 20

// N = 15

// Output:

// 2 (there are 2 such numbers: 5 and 17)

// 1


// For example:

// Input	Result
// 2
// 20
// 15
// 2
// 1


#include<stdio.h>
void soc(int n){
    //finding the primes until n
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]%a[i]==0)
                p[j]=0;
        }
    }
    //inserting all primes into array pr
    int pr[n+1],c=0;
    for(int i=0;i<=n;i++){
        if(p[i]==1)
            pr[c++]=a[i];
    }
    //set count=0
    int count=0;
    //for each prime in pr
    for(int i=1;i<c;i++){
        int sum=0;
        //find sum of consecutive primes before it
        for(int j=0;j<i;j++){
            sum+=pr[j];
            //after summing each next consecutive number ,check if n if obtained, if not go on with adding the next consecutive prime
            if(sum==pr[i]){
                //if n=(sum of consecutive primes before it) is found, increment count
                count++;
                break;
            }
        }
    }
    //count is the answer
    printf("%d\n",count);
}
int main(){
    int n,m;
    scanf("%d",&n);
    //to find the count of prime which can be formed by cosecutive sum of primes before it
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        soc(m);
    }
}
