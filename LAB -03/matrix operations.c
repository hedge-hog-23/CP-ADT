// You are given a square matrix of dimension N. Let this matrix be called A. Your task is to rotate A in clockwise direction by S degrees, where S is angle of rotation. On the matrix, there will be 3 types of operations viz.

// 1.      Rotation

// Rotate the matrix A by angle S, presented as input in form of A S

// 2.      Querying

// Query the element at row K and column L, presented as input in form of Q K L

// 3.      Updation

// Update the element at row X and column Y with value Z, presented as input in form of U X Y Z

// Print the output of individual operations as depicted in Output Specification.

// Input Format:

// Input will consist of three parts, viz.

// 1.      Size of the matrix (N)

// 2.      The matrix itself (A = N * N)

// 3.      Various operations on the matrix, one operation on each line. (Beginning either with A, Q or U)

// 4.      -1 will represent end of input

// Note:

// · Angle of rotation will always be multiples of 90 degrees only.

// · All Update operations happen only on the initial matrix. After update all the previous rotations have to be applied on the updated matrix

// Output Format:

// For each Query operation print the element present at K-L location of the matrix in its current state.

// Constraints:

// 1<=N<=1000

// 1<=Aij<=1000

// 0<=S<=160000

// 1<=K, L<=N

// 1<=Q<=100000

// Sample Input and Output

// Input 

// 2

// 1 2

// 3 4

// A 90

// Q 1 1

// Q 1 2

// A 90

// Q 1 1

// U 1 1 6

// Q 2 2

// -1

// Output

// 3

// 1

// 4

// 6

// Explanation:

// Initial Matrix

// 1 2

// 3 4

// After 90-degree rotation, the matrix will become

// 3 1

// 4 2

// Now the element at A11 is 3 and A12 is 1.

// Again the angle of rotation is 90 degrees, now after the rotation the matrix will become

// 4 3

// 2 1

// Now the element at A11 is 4.

// As the next operation is Update, update initial matrix i.e.

// 6 2

// 3 4

// After updating, apply all the previous rotations (i.e. 180 = two 90 degree rotations)

// The matrix will now become

// 4 3

// 2 6

// Now A22 is 6.


#include<stdio.h>

void rotate(int n,int a[n][n],int ang){
    ang=(ang/90)%4;
    while(ang>0){
        int temp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=temp[i][j];
        }
    }
    ang--;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int totrot=0;
    scanf("\n");
    char c;
    while(1){
        scanf("%c",&c);
        if(c=='A'){
            int ang;
            scanf("%d\n",&ang);
            rotate(n,a,ang);
            totrot+=ang;
            // break;
        }
        else if(c=='Q'){
            int k,l;
            scanf("%d %d\n",&k,&l);
            printf("%d\n",a[k-1][l-1]);
        }
        else if(c=='U'){
            int x,y,z;
            scanf("%d %d %d\n",&x,&y,&z);
            int rot=(360-(totrot%360));
            rotate(n,a,rot);
            a[x-1][y-1]=z;
            rotate(n,a,totrot);
        }
        else{
            break;
        }
    }
}   
