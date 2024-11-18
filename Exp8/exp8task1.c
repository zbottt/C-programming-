/*Aim : WAP to find the length of a string without using library function.
*/
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
