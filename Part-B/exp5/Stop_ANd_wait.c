#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i,j,noframes;
int x,x1,x2;
x1=10; i=1; j=1;
printf("\n Enter number of frames\t:");
scanf("%d",&noframes);
while(noframes>0)
{
printf("\n Sending frame %d", i);
x = rand()%15;
if(x%5 == 0){
for(x2=1; x2<2; x2++)
{
printf("\n Waiting for %d seconds\n",x2);
sleep(x2);
}
printf(" Sending frame %d\n",i);
x = rand()%10;
}
printf("\n Acknowledgement received for frame %d\n",j);
noframes = noframes-1;
i++;
j++;
}
printf("\n End of stop and wait protocol");
return 0;
}
