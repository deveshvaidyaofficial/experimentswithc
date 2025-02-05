#include<stdio.h>
int main()
{int n=1,i=1,num,pn=0,nn=0,z=0;
printf("Enter how many times you want to input?\n");
while(i<=n)
{printf("Enter number %d\n",i);
scanf("%d",&num);
if (num>0)
pn=pn+1;
else if(num<0)
nn=nn+1;
else
z=z+1;
i++;}
printf("Positive number entered %d times\n",pn);
printf("Negative number entered %d times\n",nn);
printf("Zero entered %d times\n",z);
    return 0;
}