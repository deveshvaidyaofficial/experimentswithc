#include<stdio.h>
int main()
{int i,j,n,temp;
n=5;
int a[5]={-5,-1,-6,-0,99};
    for(i=0;i<n;i++)
    {temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}