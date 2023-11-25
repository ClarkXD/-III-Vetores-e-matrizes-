#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int opcao;
    char Nome[999];
    float preco[999];
    int quantidade[999];
    int i;
    int j = 0;
    float SomaVendas = 0;

    printf("\nMenu\n");
    printf("\n1 -ADICIONAR UM PRODUTO \n");
    printf("\n2 -SAIR DO MENU\n\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    while (opcao != 2){

    
        printf("Nome: ");
            gets(Nome[i]);
             printf("Preço: ");
                 scanf("%f", &preco[i]);
                    printf("Quantidade: ");
                        scanf("%d", &quantidade[i]);
            flush(stdin);
        printf("Digite 2 par sai ou 1 para continuar: ");
         scanf("%d", &opcao);
            i++;

    }

    for (j = 0; j < i; j++){
        SomaVendas =  SomaVendas + preco[j] * quantidade[j];
    }

    printf("Total de vendas: R$%.1f", SomaVendas);

    

    return 0;
}