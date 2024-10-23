/*Aim: WAP to print if entered number is even or odd.*/
#include<stdio.h>
int main()
{
printf("***Even Odd Finder***");
int n;
printf("\nEnter the number:");
scanf("%d",&n);
printf("\nEntered number is %d",n);
 if(n%2==0)

{
    printf("\nEntered number is even");
}
    else
     printf("\nEntered number is odd");

return 0;
}
/* ***Even Odd Finder***
Enter the number:12

Entered number is 12
Entered number is even*/
