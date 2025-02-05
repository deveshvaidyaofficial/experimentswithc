#include<stdio.h>
#include<math.h>
int main()
{int l,b,a,p;
printf("enter length ");
scanf("%d",&l);
printf("enter breadth ");
scanf("%d",&b);
p=2*l+2*b;
a=l*b;
if(p>a)
printf("perimiter %d is greater than area %d\n",p,a);
else if(a>p)
printf("perimiter %d is lesser than area %d\n",p,a);
else if(p==a)
printf("perimiter %d is equal to area %d\n",p,a);
else
printf("error");
return 0;}