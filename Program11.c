#include <stdio.h>
int main(){int a[10],b[10]={0},i,shift;
for(i=0;i<10;i++)scanf("%d",&a[i]);
scanf("%d",&shift);
for(i=0;i<10;i++)if(i+shift<10)b[i+shift]=a[i];
for(i=0;i<10;i++)printf("%d ",b[i]);
return 0;}