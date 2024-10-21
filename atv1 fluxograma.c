#include<stdio.h>
int main(){
    char estado;
    printf("Qual o seu estado civil?");
    scanf("%c", &estado);
    if(estado== 's'){
        printf("solteiro");
    }
    if(estado== 'c'){
        printf("casado");
    }
    if(estado== 'v'){
        printf("viuvo");
    }
    if(estado== 'd'){
        printf("divorciado");
    }

}