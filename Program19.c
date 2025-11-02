#include <stdio.h>
int main(){int a[6]={1,2,3,4,5,6},i,search,found=0;
scanf("%d",&search);
for(i=0;i<6;i++)if(a[i]==search){found=1;break;}
if(found)printf("Found");else printf("Not Found");
return 0;}