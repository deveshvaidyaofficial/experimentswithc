#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int num,b,c,d,e,f;
    printf("enter the 5 dig num\n");
    scanf("%d",&num);
    b = num / 10000;
    printf("%d\n",b);
    c = (num / 1000)%10;
    printf("%d\n",c);
    d = (num / 100)%10;
    printf("%d\n",d);
    e = (num / 10)%10;
    printf("%d\n",e);
    f = (num%10);
    printf("%d\n",f); 
    printf("sum is %d",b+c+d+e+f);




   
 
 
    return 0;

}