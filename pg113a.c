#include <stdio.h>
int main(){
    int num,i=2;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num==1)
    printf("Neither prime nor composite number ");

    else if (num==2)
    printf("prime number");

    else 
    {
    
    while(i<num)
    {if (num % i == 0)
    {printf("not a prime");
    break;
    i++;}

    else
    printf("Prime number");
    break;
    }
    return 0;
}
}