#include <stdio.h>
int main(){int a[6]={1,2,3,4,5,6},i,j,del;
scanf("%d",&del);
for(i=0;i<6;i++){if(a[i]==del){for(j=i;j<5;j++)a[j]=a[j+1];break;}}
for(i=0;i<5;i++)printf("%d ",a[i]);
return 0;}