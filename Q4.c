#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;
    int numero[5];
    int par = 0;
    int impar = 0;
    int menor = 999;
    int maior = 0;
    int contagemImpar = 0;
    int contagemNegativo = 0;

    for (i = 0; i < 5; i++){

        printf("Ponha o %d Numero: ", i + 1);
        scanf("%d", &numero[i]);

            if (numero[i] % 2 == 0){
                par += numero[i];
                } else{
            impar += numero[i];
            contagemImpar++;
                }
            if (numero[i] > maior){
                maior = numero[i];
                }
            if (numero[i] < menor){
                 menor = numero[i];
                 }  
              if(numero[i] < 0){
                 contagemNegativo++;
                  }

    }

    float MediaImpar =  impar / 5;
    float MediaPar =  par / 5;
    float MediaTotal = MediaImpar + MediaPar;

    printf("Quantidade de numeros impares: %d", contagemImpar);
    printf("Quantidade de numeros negativos: %d", contagemNegativo);
    printf("Maior numero digitado: %d", maior);
    printf("Menor número digitado: %d", menor);
    printf("Média de numeros pares: %.2f", MediaPar);
    printf("Média total dos numeros: %.2f", MediaTotal);

    return 0;
}