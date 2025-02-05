#include <stdio.h>
int main(){
    int i=1,h;
    while(i<=10)
    {printf("Enter the number of hours worker %d has worked\n",i);
    scanf("%d",&h);
    if (h>40)
    printf("worker %d has worked %d hours overtime and will get %d rupees compensation\n",i,(h-40),12*(h-40));
    else
    printf("worker %d has not worked overtime\n",i);
    i=i+1;}
    return 0;
}