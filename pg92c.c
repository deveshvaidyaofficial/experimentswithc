#include <stdio.h>
int main(){
    int n1,n2,pow=1,i=1;
    printf("enter the first number\n");
    scanf("%d",&n1);
     printf("enter the second number\n");
    scanf("%d",&n2);
    while(i<=n2)
    {pow=n1*pow;
    i=i+1;}
    printf("The first number %d raised to power second number %d is %d",n1,n2,pow);
    return 0;
}