#include <stdio.h>
int main(){
int i;
int k[10];
printf("Inserisci 10 numeri: \n");
    for(i=0;i<10;i++){
    printf("numero %d",&i+1);
    scanf("%d",&k[i]);
    }
printf("Ecco i numeri: ");
    for(i=0;i<10;i++){
        if(k[i]%2==0){
            printf("%d - ",k[i]);
        }
    }
printf("Ecco i numeri dispari: ");
    for(i=0;i<10;i++){
        if(k[i]%2!=0){
            printf("%d - ",k[i]);
        }
    }
printf("\n");
return 0;
}