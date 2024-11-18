/*Aim: WAP to find sum of all odd numbers between two numbers entered by user.*/



#include<stdio.h>
int main()
{
    int i,start_num,end_num,sum=0;i;
    printf("\t\t\t***Sum Of Odd Number*** \n\n\n");
    printf("Enter Start Number :");
    scanf("%d",&start_num);
    printf("Enter End Number : ");
    scanf("%d",&end_num);
    if(start_num>end_num)
    {
        printf("Error:- THE START NUMBER SHOULD BE LOWER THAN THE END NUMBER ");
    }
    else{

     for(i=start_num;i<=end_num;i++)
    {
        if(i%2!=0){
            sum=sum+i;
        }

    }

    }
    printf("sum of all the odd numbers is : %d",sum);
    return 0;
}
/*
Enter Start Number :1
Enter End Number : 6
sum of all the odd numbers is : 9
*/
