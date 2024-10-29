#include<stdio.h>
int main(){
    int numero;
    printf("O que deseja fazer?");
    scanf("%d", &numero);
    if( numero==1){
        printf("seu saldo");
    
    }else if(numero==2){
    printf("seu extrato");
    
    }else if(numero==3){
        printf("seu saldo");
    } else if(numero==4){
        printf("deseja sair?");
    }else{
        printf("invalido");
    }
    
}
    