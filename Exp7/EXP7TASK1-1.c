/*Aim: WAP to find the largest element in an array.
*/
#include<stdio.h>

int main()
{


int n, i, a [100], large;

printf("Enter the number of elements:" );
 scanf("%d",&n);

for (i=0;i<=n-1;i++)
{
printf("Enter a value:");
scanf("%d", &a[i]);

}

large=a[0];
for (i=0;i<=n-1;i++)
{

if (large<a[i])
large=a[i];

}

printf("The largest number is: %d", large);
return 0;
}
/*Enter the number of elements:3
Enter a value:23
Enter a value:43
Enter a value:45
The largest number is: 45*/
