//Author: Rodrigo Soares

#include <stdlib.h>
#include <stdio.h>

int main(void){

    system("clear||cls");


    //Variaveis a ser utilizadas
    float numerador, denominador, total;

    //Recebendo os dados
    printf("Porcentagem desejada: ");
    scanf("%f", &numerador);
    
    printf("\nValor total a ser retirada a porcentagem: ");
    scanf("%f", &denominador);
    system("clear||cls");


    //Utilizando os dados e informado o resultado final

    total = (numerador / 100) * denominador;
    printf("%.0f porcento de %.0f vai ser: %.0f",numerador ,denominador ,total); 

    return 0;
}