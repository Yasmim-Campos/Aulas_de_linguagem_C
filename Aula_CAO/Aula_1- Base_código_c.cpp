#include<stdio.h>//biblioteca padr�o para entrada e saida
#include<stdlib.h>//biblioteca para usar o comando system(...)
//programa principal
int main(){    
    //declara��o das vari�veis
    float exer_fix, portf, prova; //vari�veis para entrada de dados
    float media_final; //vari�vel para saida de dados
    
    printf("Informe a sua nota media dos exercicios de fixacao : n1 = ");
    /*comando scanf(..) -> receber um dado digitado por usu�rio e 
    armazenar na vari�vel exer_fix */
    scanf("%f",&exer_fix);
    printf("Informe a sua nota media do portfolio: n2 = ");
    scanf("%f",&portf);
    printf("Informe a sua nota media da prova: n3 = ");
    scanf("%f",&prova);
    //calcular a media final(media ponderada)
    media_final = exer_fix * 0.2 + portf * 0.3 + prova * 0.5 ;
    printf("A media da sua nota  = %.2f\n",media_final);
    
    system("pause");
    return 0;
}


