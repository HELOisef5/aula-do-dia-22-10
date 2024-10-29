#include<stdio.h>
int main(){
    char genero;
    float altura;
    float peso;
    printf("Qual o seu genero?");
    scanf("%c", &genero);
    printf("Qual a sua altura?");
    scanf("%f", &altura);

    if(genero=='f'){
       peso= 68.1*altura-44.7;

    }else if(genero=='m'){ 
       peso = 72.7*altura-58;
    }else {

    }
    printf("Seu peso ideal e%f" ,peso);
}