/*
Aim: WAP to find the factorial of a number using recursive function
*/


#include<stdio.h>
int factorialRecursive (int num){
 if (num <= 1){
return 1;}
return num *factorialRecursive (num-1);
 }
int main(){
int num;
printf ("\t\t*****Recursive Factorial Function*****\n\n\n\n");
printf ("Enter Number:");
scanf ("%d", &num);
printf ("Factorial of %d = %d", num, factorialRecursive (num));
return 0;
}
/*
Enter Number:5
Factorial of 5 = 120
*/
