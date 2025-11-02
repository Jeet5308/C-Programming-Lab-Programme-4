#include <stdio.h>
int main(){int a[10]={1,2,3,4,5},num,i;
scanf("%d",&num);a[5]=num;
for(i=0;i<6;i++)printf("%d ",a[i]);
return 0;}