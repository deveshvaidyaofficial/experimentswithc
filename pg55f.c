#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;

printf("enter num1 ");
scanf("%d",&a);
printf("enter num2 ");
scanf("%d",&b);
printf("enter num3 ");
scanf("%d",&c);

if (a>b && a>c)
printf("%d is greatest ",a);
else if (b>a && b>c)
printf("%d is greatest ",b);
else if (c>b && c>a)
printf("%d is greatest ",c);
else
printf("error");
    return 0;}