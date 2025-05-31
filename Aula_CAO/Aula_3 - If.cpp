/* Dados dois números inteiros, faça um programa em C que 
   exibe o maior valor entre esses dois números inteiros.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2;
    
    printf("Informe um numero inteiro: n1= ");
    scanf("%d", &num1);
    
    printf("Informe um outro numero inteiro: n2= ");
    scanf("%d", &num2);
    
    //vamos usar uma estrutura condicional simples
    if (num1 > num2){
             printf("O numero n1 = %d eh maior !\n",num1);
    }
    if (num1 < num2){
             printf("O numero n2 = %d eh maior !\n",num2);
    }
    if (num1 == num2){
             printf("Os dois numeros sao iguais !\n");
    }
    system("pause");
    return 0;
}


