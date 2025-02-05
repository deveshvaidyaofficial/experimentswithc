#include<stdio.h>
int main(){
    int y;
    printf("enter the year ");
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
        printf("%d is a leap year",y);
        else
        printf("not a leap year");
    }
    else if(y%4==0)
    {printf("%d is a leap year",y);}
    else
    printf("not a leap year");
    return 0;
}