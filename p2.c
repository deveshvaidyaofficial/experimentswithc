#include<stdio.h>
#include<math.h>
int main(){
    int a,n1,n2,n3,n4,n5;
    printf("enter  5 digit number\n");
    scanf("%d",&a);
    n1=a/10000;
    printf("%d\n",n1);
    n2=(a/1000)%10;
    printf("%d\n",n2);
     n3=(a/100)%10;
    printf("%d\n",n3);
    n4=(a/10)%10;
    printf("%d\n",n4);
    n5=a%10;
    printf("%d\n",n5);
    printf("%d",n5);printf("%d",n4);printf("%d",n3);printf("%d",n2);printf("%d",n1);




   /* n1=(a%10);
    printf("%d",n1);*/


    return 0;
}