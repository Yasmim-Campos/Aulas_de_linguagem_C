
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    int num, resto;
    setlocale(LC_ALL,"portuguese");
    printf("Informe um n�mero inteiro para ser verificado ! n =");
    scanf("%d",&num);
    resto = num % 2;
    if (resto == 0){
          printf("O n�mero %d � um n�mero par!\n",num);
    }
    
    else {
          printf("O n�mero %d � um n�mero impar!\n",num);
    }
    
    system("pause");
    return 0;
}

