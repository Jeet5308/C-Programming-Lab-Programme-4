#include <stdio.h>
int main(){int a[10]={1,2,3,4,5},i,num;
scanf("%d",&num);
for(i=5;i>0;i--)a[i]=a[i-1];
a[0]=num;
for(i=0;i<6;i++)printf("%d ",a[i]);
return 0;}