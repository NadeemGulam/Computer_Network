#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
char c[80],d[80],ed[10],sd[10];
inti,j,m;
strcpy(c,"");
strcpy(sd,"dlestx");
strcpy(ed,"dleetx");
printf("\nEnter the characters to be stuffed:");
scanf("%s", c);
strcpy(d,sd);
m = strlen(c);
for (i=0, j=6; i<m+1; i++, j++)
{
if((c[i] == 'd') && (c[i+1] =='l') && (c[i+2] == 'e'))
{
d[j] = 'd'; j++;
d[j] = 'l'; j++;
d[j] = 'e'; j++;
i = i+3;
} 
d[j] = c[i];
}
j++; d[j]='\0';
strcat (d,ed); 
printf("\n\nAfter stuffing, transmitted data: %s",d);
return 0;
}

//Enter the characters to be stuffed: javed
//After stuffing, transmitted data:dlestxjaveddleetx
