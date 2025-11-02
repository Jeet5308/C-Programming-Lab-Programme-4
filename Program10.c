#include <stdio.h>
int main(){int a[10],i,freq[100]={0};
for(i=0;i<10;i++)scanf("%d",&a[i]);
for(i=0;i<10;i++)freq[a[i]]++;
for(i=0;i<100;i++)if(freq[i]>0)printf("%d->%d\n",i,freq[i]);
return 0;}