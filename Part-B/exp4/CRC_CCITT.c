#include <stdio.h>
#include <string.h>
#include <stdlib.h>
intcrc(char *ip, char *op, char *poly, int mode)
{
int i,j,k;
strcpy(op, ip);
if (mode) {
for ( i = 0; i < strlen(poly); i++)
strcat(op, "0");
 }
 /* Perform XOR on the msg with the selected polynomial */
for (j = 0; j < strlen(ip); j++) {
if (op[j] == '1') {
for (k = 0; k < strlen(poly); k++) {
if ((op[j + k] == '0') && (poly[k]=='0') || (op[j+k] == '1') && (poly[k] =='1'))
op[j + k] = '0';
else
op[j +k] = '1';
 }
 }
 }
/* check for errors. return 0 if error detected */
for (j = 0; j < strlen(op); j++)
if (op[j]== '1')
return 1;
return 0;
}
int main()
{
inti,n,flag;
charip[50], op[50], recv[50];
char poly[] = "10001000000100001";
/*The Generator polynomial consists of 17 bits.*/
flag=0;strcpy(ip,""); strcpy(op,"");
printf("CRC-16 \n");
printf("Enter the input message in binary:\n");
scanf("%s", &ip);
n = strlen(ip);
for(i=0; i<n; i++){
if ((ip[i]=='0') ||(ip[i]=='1' )){
continue;
}
else{
flag=1; break;
 }
 }
if(flag){
printf ("Invalid input message\n:");
exit (0);
}
crc(ip, op, poly, 1);
printf("The transmitted message is: %s%s\n",ip,op/*+strlen(ip)*/);
printf("Enter the received message in binary\n");
scanf("%s", &recv);
if(!crc(recv, op, poly, 0))
printf("No error in data\n");
else
printf("Error in data transmission has occurred\n");
return 0;
}
