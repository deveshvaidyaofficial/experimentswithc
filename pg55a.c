#include<stdio.h>
int main(){
    float cp,sp,ch;
    printf("enter cp ");
    scanf("%f",&cp);
        printf("enter sp ");
    scanf("%f",&sp);
ch=sp-cp;
    if (sp > cp)
    printf("profit %.2f ",ch);
    else
    printf("loss %.2f ",ch);
    return 0;
}