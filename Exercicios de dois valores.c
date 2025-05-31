#include <stdio.h>
#include <stdlib.h>

int main () {


//declaração de variáveis 

float valor_um,valor_dois;

printf ("Informe o primeiro valor = ");
scanf("%f",&valor_um );
printf ("Informe o segundo valor = ");
scanf("%f",&valor_dois);

if (valor_um > valor_dois){
  	 printf("%.1f,%.1f\n",valor_um,valor_dois);}		
else if (valor_um < valor_dois){
	 printf("%.1f,%.1f\n",valor_dois,valor_um);
}
else {
	printf("Valores iguais\n");
}   


system("pause");
    return 0;
}

