#include<stdio.h>
#include<stdlib.h>


//declaração de variavel 

float metros,cm,milimetros,dm ;

int main (){
printf("Quantos metros =");
scanf("%f",&metros);

dm = metros * 10.00 ;
cm = metros * 100.00 ;
milimetros =metros * 1000.00 ;  

printf ("Valor em dm = %.2f\n ",dm );
printf ("Valor em cm = %.2f \n ",cm );
printf ("Valor em milimetros= %.2f\n ",milimetros);


system ("pause");
return 0 ;

}
