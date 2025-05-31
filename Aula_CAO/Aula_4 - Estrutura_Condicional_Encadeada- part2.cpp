
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    int num, resto;
    setlocale(LC_ALL,"portuguese");
    printf("Informe um número inteiro para ser verificado ! n =");
    scanf("%d",&num);
    resto = num % 2;
    if (resto == 0){
          printf("O número %d é um número par!\n",num);
    }
    
    else {
          printf("O número %d é um número impar!\n",num);
    }
    
    system("pause");
    return 0;
}

