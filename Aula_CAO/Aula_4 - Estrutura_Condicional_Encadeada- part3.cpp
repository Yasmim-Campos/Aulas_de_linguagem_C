#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
    float sal_atual, sal_aumento, aumento;
    setlocale(LC_ALL, "portuguese"); 
    printf("Informe o salário atual de um funcionário: R$ =");
    scanf("%f", &sal_atual);
    //vamos usar estrutura condicional encadeada
    if(sal_atual <= 3000.0){
                 aumento = 0.1545 * sal_atual; //15.45 sobre salarío atual 
                 sal_aumento = sal_atual + aumento;
         }
    else{
         if (sal_atual <= 5500.0){
                     aumento = 0.1015 * sal_atual;
                     sal_aumento = sal_atual + aumento;
         }
         else{
              aumento = 0.075 * sal_atual;
              sal_aumento = sal_atual + aumento;
              }
         }
    printf("O seu salário com aumento = %.2f\n",sal_aumento);
    system("pause");
    return 0;
}

