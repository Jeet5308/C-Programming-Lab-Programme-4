#include <stdio.h>
int main(){int amt,i,notes[]={500,200,100,50,20,10,5,2,1};
scanf("%d",&amt);
for(i=0;i<9;i++){if(amt>=notes[i]){printf("%d x %d\n",notes[i],amt/notes[i]);amt%=notes[i];}}return 0;}