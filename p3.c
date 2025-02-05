

//simple interest program
#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter the principle\n");
    scanf("%f",&p);
     printf("enter the rate\n");
    scanf("%f",&r);
     printf("enter the time\n");
    scanf("%f",&t);
    printf("the simple interest is %.2f\n",(p*r*t)/100);
    return 0;
}