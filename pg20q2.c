#include<stdio.h>
#include<math.h>
int main(){
    float d;
    printf("enter the distance in kilo meter\n");
    scanf("%f",&d);
     printf("enter the distance in meter %.2f\n",d*1000);
         printf("enter the distance in feet %.2f\n",(d*1000)*3);
             printf("enter the distance in  inch %.2f\n",d*40);
                 printf("enter the distance in centi meter %.2f",d*100000);
    return 0;
}