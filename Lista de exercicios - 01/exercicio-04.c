//Author: Rodrigo Soares

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){

    system("clear||cls");
    
    float altura, peso, imc;

    //Recebendo os dados para manipulação
    printf("Informe a sua altura e seu peso: \n");
    scanf("%f %f",&altura ,&peso);

    //Manipulando os dados recebidos
    imc = peso / (pow(altura , 2));
    printf("O IMC do usuario eh de: %.1f",imc);

    return 0;
}