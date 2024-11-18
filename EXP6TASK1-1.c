/*Aim: WAP to define a counter function to print how many times the function is called use storage classes
*/
#include<stdio.h>
void counter()
{
static int count =0;
count++;
printf("Counter function called:%d\n",count);
}
int main()
{
int i;
for(i=1;i<=7;i++)
    counter();
printf("\t\t\tStorage Class\n\n");

}
/*Counter function called:1
Counter function called:2
Counter function called:3
Counter function called:4
Counter function called:5
Counter function called:6
Counter function called:7
                        Storage Class*/

