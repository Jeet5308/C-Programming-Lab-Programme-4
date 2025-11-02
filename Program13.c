#include <stdio.h>
int main(){int a[10]={1,2,3,4,5},pos,num,i;
scanf("%d%d",&pos,&num);
for(i=5;i>pos;i--)a[i]=a[i-1];
a[pos]=num;
for(i=0;i<6;i++)printf("%d ",a[i]);
return 0;}