#include <stdio.h>
#include <stdlib.h>
#define nul 1000
#define nodes 10
int no=5;
struct node
{
int a[nodes][3];
}
router[nodes];
void init(int r)
{
int i;
for(i=1; i<=no; i++)
{
router[r].a[i][1]=i;
router[r].a[i][2]=999;
router[r].a[i][3]=nul;
}
router[r].a[r][2]=0;
router[r].a[r][3]=r;
}
void inp(int r)
{
int i;
printf("\n \t Enter distance to the node %d to other nodes", r);
printf("\n \t Please enter 999 if there is no direct route\n");
for(i=1; i<=no; i++)
{
if(i!=r){
printf("\n Enter distance to the node %d:", i);
scanf("%d", &router[r].a[i][2]);
router[r].a[i][3]=i;
}
}
}
void display(int r)
{
int i;
printf("\n\n The routing table for node %d is as follows", r);
printf("\n\t\tDest\t\tNext Hop\t\tDist");
for(i=1; i<=no; i++)
{
printf("\n\t\t%d\t%d \t\t%d", router[r].a[i][1],router[r].a[i]
[3],router[r].a[i][2]);
}
}
voiddv_algo(int r)
{
inti,j,z;
for(i=1; i<=no; i++)
{
if(router[r].a[i][2]!=999 && router[r].a[i][2]!=0)
{
for(j=1; j<=no; j++)
{
z=router[r].a[i][2]+router[i].a[j][2];
if(router[r].a[j][2]>z)
{
router[r].a[j][2]=z;
router[r].a[j][3]=i;
}
}
}
}
}
void find(int x, int y)
{
if(router[x].a[y][3]!=y)
{
find(x, router[x].a[y][3]);
printf("%d-->",router[x].a[y][3]);
find(router[x].a[y][3],y);
return;
}
}
int main()
{
int i,j,x,y,no;
int choice;
no = 5;
for(i=1; i<=no; i++)
{
init(i);
inp(i);
}
printf("\n The configuration of the nodes after initialization is as follows:");
for(i=1; i<=no; i++)
display(i);
for(j=1; j<=no; j++)
for(i=1; i<=no; i++)
dv_algo(i);
printf("\n The configuration of the nodes after computation of path is as follows:");
/*printf("\n\tDest\tNext Hop\tDist");*/
for(i=1; i<=no; i++)
display(i);
while(1)
{
printf("\n\n Enter 1 to continue, 0 to quit:");
scanf("%d",&choice);
if(choice!=1)
break;
printf("\n Enter the nodes between which shortest path is to be found:");
scanf("%d%d",&x,&y);
printf("\n The shortest path is:");
printf("%d--->",x);
50
find(x,y);
printf("%d",y);
printf("\n The length of the shortest path is %d",router[x].a[y][2]);
}
return 0;
}
