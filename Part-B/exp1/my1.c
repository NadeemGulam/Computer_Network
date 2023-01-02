#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[100],b[100];
    int c=0;
        printf("Value is :");
        scanf("%s",a);
        int n=strlen(a);
        for(int i=0;i<n;i++){
            if((a[i]!='1') && (a[i]!='0')){
                printf("%d",i);
                printf("Invalid input ");
                exit(0);
            }   
        }
        printf("Valid input \n");
        printf("Lenght of the frame = %d",n);
        int j=0;
        for(int i=0;i<n;i++){
        if(a[i]=='1'){
             c++;
        }
            else {
                c=0
                }
        b[j]=a[i];
        j++;
        if(c==5){
            b[j]='0';
            j++;
        }   
    }
    j++;
    b[j]='\0';
    printf("\n");
    printf("After stuffing :%s",b);

}
    
