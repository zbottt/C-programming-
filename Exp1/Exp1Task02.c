/*Aim: WAP to get students PCM marks from the user and find the average.
     Use conditional operator to print if the student is eligible for admission.
    Eligibility criteria is 50% in PCM*/


#include<stdio.h>

int main()
{
int P,C,M,AVG;

printf("Enter Physics Marks:");
scanf("%d",&P);
printf("Enter Chemistry Marks:");
scanf("%d",&C);
printf("Enter Maths Marks:");
scanf("%d",&M);
AVG=(P+C+M)/3;
printf("PCM Average:%d\n",AVG);

(AVG>=50)?printf("You are Eligible for Admission."):printf("You are Not Eligible for Admission.");


return 0;
}
/*Enter Physics Marks:56
Enter Chemistry Marks:56
Enter Maths Marks:56
PCM Average:56
You are Eligible for Admission.*/
