#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int min(int x, int y)
{
if(x<y)
return x;
else
return y;
}
int main()
{
int drop=0, count=0, inp[25];
int mini, nsec, cap, i, process;
printf("\n Enter the Bucket Size: ");
scanf("%d",&cap);
printf("\n Enter the Operation Rate: ");
scanf("%d",&process);
printf("\n Enter the no. of Seconds you want to Stimulate: ");
scanf("%d",&nsec);
for(i=0;i<nsec;i++)
{
printf("\n Enter the Size of the Packet entering at %d sec: ",i+1);
scanf("%d",&inp[i]);
}
printf("\nSecond|PacketRecieved|PacketSent|PacketLeft|Packet Dropped|\n");
printf("--------------------------------------------------------------\n");
for(i=0;i<nsec;i++)
{
count+=inp[i];
if(count>cap)
{
drop=count-cap;
count=cap;
}
printf("%d",i+1);
printf("\t%d",inp[i]);
mini=min(count,process);
printf("\t\t%d",mini);
count=count-mini;
printf("\t\t%d",count);
printf("\t\t%d\n",drop);
drop=0;
 }
for(;count!=0;i++)
{
if(count>cap)
{
drop=count-cap;
count=cap;
}
printf("%d",i+1);
printf("\t0");
mini=min(count, process);
printf("\t\t%d", mini);
count=count-mini;
printf("\t\t%d", count);
printf("\t\t%d\n", drop);
}
}
