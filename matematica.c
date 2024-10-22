#include<stdio.h>
#include<math.h>
int main(){
float num1 ;
float num2 ;
char operacao;
int cal;
printf("Qual a operaçao matematica");
scanf("%c", &operacao);
printf("Qual o primeiro numero?");
scanf("%f", &num1);
printf("Qual o segundo numero?");
scanf("%f", &num2);

if(operacao=='*'){
    cal= num1* num2;
}else if(operacao=='/'){
    cal= num1 / num2;
}else if(operacao=='+'){
     cal=num1 + num2;
} else if(operacao=='-'){
    cal= num1 - num2;
}else {
    printf("invalido");
} 
printf("%d", cal);
}


