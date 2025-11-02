#include <stdio.h>
int main(){int a[6]={1,2,3,4,5,6},i;
for(i=0;i<5;i++)a[i]=a[i+1];
for(i=0;i<5;i++)printf("%d ",a[i]);
return 0;}