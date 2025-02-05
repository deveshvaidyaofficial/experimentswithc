#include<stdio.h>
int main(){
    int o,t,h,cv;
    int n=1;
    while(n<=500)
    {
    h=n/100;
    t=(n/10)%10;
    o=n%10;
    cv=o*o*o+t*t*t+h*h*h;
    if (n==cv)
    printf("%d is a armstrong number\n",n);
        n++;}





    /*int i=1;
    while(i<=500)
    {printf("The number is %d\n",i);
    i++;}
    printf("over");*/
    return 0;
}