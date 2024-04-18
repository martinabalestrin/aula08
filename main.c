#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa que implemente uma lista de prioridades. O programa receber� uma
lista de valores dada pelo usu�rio, os valores podem ser em ordem aleat�ria. O programa
deve armazenar os valores em um vetor decrescente.
*/

void DecrescVetor(int vet[], int tam) {

    // ordena o vetor
    for(int i = 0; i < tam; i++) {
        for(int j = i+1; j < tam; j++) {
            if(vet[i] < vet[j]) {
                // troca de valores
                int aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}

int main()
{
    // vari�vel do tamanho do vetor
    int tam = 0;

    // leitura do valor do tamanho
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    // vari�vel do vetor de valores
    int vet[tam];

    // leitura dos valores do vetor
    for(int i = 0; i < tam; i++) {
        printf("Informe o n�mero %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    // organiza o vetor em ordem decrescente
    DecrescVetor(vet, tam);

    // imprime o vetor
    for(int k = 0; k < tam; k++) {
        printf("%d, ", vet[k]);
    }

    return 0;
}
