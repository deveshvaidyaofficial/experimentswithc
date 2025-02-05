#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
printf("enter angle 1 ");
scanf("%d",&a);
printf("enter angle 2 ");
scanf("%d",&b);
printf("enter angle 3 ");
scanf("%d",&c);
if(a+b+c==180)
printf("yes triangle");
else
printf("no triangle");
return 0;}