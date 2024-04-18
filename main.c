#include <stdio.h>
#include <stdlib.h>

/*
Desenvolva um programa que faça o Cálculo da Massa Corporal (IMC). O usuário deve
entrar com o peso e a altura. E classificar o resultado de acordo com a tabela abaixo:
–Menos do que 18,5: Abaixo do peso;
–Entre 18,5 e 24,9: Peso normal;
–Entre 25 e 29,9: Sobrepeso;
–Entre 30 e 34,9: Obesidade grau 1;
–Entre 35 e 39,9: Obesidade grau 2;
–Mais do que 40: Obesidade grau 3;
*/

int main()
{
    // variável de peso
    float peso = 0;
    // variável de altura
    float altura = 0;

    // leitura da variável peso
    printf("Informe o peso: ");
    scanf("%f", &peso);

    // leitura da variável altura
    printf("Informe altura: ");
    scanf("%f", &altura);

    // variável do resultado do cálculo de IMC
    float resultado = peso / (altura * altura);

    // imprime a classificação do IMC de acordo com a variável resultado
    if(resultado < 18.5) {
        printf("\nAbaixo do peso.");
    }

    else if(resultado >= 18.5 && resultado <= 24.9) {
        printf("\nPeso normal.");
    }

    else if(resultado >= 25 && resultado <= 29.9) {
        printf("\nSobrepeso.");
    }

    else if(resultado >= 30 && resultado <= 34.9) {
        printf("\nObesidade grau 1.");
    }

    else if(resultado >= 35 && resultado <= 39.9) {
        printf("\nObesidade grau 2.");
    }

    else if(resultado >= 40) {
        printf("\nObesidade grau 3.");
    }

    return 0;
}
