/*Aim: WAP to calculate sum of two matrix.

*/

#include <stdio.h>

void main()
{
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;


    printf("\n\nAddition of two Matrices :\n");
    printf("------------------------------\n");
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);


    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }


    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }


    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }


    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }


    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];


    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
    }
    printf("\n\n");
    }
/*Addition of two Matrices :
------------------------------
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 2
element - [0],[1] : 2
element - [1],[0] : 4
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 67
element - [1],[0] : 7
element - [1],[1] : 89

The First matrix is :

2       2
4       4
The Second matrix is :

5       67
7       89
The Addition of two matrix is :

7       69
11      93
*/
