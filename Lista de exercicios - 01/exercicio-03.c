// Author: Rodrigo Soares

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    system("clear||cls");

    int nota_aluno;

    // recebendo valores

    printf("Informe a nota do aluno: ");
    scanf("%d", &nota_aluno);

    //Verificando os dados e dando o resultado
    
    if (nota_aluno >= 6)
    {
        printf("Aluno aprovado!");
    }
    else
    {
        printf("Aluno reprovado!");
    }

    return 0;
}