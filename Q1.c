#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i;
    char Nome[5][500];
    int idade[5];
    float peso[5];
    float altura[5];
    float maiorValor = 0;
    float menorValor = 999;
    char maiorNome;
    char menorNome;

    for ( i = 1; i < 5; i++) {
        printf("Digite o Nome: ",i + 1);
        gets(Nome[i]);
            printf("Digite a Idade: ",i + 1);
                 scanf("%d", &idade[i]);
                     printf("Digite o Peso: ",i + 1);
                         scanf("%f", &peso[i]);
                             printf("Digite a Altura: ",i + 1);
                                 scanf("%f", &altura[i]);
        
        
        if(idade[i] > maiorValor){
        maiorValor = idade[i];
        maiorNome[0] = Nome[i];
        } else {
        menorValor = idade[i];
        menorNome[0] = Nome[i];
        }

        if(peso[i] > maiorValor){
        maiorValor = peso[i];
        maiorNome[0] = Nome[i];
        } else {
        menorValor = peso[i];
        menorNome[0] = Nome[i];
        }

        if(altura[i] > maiorValor){
        maiorValor = altura[i];
        maiorNome[0] = Nome[i];
        } else {
        menorValor = altura[i];
        menorNome[0] = Nome[i];
        }

    for( i = 1; i < 5; i++){
    printf("\nNome da %dº pessoa:%s\n", i + 1, Nome[i]);
    printf("Idade da %dº pessoa:%1.f\n", i + 1, idade[i]);
    printf("Peso da %dº pessoa:%2.f\n", i + 1, peso[i]);
    printf("Altura da %dº pessoa:%1.f\n", i + 1, altura[i]);
}
    printf("\nNome da pessoa mais velha:%s\n", maiorNome[0]);
    printf("Maior idade:%1.f\n", maiorValor);
    printf("\nNome da pessoa mais nova:%s\n", menorNome[0]);
    printf("Menor altura:%2.f\n", menorValor);

    }
    
    return 0;
}