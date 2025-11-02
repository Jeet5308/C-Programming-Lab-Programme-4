#include <stdio.h>
int main(){int a[5],b[5],i,j;
for(i=0;i<5;i++)scanf("%d",&a[i]);
for(i=0,j=0;i<5;i+=2,j++)b[j]=a[i];
for(i=0;i<3;i++)printf("%d ",b[i]);return 0;}