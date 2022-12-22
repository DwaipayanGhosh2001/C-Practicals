#include <stdio.h>
 int N;
// This function adds A[][] and B[][], and stores
// the result in C[][]
void add(int A[][10], int B[][10], int C[][10],int m)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            C[i][j] = A[i][j] + B[i][j];
}
 
int main()
{
	int A[10][10],B[10][10],C[10][10]; // To store result
    int i, j;
    printf("Enter the size of the matrix \n");
    scanf("%d", &N);
    printf("Enter the 1st mtrix \n");
   for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d",&A[i][j]);
    printf("Enter the 2nd mtrix \n");        
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &B[i][j]);
 
    add(A, B, C, N);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
 
    return 0;
}
