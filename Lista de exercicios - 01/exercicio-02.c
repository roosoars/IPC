//Author: Rodrigo Soares

#include <stdlib.h>
#include <stdio.h>

int main(void){

    system("clear||cls");

    int salario, salario_final;
    float resultado;

    //Recebendo os dados
    printf("Informe seu salario e o valor que ficou depois de perde uma parte \n");
    scanf("%d %d", &salario , &salario_final);

    system("clear||cls");

    //Resolvendo o problema e dando o resultado

    resultado = salario - salario_final;
    resultado = (resultado / salario) * 100;

    printf("Foi perdido %.0f porcento",resultado);


    return 0;
}