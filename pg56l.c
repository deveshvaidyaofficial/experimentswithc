#include<stdio.h>
int main(){
    float x,y;
    printf("enter the x");
    scanf("%f",&x);
    printf("enter the y");
    scanf("%f",&y);
    if((x>0)&&(y>0))
    printf("the point is in 1st quadrat");
    else if((x>0)&&(y<0))
    printf("the point is in 4th quadrat");
        if((x<0)&&(y>0))
    printf("the point is in 2nd quadrat");
        if((x<0)&&(y<0))
    printf("the point is in 3rd quadrat");
    return 0;
}