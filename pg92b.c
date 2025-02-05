#include<stdio.h>
int main(){
    int n,i=1,fac=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {fac=fac*i;
    i=i+1;}
    printf("The factorial of %d is %d",n,fac);
    
    return 0;
}