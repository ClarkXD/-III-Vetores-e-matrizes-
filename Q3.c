#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    char numeros[99][100];
    int opcao;
    int i;
    int contador= 0;
    char nomes[99][200];

    printf("\nMenu\n");
    printf("\n1 -Cadastrar novo contato na lista telefonica \n");
    printf("\n2 - Mostrar os n�meros cadastrados \n");
    printf("\nDigite a op��o desejada: ");
    scanf("%d", &opcao);

    do
    {

        fflush(stdin);

        printf("Nome: ");
        gets(nomes[contador]);
        printf("N�mero: ");
        gets(numeros[contador]);
  
  
        printf("1 -Cadastrar novo contato na lista telefonica \n");
        printf("2 - Mostrar os n�meros cadastrados: ");

            printf("\nDigite a op��o desejada: ");
                 scanf("%d", &opcao);
                contador++;

        } while (opcao != 2);
        printf("N�MEROS CADASTRADOS:\n\n");
        for     (i = 0; i < contador; i++)
            {
        printf("Nome: %s\n", nomes[i]);
        printf("N�mero: %s\n\n", numeros[i]);
    }

    return 0;
}