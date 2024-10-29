#include<stdio.h>
int main(){
    int ano1;
    int ano2;
    printf("Qual os dois primeiros digitos do seu ano de nascimento");
    scanf("%d", &ano1);
    printf("Qual os dois ultimos digitos do seu nascimento");
    scanf("%d", &ano2);
    int soma= ano1 + ano2;
    int resultado = soma%5;
    if(resultado==0){
     printf("Timido");
    }else if(resultado==1){
        printf("Sonhador");
    }else if(resultado==2){
        printf("Paquerador");
    }else if(resultado==3){
         printf("Atraente");
    }else if(resultado==4){
         printf("Irresistivel");
    }
}