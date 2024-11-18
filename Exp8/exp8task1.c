/*Aim : WAP to find the length of a string without using library function.
Name : Raj Maurya
Roll no : 08
UIN : 241A008
Division : A*/
#include<stdio.h>
int main()
{
    char str[100];  //character string of size 100
    int length=0;   //variable
    printf("\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String : "); //Input String from user
    gets(str);

    while(str[length] !='\0')  //'\0' means end of sring
    {
        length++;

    }

    printf("string length: %d Characters",length);
    return 0;
}
