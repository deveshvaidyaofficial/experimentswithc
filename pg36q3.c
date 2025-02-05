#include<stdio.h>
#include<math.h>
int main(){
    float s1,s2,s3,s,a,area;
    printf("enter s1 ");
    scanf("%f",&s1);
       printf("enter s2 ");
    scanf("%f",&s2);
       printf("enter s3 ");
    scanf("%f",&s3);
    s=(s1+s2+s3)/2;
    a=s*(s-s1)*(s-s2)*(s-s3);
    area=sqrt(a);
    printf("area is %.2f",area);


    return 0;

}