/*
Aim: WAP to find the factorial of a number using iterative function
*/

#include<stdio.h>


int factoriallterative(int num) {
int prod = 1;
for(int i=1; i<=num; i++){
prod*= i;
}
return prod;
}
int main()
{
int num;
printf ("\t\t** Iterative Factorial Function ** \n\n");
printf ("Enter Number:");
scanf ("%d",&num);
printf ("Factorial of %d = %d",num,factoriallterative(num));
return 0;
}
/*
Enter Number:5
Factorial of 5 = 120
*/
