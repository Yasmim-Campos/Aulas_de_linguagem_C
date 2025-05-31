#include<stdlib.h>
#include<time.h>
#include<time.h>

int main (){
    int num_megaSena, cont;
    
    srand(time(NULL)); //semente para gerar os números aleatórios
    printf("Mega Sena Sorteada \n");
    cont = 1;
    while(cont<=6){
       num_megaSena = 1 + rand()%60; //gerar um número de 1 a 60
       printf("%d", num_megaSena);
       cont++;
    }
    printf("\nfim do programa!\n");
     system ("pause");
     return 0;
     }
     

