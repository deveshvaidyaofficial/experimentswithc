#include<stdio.h>
int main()
{int n=1;
int num,pn=0,nn=0,z=0;
while(n==1)
{printf("Enter number\n");
scanf("%d",&num);
if (num>0)
pn=pn+1;
else if(num<0)
nn=nn+1;
else
z=z+1;
printf("Enter 1 to continue or any other number to exit from the loop.\n");
scanf("%d",&n);}
printf("Positive number entered %d times\n",pn);
printf("Negative number entered %d times\n",nn);
printf("Zero entered %d times\n",z);
    return 0;}